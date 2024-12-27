#include<iostream>

using namespace std;

class Time{
    private:
        float time;
    public:
        void getTime(){
            int h,m;
            cout<<"Enter Hour"<<endl;
            cin>>h;
            cout<<"Enter Minutes"<<endl;
            cin>>m;

            time = (h%24)+(m%60)%100;
        }

        void printTime(){
            
        }
};
