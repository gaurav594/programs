import java.util.*;

class GemStones{

	static int[] count = new int[26];
	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);
		int gems = 0;
		int t = in.nextInt();

		for(int j = 0; j <= t;j++){
			String temp = getUnique1( in.nextLine());
			getUnique(temp);
		}

		for(int i = 0; i<count.length; i++){			
			if(count[i]==t){
				gems++;
			}
		}
		System.out.println(gems);
	}

	private static String getUnique1(String str){
		boolean[] strSet = new boolean[256];
		char[] charArr = new char[str.length()];
		int ind = 0;
		for(int i = 0; i<str.length(); i++){

			int val = str.charAt(i);
			if(strSet[val]){ 			
				continue; 
			}
			strSet[val] = true;
			charArr[ind++] = str.charAt(i);

		}
		String ret = new String(charArr);
		return ret.trim();	

	}

	private static void getUnique(String a){		

		for(int i = 97; i< 97+26; i++){			
			int present = 0;
			for(int x = 0; x<a.length(); x++){
				if(i == a.charAt(x)){
					count[i-97]++;					
				}
			}

		}

	}
}