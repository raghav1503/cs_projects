public class Sequention
{    public static void main(String[] args) 
    {
        for(int i=1; i<=5;i++)
        {
            System.out.println("Thread 1-massage"+i);
            try
            {
                Thread.sleep(500);
            }
                catch(InterruptedException e)
                {
                    System.out.println("Thread 1 interrupted");
                }
        }
    System.out.println("thread 1 message");
        for(int i=1;i<=5;i++)
        {
            System.out.println("thread 2-message"+i);
            try
            {
                Thread.sleep(500);
            }
            catch(InterruptedException e)
            {
                System.out.println("thread 2 interrupted");
            }
            System.out.println("thread 2 message");
        }
    }
}

