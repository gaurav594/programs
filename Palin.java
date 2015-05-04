import java.util.*;
class Palin
{
public static void main(String args[])
{
Scanner st=new Scanner(System.in);
String s=st.nextLine();
    int len = s.length();
	String str[]=new String[len];
    int low, high;
	int start=0;
	int maxLength=1;
    for (int i = 1; i < len; ++i)
    {
		        low = i - 1;
        high = i;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
		}
		String go=s.substring(start,maxLength);
		System.out.println("palendrome is"+go);  
}
}