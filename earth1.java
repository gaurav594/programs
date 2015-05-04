import java.util.*;
import java.io.*;

class TestClass {

	public static void main(String[] args) {
		
		int i;
		String str = new String();
		Scanner s = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
		while(s.hasNext()) {
			str = s.nextLine();
			StringBuffer sb= new StringBuffer("");
			int mode=0;
			for(i=0;i<str.length()-1;) {
				if(mode==0) {
					if(str.charAt(i)=='-' && str.charAt(i+1)=='>') {
						sb.append('.');
						i+=2;
					}
					else if(str.charAt(i)=='/' && str.charAt(i+1)=='/') {
						sb.append(str.charAt(i));
						sb.append(str.charAt(i+1));
						mode = 1;
						i+=2;
					}
					else {
						sb.append(str.charAt(i));
						i++;
					}
				}
				else {
					sb.append(str.charAt(i));
					i++;
				}
			}
			if(i < str.length()) sb.append(str.charAt(i));
			System.out.println(sb);
		}
		s.close();

	}

}
