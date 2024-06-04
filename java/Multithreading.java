public class MyRthread implements Runnable{
    private int threadNumber;
    public MyRthread(int number){
        threadNumber=number;
    }
    public void run(){
        For(int i=1; i<=5; i++){
            System.out.println("Thread "+threadNumber+" is running");
    }
    try{
        Thread.sleep(1000);
    }
    catch(InterruptedException e){
        e.printStackTrace();
    }
}
}
public class Multithreading {

    
}