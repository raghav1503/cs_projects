class Person{
    long aadharno;
    String name;
    Character gender;
    String emialid;
    long mobileno;
    public Person(long a,String n,Character g,String e,long m){
        this.aadharno=a;
        this.name=n;
        this.gender=g;
        this.emialid=e;
        this.mobileno=m;
    }
   public void display(){
    System.out.println("Name: "+this.name);
    System.out.println("Aadhar no: "+this.aadharno);
    System.out.println("Gender:"+this.gender);
    System.out.println("Email id"+this.emialid);
    System.out.println("Mobile no: "+this.mobileno);
   }
    public void setname(String n){
        this.name=n;
    }
    public String getname(){
        return this.name;
    }
    public void setaadharno(long a){
        this.aadharno=a;
    }
    public long getaadharno(){
        return this.aadharno;
    }
    public void setgender(Character g){
        this.gender=g;
    }
    public Character getgender(){
        return this.gender;
    }
    public void setemailid(String e){
        this.emialid=e;
    }
    public String getemailid(){
        return this.emialid;
    }
    public void setmobileno(long m){
        this.mobileno=m;
    }
    public long getmobileno(){
        return this.mobileno;
    }
 }
public class DemoPerson {
    public static void main(String[] args) {
      Person p1=new Person(53241213l,"raghav",'m',"ra@gmail.com",93103902923l);
      Person p2=new Person(49208l, "raghav", 'm', "arun@gmail.com", 0424234345435l);
      Person p3=new Person(49223428l, "raghav", 'f', "raghav@gmail.com", 0424234345435l);
      Person p4=new Person(4928388l, "hemant", 'f', "raghav@gmail.com", 0424345435l);
      
      Person p5=new Person(49205432l, "raghav", 'm', "raghav@gmail.com", 0424234345435l);
      
      p1.display();
      p1.setname("ankit");
      p1.setaadharno(6243432413123l);
      p1.setgender('m');
      p1.setemailid("ankit@gmail.com");
      p1.setmobileno(30190294982l);
      System.out.println();
      System.out.println("The updated values for p1 :");
      System.out.println("name: "+p1.getname() );
      System.out.println("aadhar no: "+p1.getaadharno());
      System.out.printf("gender: ",p1.getgender());
      System.out.println("email id: "+p1.getemailid());
      System.out.println("mobile no : \n"+p1.mobileno);
     
      p2.setname("ankit");
      System.out.println("The updated values are p2  : "+p2.getname());  
      p3.setname("ayushi");
      System.out.println("The updated values are  p3 : "+p3.getname());
      p4.setname("namila");
      System.out.println("The updated values are  p4 : "+p4.getname());
      p5.setname("mukul");
      System.out.println("The updated values are p5 : "+p5.getname());
    }  
}