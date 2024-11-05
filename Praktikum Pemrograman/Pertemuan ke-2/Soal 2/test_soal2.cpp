#include <iostream>
#include <math.h>

using namespace std;

void cetakdata(int a, int b, int c){
    cout<<"Nilai a = "<<a<<endl;
    cout<<"Nilai b = "<<b<<endl;
    cout<<"Nilai c = "<<c<<endl;

    int D = b * b - 4 * a * c;

    if (D > 0) {
        int akar1 = (-b + sqrt(D)) / (2 * a);
        int akar2 = (-b - sqrt(D)) / (2 * a);
        cout << "Akar dari persamaan kuadrat tersebut adalah :" << akar1 << " dan " << akar2 << endl;
    } else if (D == 0) {
        int akar = (-b) / (2 * a);
        cout << "Akar dari persamaan kuadrat tersebut adalah :" << akar << endl;
    } else {
        cout << "Tidak ada akar yang memenuhi (tidak ada akar real)" << endl;
    }
}

int main() {
    int a = 1, b = 5, c = 6;

    cout << "===============================";
    cout << "\nTest 1";
    cout << "\nExpected Output :";
    cout << "\nAkar-Akar Persamaan : -2 dan -3";
    cout << "\n==============================="<<endl;
    cout<<endl;

    cetakdata(a, b, c);
    cout<<endl;
    cout<<endl;

    int a1 = 2, b1 = 4, c1 = 2;

    cout << "===============================";
    cout << "\nTest 2";
    cout << "\nExpected Output :";
    cout << "\nAkar-Akar Persamaan : -1";
    cout << "\n===============================";
    cout<<endl;

    cetakdata(a1, b1, c1);
    cout<<endl;
    cout<<endl;

    int a2 = 1, b2 = 1,  c2 = 1;

    cout << "===============================";
    cout << "\nTest 3";
    cout << "\nExpected Output :";
    cout << "\nAkar-Akar Persamaan : Tidak ada";
    cout << "\n===============================";
    cout<<endl;

    cetakdata(a2, b2, c2);
    cout<<endl;
    cout<<endl;

    return 0;
}