#include<iostream>

using namespace std;

int main(){

    int num;
    cin>>num;

    try{
        if(num<0){
            throw 4.04;
        }else if(num == 0){
            throw "A const char";
        }else{
            throw 0;
        }
    }
    catch(float){
        cout<<"folat error"<<endl;
    }
    catch(const char *){
        cout<<"const char error"<<endl;
    }
    catch(...){
        cout<<"all other error"<<endl;
    }
    return 0;
}