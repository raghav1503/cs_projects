public class CmdInt{
public static void main(String[] args)
{
int n1=Integer.parseInt(args[0]);
int n2=Integer.parseInt(args[1]);
System.out.print("Sum of Integer" +n1+ "&" +n2+"is:");
System.out.println(n1+n2);
System.out.print("Difference of Integer" +n1+ "&" +n2+"is:");
System.out.println(n1-n2);
System.out.print("Multiplication of Integer" +n1+ "&" +n2+"is:");
System.out.println(n1*n2);
float div=n1/n2;
System.out.print("Division of Integer" +n1+ "&" +n2+"is:");
System.out.println(div);
}
}