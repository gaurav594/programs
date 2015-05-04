
import java.util.*;

class Main{
   public static void main(String args[]) {
      // create hash map
      HashMap newmap = new HashMap();
     
      newmap.put(3, "is best");
      
      System.out.println("Map value before change: "+ newmap);
      
      // put new values at key 3
      String prevvalue=(String)newmap.put(3,"is great");
      
      // check returned previous value
      System.out.println("Returned previous value: "+ prevvalue);
      
      System.out.println("Map value after change: "+ newmap);
   }    
}