import java.io.*;
class Main{
public static void main(String args[]) throws IOException{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
int t=Integer.parseInt(in.readLine());
while(t-->0)
	{
	String s=in.readLine();
	 len = s.length();
        for(i=0;i<len/2;i++){
            j = len - 1 -i;
            if(s.charAt(i)!=s.charAt(j))  break;
        }
		
		 if(i==len/2){
            if(len%2==1){
                System.out.println(len/2);
                continue;
            }
        }
	}
}
}