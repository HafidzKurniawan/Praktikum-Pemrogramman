#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int sum=0, n=13, i;

    cout<<"Masukkan n : "<<n<<endl;

    for (i=1; i<=n; i++){
        sum+=i;
    }
    
    cout<<"Sum : "<<sum;

    return 0;
}