#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
      
        if (n % i == 0) {
            cout<<"Not Prime";
            return -1;
        }

    }

    cout<<"Prime";
    return 0;
}