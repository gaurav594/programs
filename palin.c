import java.util.*;
class Palin
{
public static void main(String args[])
{
Scanner st=new Scanner(System.in);
String s=st.nextLine();
    int len = s.length;
 
    int low, high;
    for (int i = 1; i < len; ++i)
    {
		if(len%2==0)
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

 else
		{
        low = i - 1;
        high = i + 1;
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
}
string go=s.subString(low,high);
System.out.println("palendrome is"+go);  
}
}