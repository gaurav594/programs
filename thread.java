class NewThread extends Thread
{
NewThread()
{
super("Demo thread");
start();
}
public void run(){
try{
for(int i=5;i>0;i--){
System.out.println("child thread"+i);
Thread.sleep(500);
}
}
catch(InterruptedException e){
System.out.println("child interrupted");
}
System.out.println("Existing child thread");
}
}
class ExtendThread{
public static void main(String args[])
{
new NewThread();
try{
for(int i=5;i>0;i--)
{System.out.println("main thread:"+i);
Thread.sleep(1000);
}
}catch(InterruptedException e)
{
System.out.println("mainthread interrupted");
}
System.out.println("main thread existing ");
}
}