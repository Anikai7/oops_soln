#include<iostream>

using namespace std;

class BankAccount{
    private:
        unsigned int account_num;
        int balance;
    public:
        void setAccountDetails(){
            cout<<"Enter your new account number"<<endl;
            cin>>account_num;
            balance=0;
        }

        void deposit(){
            int amt;
            cout<<"Enter the ammount to be deposited"<<endl;
            cin>>amt;

            balance+=amt;
        }

        void withdraw(){
            int amt;
            cout<<"Enter amount to be withdraw"<<endl;
            cin>>amt;

            if(balance-amt>=0){
                balance-=amt;
            }else{
                cout<<"You dont have enough funds"<<endl;
            }
        }

        void displayAccount(){
            cout<<"Account Number: "<<account_num
                <<endl<<"Balance: "<<balance<<endl;
        }
};

int main(){
    BankAccount B1;
    B1.setAccountDetails();
    B1.deposit();
    B1.displayAccount();
    B1.withdraw();
    B1.displayAccount();

}