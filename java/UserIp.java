import java.util.Scanner;
public class UserIp{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("what is your name:");
        String Fname=sc.next();
        System.out.println("what is your age:");
        int Age=sc.nextInt();
        System.out.println("what is your gender:");
        String Gender=sc.next();
		System.out.println("what is your cgpa:");
		Float cgpa = sc.nextFloat();
        System.out.print("what is your favourite color?:");
        String Color=sc.next();
    }
}
