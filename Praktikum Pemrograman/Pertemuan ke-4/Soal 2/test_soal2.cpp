#include <iostream>

using namespace std;

int main(){
    int n=27, i, x;

    cout<<"Masukkan n : "<<n<<endl;

    for(i=1; i<=10; i++){
        x=n*i;
        cout<<n<<" x "<<i<<" = "<<x<<endl;
    }

    return 0;
}