#include<iostream>

using namespace std;


class Employee{

    private:
        string name;
        float salary;

    public:
        Employee(string n,float s){
            name = n;
            salary = s;
        }

        void checkPointer(Employee *E){
            if(E != nullptr){
                display();
            }else{
                cout<<"Pointer is null"<<endl;
            }
        }

        void display(){
            cout<<name<<endl
                <<salary<<endl;
        }
};

int main(){

}