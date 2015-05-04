import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class Solution {
public static void main(String args[]) throws IOException {
BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
int n = Integer.parseInt(br.readLine());
int[][] dpArr = new int[26][n];
String[] rocks = new String[n];
for(int i=0;i<n;i++){
rocks[i] = br.readLine();
for(int j=0;j<rocks[i].length();j++){
dpArr[rocks[i].charAt(j)-'a'][i] = 1;
}
}
int res=0;
for(int i=0;i<26;i++){
int row=0;
for(int j=0;j<n;j++){
if(dpArr[i][j]==1)
row++;
}
if(row==n)
res++;
}
System.out.println(res);
}
}