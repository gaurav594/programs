import java.util.StringTokenizer;
class WordReverse {
public static void main (String []arg)
    {
        int nWordCount;
        int nNdx,i,o,c,k=0;
        String s = "gaurav_saurav_gaurav_ramu_kaka";
        StringTokenizer tokenizer = new StringTokenizer (s,"_");
        nWordCount = tokenizer.countTokens(); 
        String[] sWords = new String[nWordCount];
        nNdx = 0;
          while (tokenizer.hasMoreTokens())
          {
            sWords[nNdx]= (tokenizer.nextToken());
            nNdx = nNdx + 1;
          }
		  String arr="";
		  String are="";
          for(o=0;o<nNdx; o++)
          {
		  c=0;
		  are=sWords[o];
          for(i=0;i<nNdx;i++)
		  {
		  if(are.equals(sWords[i])&&sWords[i]!="o")
		  {
		  c=c+1;
		  sWords[i]="o";
		  }
		  }
		  if(c!=0)
		  k++;
		  if(are!="o"&&nNdx-1!=k)
		  arr=arr+are+c+"_"; 
		  else if(nNdx-1==k&&are!="o")
		    arr=arr+are+c;
          are="";		  
          }
		 System.out.println(arr);
    }
}