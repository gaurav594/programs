 #include < iostream >
using namespace std;

// A is the array that contains the numbers
// comb is an array of size k that will hold all possible combinations
// n is the size of input array
// k is 1 less than the size of combination i.e. we want to find out 4C2 k =1
// current_k is the variable that makes us simulates k loops in a recursive function
void combinations(int A[],int comb[], int start, int n, int current_k,int k)
{
    if(k < 0)
        return;

    // Base case just print all the numbers 1 at a time
    if(k==0)
    {
        for(int i =0;i < n;i  )
            cout << A[i] << "-";
        cout << endl;
    }

    // current_k goes from 0 to k-1 and simulates a total of 
    // k iterations
    if(current_k < k)
    {
        // if current_k = 0, and k = 3 (i.e. we need to find combinations of 4) 
        // then we need to leave out 3 numbers from the end because there are 3
        // more nested loops
        for(int i= start;i < n- (k-current_k);i  )
        {
            // Store the number in the comb array and recursively call with the remaining sub-array
            comb[current_k] = A[i];
            // This will basically pass a sub array starting at index 'start' and going till n-1
            combinations(A,comb,i 1,n,current_k 1,k);
        }       
    }
    else if(current_k == k)
    {
        for(int i=start;i < n;i  )
        {
            comb[current_k] = A[i];
            for(int j = 0;j < = k;j  )
                cout << comb[j]  <<  "-";
            cout << endl;
        }
    }
    else
        return;
}

int main()
{
    int n;
    cout << "Enter the 'n' " << endl;
    cin>>n;
    int *A = new int[n];
    for(int i =0;i < n;i  )
        A[i]=i 1;

    int k;
    cout << "Enter 'k'" << endl;
    cin>>k;
    int *comb = new int[k];

    combinations(A,comb,0,n,0,k-1);

    system("pause");
    return 0;
}