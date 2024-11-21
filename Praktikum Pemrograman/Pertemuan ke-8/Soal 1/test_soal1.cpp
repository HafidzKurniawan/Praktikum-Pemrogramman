#include <iostream>

using namespace std;

long long fibon(int n){
    if (n==0) return 0;

    else if (n<=2) return 1;
    else return fibon(n-1)+fibon(n-2);
}


int main(){
    int n = 5;

    cout << "===============================";
    cout << "\nTest 1";
    cout << "\nExpected Output :";
    cout << "\nBilangan Fibonaci : 5";
    cout << "\n==============================="<<endl;

    cout<<"Nilai n : "<<n<<endl;

    cout<<"Bilangan Fibonaci ke-"<<n<<" adalah : ";
    cout<<fibon(n);

    cout<<endl;
    cout<<endl;

    int n1 = 13;

    cout << "===============================";
    cout << "\nTest 2";
    cout << "\nExpected Output :";
    cout << "\nBilangan Fibonaci : 144";
    cout << "\n==============================="<<endl;

    cout<<"Nilai n : "<<n1<<endl;

    cout<<"Bilangan Fibonaci ke-"<<n1<<" adalah : ";
    cout<<fibon(n1);
    
    cout<<endl;
    cout<<endl;

    int n2 = 18;

    cout << "===============================";
    cout << "\nTest 3";
    cout << "\nExpected Output :";
    cout << "\nBilangan Fibonaci : 1597";
    cout << "\n==============================="<<endl;

    cout<<"Nilai n : "<<n2<<endl;

    cout<<"Bilangan Fibonaci ke-"<<n2<<" adalah : ";
    cout<<fibon(n2);
    
    cout<<endl;
    cout<<endl;


    return 0;
    
}