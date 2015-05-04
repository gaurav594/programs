import java.util.*;

enum Result {
WINN, LOSS, DRAW;
}

public class TTT {
public static void main(String[] av) {
new TTT().go();
}

// keep track of anything altready calculated. Needless to say, we only
// keep the canonical numbers.
Map	 knownResults	= new HashMap();
Map>	knownWin	 = new HashMap>();
Map>	knownLoss	 = new HashMap>();
Map>	knownDraw	 = new HashMap>();

/**
* I will model the board as a 32 bit integer. The first 16 bits are “my” moves, the second 16 bits are “it’s” move.
*/
void go() {
calculate(0); // empty board.
for (int board : new TreeSet(knownResults.keySet())) {
System.out.print(toString(board));
System.out.print(‘ ‘);
System.out.print(knownResults.get(board));
System.out.print(“.”);
if (knownWin.containsKey(board)) {
System.out.print(” WINNING MOVES:”);
for (int move : knownWin.get(board)) {
System.out.print(‘ ‘);
System.out.print(toString(move));
}
System.out.print(“.”);
}
if (knownDraw.containsKey(board)) {
System.out.print(” DRAWING MOVES:”);
for (int move : knownDraw.get(board)) {
System.out.print(‘ ‘);
System.out.print(toString(move));
}
System.out.print(“.”);
}
if (knownLoss.containsKey(board)) {
System.out.print(” LOSING MOVES:”);
for (int move : knownLoss.get(board)) {
System.out.print(‘ ‘);
System.out.print(toString(move));
}
System.out.print(“.”);
}
System.out.println();
}
}

Result calculate(final int board) {
if (knownResults.containsKey(board))
return knownResults.get(board);
// ok! we don’t know if this specified board is a win, loss, or a draw.
// at this point, the other player has just moved.
if (((board & 0007) == 0007) || ((board & 0070) == 0070) || ((board & 0700) == 0700)
|| ((board & 0111) == 0111) || ((board & 0222) == 0222) || ((board & 0444) == 0444)
|| ((board & 0124) == 0124) || ((board & 0421) == 0421)) {
knownResults.put(board, Result.LOSS);
return Result.LOSS;
}
boolean allLoss = true;
boolean anyWin = false;
boolean nomoves = true;
for (int move = 0; move < = 8; move++) {
if ((board & (0x00010001 << move)) != 0)
continue;
nomoves = false;
int nextmove = board | (0x00010000 << move);
Result nextresult = calculate(toCanonical(swapplayer(nextmove)));
switch (nextresult) {
case LOSS:
anyWin = true;
noteWinningMove(board, nextmove);
break;
case WINN:
noteLosingMove(board, nextmove);
break;
case DRAW:
noteDrawingMove(board, nextmove);
allLoss = false;
break;
}
}
if (anyWin) {
knownResults.put(board, Result.WINN);
}
else if (nomoves) {
knownResults.put(board, Result.DRAW);
}
else if (allLoss) {
knownResults.put(board, Result.LOSS);
}
else {
knownResults.put(board, Result.DRAW);
}
return knownResults.get(board);
}

void noteLosingMove(int a, int b) {
if (!knownLoss.containsKey(a))
knownLoss.put(a, new HashSet());
knownLoss.get(a).add(toCanonical(b));
}

void noteDrawingMove(int a, int b) {
if (!knownDraw.containsKey(a))
knownDraw.put(a, new HashSet());
knownDraw.get(a).add(toCanonical(b));
}

void noteWinningMove(int a, int b) {
if (!knownWin.containsKey(a))
knownWin.put(a, new HashSet());
knownWin.get(a).add(toCanonical(b));
}

/**
* each possible board has a “canonical” orientation. This zaps rotations and reflections
*/
int toCanonical(int board) {
int lowestform = board;
int currentform = board;
for (int i = 0; i < 3; i++) {
currentform = rotate(currentform);
if (currentform < lowestform)
lowestform = currentform;
}
currentform = reflect(board);
if (currentform < lowestform)
lowestform = currentform;
for (int i = 0; i < 3; i++) {
currentform = rotate(currentform);
if (currentform < lowestform)
lowestform = currentform;
}
return lowestform;
}

// to rotate the board, shuiffle the bits
int rotate(int board) {
return (((board >>> 0) & 0×00010001) < < 2) | (((board >>> 1) & 0×00010001) < < 5)
| (((board >>> 2) & 0×00010001) < < 8) | (((board >>> 3) & 0×00010001) < < 1)
| (((board >>> 4) & 0×00010001) < < 4) | (((board >>> 5) & 0×00010001) < < 7)
| (((board >>> 6) & 0×00010001) < < 0) | (((board >>> 7) & 0×00010001) < < 3)
| (((board >>> 8) & 0×00010001) < < 6);
}

// to reflect the board, shuiffle the bits
int reflect(int board) {
return (((board >>> 0) & 0×00010001) < < 2) | (((board >>> 1) & 0×00010001) < < 1)
| (((board >>> 2) & 0×00010001) < < 0) | (((board >>> 3) & 0×00010001) < < 5)
| (((board >>> 4) & 0×00010001) < < 4) | (((board >>> 5) & 0×00010001) < < 3)
| (((board >>> 6) & 0×00010001) < < 8) | (((board >>> 7) & 0×00010001) < < 7)
| (((board >>> 8) & 0×00010001) < < 6);
}

int swapplayer(int board) {
return (board >>> 16) | (board < < 16);
}

String toString(int board) {
StringBuffer sb = new StringBuffer();
for (int i = 0; i < 9; i++) {
if(i==3 || i==6)
sb.append('/');
sb.append(((board & 1) != 0) ? 'O' : ((board & 0x10000) != 0) ? 'X' : '-');
board >>>= 1;
}
return sb.toString();
}
}