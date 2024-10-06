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

        void update(void* chng,char c){
            
            if(c == 's'){
                name = *((string*) chng);
            }else if(c == 'f'){
                salary = *((float *) chng);
            }
        }

        void display(){
            cout<<name<<endl
                <<salary<<endl;
        }
};

int main(){
    Employee E1("somerandomDude",1893);

    string usr;
    cin>>usr;

    string* ptr_usr = &usr;

    E1.update(ptr_usr,'s');

    E1.display();

    float slry;
    cin>>slry;

    float* ptr_slry = &slry;

    E1.update(ptr_slry,'f');

    E1.display();

    return 0;

}