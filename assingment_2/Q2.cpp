#include <iostream>

using namespace std;

void create();

int main()
{
    int m;

    while (true)
    {
        cout << "1. To enter marks and find %age" << endl
             << "2. Exit" << endl;
        cin >> m;

        if (m == 1)
        {
            create();
        }
        else if (m == 2)
        {
            break;
        }
    }

    return 0;
}

void create(){
    int n;
    cout<<"Enter number of subject"<<endl;
    cin>>n;

    int max=n*100;
    float ans=0;

    for(int i=0;i<n;i++){
        int tem;
        cout<<"Enter marks for "<<i+1<<" subject"<<endl;
        cin>>tem;
        ans+=tem;
    }

    cout<<"Obtained percentage: "<<(ans/max)*100<<endl;

    return;
}