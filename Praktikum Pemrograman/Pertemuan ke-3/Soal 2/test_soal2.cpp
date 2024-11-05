#include <iostream>

using namespace std;

void cetakdata(int a, int b, int c){
    cout << "Bilangan 1 : " <<a<< endl;
    cout << "Bilangan 2 : "<<b<<endl;
    cout<< "Bilangan 3 : "<<c<<endl;

    int x = a;
    if (b>x){
        x=b;
    } 
    if (c>x){
        x=c;
    }
    cout<<"BIlangan terbesar adalah : "<<x<<endl;
}

int main() {
    int a = 67, b = 85, c = 52;

    cout << "===============================";
    cout << "\nTest 1";
    cout << "\nExpected Output :";
    cout << "\nBilangan Terbesar : 85";
    cout << "\n==============================="<<endl;

    cetakdata(a, b, c);
    cout<<endl;
    cout<<endl;

    int a1 = 378, b1 = 287, c1 = 394;

    cout << "===============================";
    cout << "\nTest 2";
    cout << "\nExpected Output :";
    cout << "\nBilangan Terbesar : 394";
    cout << "\n==============================="<<endl;

    cetakdata(a1, b1, c1);
    cout<<endl;
    cout<<endl;

    int a2 = 3778, b2 = 2837, c2 = 3484;

    cout << "===============================";
    cout << "\nTest 3";
    cout << "\nExpected Output :";
    cout << "\nBilangan Terbesar : 3778";
    cout << "\n==============================="<<endl;

    cetakdata(a2, b2, c2);
    cout<<endl;
    cout<<endl;
    
    return 0;
}