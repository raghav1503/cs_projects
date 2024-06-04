import java.util.Scanner;
public class Stringreverse {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str=sc.nextLine();
         int n=str.length();
         String rve=" ";
         for(int i=n-1;i>=0;i--){
            rve=rve+str.charAt(i);
         }
         System.out.println(rve);
    }
}