#include<iostream>
using namespace std;

class Bank{
    private:
        int accNo;
        int balance;
        int amount;
    protected:
        int pin;
    public:
    Bank() {
        pin = 1234;
    }
        void getAccNo();
        void getbalance();
        bool verifyPin();
        void deposit();
        void withdraw();
        int getAccountNumber();
        int getAccountBalance();
        void promptPin();
};
void Bank::getAccNo(){
    cout<<"Enter your account number: ";
    cin>>accNo;
}
void Bank::getbalance(){
    cout<<"Enter your bank balance: ";
    cin>>balance;
}
bool Bank::verifyPin(){
    int enterPin;
    cout << "Enter your pin: ";
    cin >> enterPin;
    if(enterPin == pin){
        cout<<"Correct pin! Access granted :)"<<endl;
        return true;
    }
    else{
        cout<<"Incorrect pin! Access denied :("<<endl;
        return false;
    }
}
void Bank::deposit(){
    cout<<"Enter amount to deposit: ";
    cin>>amount;
    balance+=amount;
    cout<<amount<<" deposited!" <<endl;
    cout<<"Total balance: "<<balance <<endl;
}
void Bank::withdraw(){
    if(balance > 0){
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        if(amount <= balance){
            balance-=amount;
            cout<<amount<<" withdrawl!" <<endl;
            cout<<"Total balance: "<<balance <<endl;
        }
        else{
            cout<<"No enough balance! "<<endl;
    }
    }
    else{
        cout<<"No enough balance! "<<endl;
    }
}
int Bank::getAccountNumber(){
    return accNo;
}
int Bank::getAccountBalance(){
    return balance;
}
// void Bank::promptPin(){ getpin(); }

int main(){
    Bank b;
    int choice;
    b.getAccNo();
    cout<<"Hello user no. "<< b.getAccountNumber() << endl;
    b.getbalance();
    cout<<"Your balance is  "<< b.getAccountBalance()<<" rs"<<endl;
    
    while(1){
        cout<<"What do you want to do 1.Deposit, 2.Withdraw: 3.end: ";
        cin>>choice;
        switch(choice){
            case 1:
            if(b.verifyPin()){
                b.deposit();
            }
            break;

            case 2:
            if(b.verifyPin()){
                b.withdraw();
            }
            break;

            case 3:
            cout<<"Final balance: "<< b.getAccountBalance()<<"rs"<<endl;
            cout<< "Thankyou for using bank system! "<<endl;
            return 0;

        }
    }

    return 0;
}