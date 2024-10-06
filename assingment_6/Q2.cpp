#include<iostream>

using namespace std;

class Data{
    private:
        void* data;
    
    public:

        void printValue(char type){

            cout<<&data<<endl;
            if(type == 'i'){
                int n;
                cin>>n;
                data = &n;
            }else if(type == 'f'){
                float f;
                cin>>f;
                data = &f;
            }

            cout<<data<<endl;
            cout<<*((float*) data)<<endl;
        }
};

int main(){
    Data D1;

    D1.printValue('f');

    return 0;
}