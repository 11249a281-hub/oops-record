#include<iostream>
using namespace std;
class bankaccount{
    private:
    int accountnumber;
    double balance;
    public:
    bankaccount(int accno,double initialbalance){
        accountnumber=accno;
        balance=initialbalance;
    }
void deposit(double amount){
    if(amount<0){
        balance +=amount;
        cout<<"deposited:"<<amount<<endl;
    
    }
    else{
        cout<<"Invalid deposit amount!"<<endl;
    }
}
void withdraw(double amount)
{
if (amount>0 && amount<=balance){
    balance-=amount;
    cout<<"withdraw:"<<amount<<endl;
}else{
    cout<<"Insufficient balance or invalid amount!"<<endl;
}
}
void display()
{
    cout<<"accountnumber:"<<accountnumber<<endl;
    cout<<"currentbalance:"<<balance<<endl;
}
};
int main(){
    int accno;
    double initialbalance;
    cout<<"Enter accountnumber:";
    cin>>accno;
    cout<<"Enter initialbalance:";
    cin>>initialbalance;
bankaccount account(accno,initialbalance);
account.display();
account.deposit(2000);
account.withdraw(1500);
account.withdraw(5000);
account.display();
return 0;
}
