public class PersonDemo2{
  private long AadharNo;
  private String Name;
  private char Gender;
  private String Email;
  private long MobileNo;
  private Mydate dob;

 public PersonDemo2(long AadharNo, String Name, char Gender, String Email, long MobileNo, Mydate dob){
  this.AadharNo=AadharNo;
   this.Name=Name;
  this.Gender=Gender;
   this.Email=Email;
   this.MobileNo=MobileNo;
    this.dob=dob;
}
public void Display(){
System.out.println("AadharNo : " + AadharNo);
System.out.println("Name : " + Name);
System.out.println("Gender : " + Gender);
System.out.println("Email : " + Email);
System.out.println("MobileNo : " + MobileNo);
dob.showDate();

}  
public static void main(String[] args){
   Mydate dob1 = new Mydate(2005,03,18);
   Mydate dob2 = new Mydate(2004,07,20);
   PersonDemo2 p1 = new PersonDemo2(336548913487L,"Aditi",'F',"aditi@gmail.com",9632147896L,dob1);
   PersonDemo2 p2 = new PersonDemo2(597412578785L,"Arpit",'M',"arpit@gmail.com",6247856316L,dob2);
   
   p1.Display();
   p2.Display();

}
int year;
int month;
int day;
public PersonDemo2(int Y, int M, int D){
this.year = Y;
this.month = M;
this.day = D;
}
void showDate(){
  System.out.println("Date of Birth: " + this.year + "/" + this.month +"/" + this.day);
}
public String toString(){
 return "DD/MM/YYYY" + day + "/" + month + "/" + year;//compute age
}
}