#include<iostream>
#include<vector>
#include<string.h>
#include<climits>

#define BASIN 1
#define NOT_BASIN 2
#define NOT_DEFINED_YET 3

#define ROW 1000
#define COLUMN 1000
#define MAXIMUM_HEIGHT_POSSIBLE 1000

using namespace std;

int heights[ROW][COLUMN];  // It stores the height
int maximumBasin[ROW][COLUMN]; // It stores the state of each index, Total 3 states possible, ( BASIN, NOT_BASIN, NOT_DEFINED_YET )
bool alreadyVisited[ROW][COLUMN]; // True, if currect index visited, otherwise false.
vector< pair<int, int> > heightsCoordinates[MAXIMUM_HEIGHT_POSSIBLE]; // It stores all the indexs of given height.
int N, M, maxHeightPossible;

int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};

bool isValidLocation(int x, int y) {
    if(x < 0 || x > M || y < 0 || y > N || alreadyVisited[x][y] == true) return false;
    return true;
}

void DFS_FOR_MARKING_WITH_GIVEN_VALUE(int value, int x, int y) {
    maximumBasin[x][y] = value;
    alreadyVisited[x][y] = true;
    for(int i = 0; i < 8; i++) if( isValidLocation(x + dx[i], y + dy[i]) && heights[x + dx[i]][y + dy[i]] >= heights[x][y] ) DFS_FOR_MARKING_WITH_GIVEN_VALUE(value, x + dx[i], y + dy[i]);
}

void DFS_FOR_COUNTING_BASINS_TOGETHER(int &cnt, int x, int y) {
    cnt++;
    alreadyVisited[x][y] = true;
    for(int i = 0; i < 8; i++) if( isValidLocation(x+dx[i], y+dy[i]) && maximumBasin[x + dx[i]][y + dy[i]] ==  BASIN ) DFS_FOR_COUNTING_BASINS_TOGETHER(cnt, x + dx[i], y + dy[i]);
}

void printBasin() {
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) cout << maximumBasin[i][j] << "  ";
        cout << endl;
    }
}

main() {

    cin >> M >> N >> maxHeightPossible;
    int x, y;
    int maximumCounts = INT_MIN;
    int cntTemp = 0;

    /**
     Take input and set NOT_DEFINED_YET for maximumBasin.
    **/
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
             cin >> heights[i][j];
             maximumBasin[i][j] = NOT_DEFINED_YET;
             heightsCoordinates[ heights[i][j] ].push_back(pair<int, int>(i, j));
        }
    }

    /**
    Iterate from smallest to largest height.
    If current index is  "NOT_DEFINED_YET" (means it is the candidate index where water can collect).  Water will come here from all neighbourhood whose height is greater than this.
    For that I call DFS_FOR_MARKING_WITH_GIVEN_VALUE function.
    **/
    for( int i = 0; i <= maxHeightPossible; i++ ){
        if(heightsCoordinates[i].size() == 0) continue;
        for(int j = 0; j < heightsCoordinates[i].size(); j++) {
            x = heightsCoordinates[i][j].first;
            y = heightsCoordinates[i][j].second;
            if( maximumBasin[x][y] == NOT_DEFINED_YET ) {
                maximumBasin[x][y] = BASIN;
                alreadyVisited[x][y] = true;
                for(int k = 0; k < 8; k++) {
                    if( isValidLocation( x + dx[k], y + dy[k] ) ) {
                        if ( heights[x + dx[k]][ y + dy[k]] > heights[x][y] ) {
                            DFS_FOR_MARKING_WITH_GIVEN_VALUE(NOT_BASIN, x + dx[k], y + dy[k]);
                        }
                    }
                }
            }
            else {
                // If  it is set by BASIN or NOT_BASIN, Shows already processed before.
            }
        }
    }

    //printBasin();

    memset(alreadyVisited, 0, sizeof(alreadyVisited));

    /**
        It simply counts basins which are together.
    **/
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            if( alreadyVisited[i][j] == false && maximumBasin[i][j] == BASIN) {
                DFS_FOR_COUNTING_BASINS_TOGETHER(cntTemp, i, j);
                //cout << cntTemp << endl;
                if(cntTemp > maximumCounts ) maximumCounts = cntTemp;
                cntTemp = 0;
            }
        }
    }

    /**
        This is our final Answer.
    **/
    cout << maximumCounts << endl;
    return 0;
}