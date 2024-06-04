class insufficentFundsException extends RuntimeException{
    public insufficentFundsException(String message){
        super(message);
    }
    public insufficentFundsException(double amount){
        super("Insufficient funds for withdraw  "+ amount);
    }
}
class BankAccount{
    private String Name;
    private double balance;
    private long accountno;
    private static final double fee=5.90;
    BankAccount(String n, double b , long a){
        this.Name=n;
        this.balance=b;
        this.accountno=a;
    }
    public void withdrawFunds(double amount)throws insufficentFundsException
    {
        if(amount<balance){
            throw new insufficentFundsException(String.format("current balance is %.2f is less than %2.f",balance,amount));
        }
        this.balance -=amount;
    }
   public String getName(){
    return Name;
   }
   public void SetName(String n){
    this.Name=n;
   }
   public double getbalance(){
    return balance;
   }
   public void setBalance(double b){
    this.balance=b;
   }
   public long getaccountno(){
    return accountno;
   }
   public void deposit(double amount){
    if (amount<=0){
        throw new IllegalArgumentException(String.format("invalid deposit amount %s,amount"));
    }
    this.balance+=amount;
}
public void transfer(BankAccount bankacc, double amounttotransfer){
    if(this.balance<amounttotransfer+BankAccount.fee){
        throw new insufficentFundsException(String.format(format:"current balance is %.2f is less than requested amount %,2f",balance,amounttotransfer));
    }
    bankacc.deposit(amounttotransfer);
    this.withdrawFunds(amounttotransfer+BankAccount.fee);
}
}
public static exception{
    public static void main(String[] args){
        BankAccount bankacc1=new BankAccount("John",1000,1234567890L);
        
    }

}