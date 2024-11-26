#include <iostream>

using namespace std;

long long faktorial (int n)
{
    int fakto = 1;
    for (int i = 1; i<=n; i++){
        fakto *= i;
    }
    return fakto;

}

int main(){
    int n = 5;

    cout << "Masukkan angka : ";
    cin >> n;
    
    cout << "Faktorial dari "<< n <<" adalah "<<faktorial(n);

    return 0;

}