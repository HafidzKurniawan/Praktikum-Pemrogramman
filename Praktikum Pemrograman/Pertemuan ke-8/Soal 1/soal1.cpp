#include <iostream>

using namespace std;

long long fibon(int n){
    if (n==0) return 0;

    else if (n<=2) return 1;
    else return fibon(n-1)+fibon(n-2);
}


int main(){
    int n;

    cout<<"Masukkan n : ";
    cin>>n;

    cout<<"Bilangan Fibonaci ke-"<<n<<" adalah : ";
    cout<<fibon(n);

    return 0;
    
}