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

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter marks for "<<i+1<<" subject"<<endl;
        cin>>arr[i];
    }

    int max = n*100;
    float ans=0;

    for(int j=0;j<n;j++){
        ans+=arr[j];
    }

    cout<<"Obtained percentage: "<<(ans/max)*100<<endl;

    return;
}