#include <iostream>

using namespace std;

class fuction{
    public:
        void foo(){
            cout<<"No arguments and no return type"<<endl;
        }
        void foo(int){
            cout<<"Arguments without return type"<<endl;
        }
        int fun(){
            cout<<"Return type without arguments"<<endl;
            return 0;
        }
        int fun(int){
            cout<<"With arguments and with return type"<<endl;
            return 0;
        }
        void swap(int num1,int num2){
            int tem = num1;
            num1 = num2;
            num2 = tem;
            cout<<num1<<" "<<num2<<endl;
        }
        
        void swap(int* num1,int* num2){
            int tem = *num1;
            *num1 = *num2;
            *num2 = tem;
            cout<<*num1<<" "<<*num2<<endl;
        }
    
    
};

int main()
{
    
    fuction f;
    int num1=2,num2=3;
    f.swap(num1,num2);
    cout<<num1<<" "<<num2<<endl;
    f.swap(&num1,&num2);
    cout<<num1<<" "<<num2<<endl;

	return 0;
}
