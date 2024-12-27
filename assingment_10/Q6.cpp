#include<iostream>

using namespace std;

int error(int);

int main(){

    try{
        
        if(error(0)){
            throw 404;
        }
    }
    catch(int){
        cout<<"re-throwing exception"<<endl;
    }
    return 0;
}

int error(int n){
    try{
        if(n==0){
            throw 0;
        }
    }
    catch(int){
        cout<<"Zero error"<<endl;
        return 1;
    }

    return 0;
}