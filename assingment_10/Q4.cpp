#include<iostream>
#include<exception>

using namespace std;

class number_big:public exception{
    const char* what() const throw(){
        return "Num big";
    }
};

int main(){
    int num;
    cin>>num;

    try{
        if(num < 0 ){
            throw num;
        }else if (num == 0){
            throw "Number is Zero";
        }else if (num >100){
            throw number_big();
        }
    } 
    catch (int){
        cout<<"Int exception"<<endl;
    } 
    catch (const char*){
        cout<<"const char error"<<endl;
    }
    catch (exception& e){
        cout<< e.what()<<endl;
    }

    return 0;
}