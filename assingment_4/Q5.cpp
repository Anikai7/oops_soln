 #include<iostream>

 using namespace std;

 class item{
    private:
        static int cnt;
        int number;
    
    public:
        void getData(int a){
            number = a;
            cnt++;
        }

        void getCount(){
            cout<<cnt<<endl;
        }
 };

int item::cnt = 0;

int main(){

    item a,b,c;

    a.getData(0);
    a.getCount();

    b.getData(1);
    b.getCount();
    
    c.getData(2);
    c.getCount();

    return 0;
}