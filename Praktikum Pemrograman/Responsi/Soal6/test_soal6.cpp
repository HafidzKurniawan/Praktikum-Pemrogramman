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

    cout << "===============================================";
    cout << "\nTest 1";
    cout << "\nInput : 5";
    cout << "\nExpected Output : 120";
    cout << "\n==============================================="<<endl;

    cout << "Masukkan angka : "<< n <<endl;

    cout << "Faktorial dari "<< n <<" adalah "<<faktorial(n);

    cout << "\n==============================================="<<endl;
    cout << endl;

    int n1 = 10;

    cout << "===============================================";
    cout << "\nTest 1";
    cout << "\nInput : 10";
    cout << "\nExpected Output : 3628800";
    cout << "\n==============================================="<<endl;

    cout << "Masukkan angka : "<< n1 <<endl;

    cout << "Faktorial dari "<< n1 <<" adalah "<<faktorial(n1);

    cout << "\n==============================================="<<endl;
    cout << endl;

    int n2 = 7;

    cout << "===============================================";
    cout << "\nTest 1";
    cout << "\nInput : 7";
    cout << "\nExpected Output : 5040";
    cout << "\n==============================================="<<endl;

    cout << "Masukkan angka : "<< n2 <<endl;

    cout << "Faktorial dari "<< n2 <<" adalah "<<faktorial(n2);

    cout << "\n==============================================="<<endl;
    cout << endl;

    return 0;
}