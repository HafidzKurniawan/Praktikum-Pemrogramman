#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int sum=0, n, i;

    cout<<"Masukkan n : ";
    cin>>n;

    for (i=1; i<=n; i++){
        sum+=i;
    }
    
    cout<<"Sum : "<<sum;

    return 0;
}