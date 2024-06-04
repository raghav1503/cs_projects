class MyThread extends Thread {

    private String threadname;
    MyThread(String name){
        threadname=name;
    }
    public void run(){
        for(int i=1;i<=5;i++){
            System.out.println(threadname+ " message"+i);
            try{
                Thread.sleep(500);
            }
            catch(InterruptedException E){
                System.out.println(" Thread name: "+ "intruppted");
            }
            
        }
    }
    
}
public class SimpleMultithread {

    public static void main(String[] args) {
        MyThread thread1=new MyThread("thread 1st");
        MyThread thread2=new MyThread("thread 2nd");
        thread1.start();
        thread2.start();                                    // it defaults goes to run method.
    }
}