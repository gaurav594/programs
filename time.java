
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class l_kul {
	
	static long mul[]=new long[10001];
	public static void main(String s[]) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int tcases = Integer.parseInt(br.readLine());
		boolean arr[]=new boolean[1441];
		while(tcases--!=0)
		{
			StringTokenizer st = new StringTokenizer(br.readLine(), ":-");
			int a=Integer.parseInt(st.nextToken())*60+Integer.parseInt(st.nextToken());
			int b=Integer.parseInt(st.nextToken())*60+Integer.parseInt(st.nextToken());
			for(int i=a;i<b;i++)
				if(arr[i])
				{
					System.out.println("Will need a moderator!");
					System.exit(0);
				}
				else
					arr[i]=true;
		}
		System.out.println("Who needs a moderator?");
	}
	
	
	
}
