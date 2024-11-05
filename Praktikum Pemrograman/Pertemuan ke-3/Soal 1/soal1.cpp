#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b, c;
    cout<<"Masukkan nilai a ="<<endl;
    cin>>a;
    cout<<"Masukkan nilai b ="<<endl;
    cin>>b;
    cout<<"Masukkan nilai c ="<<endl;
    cin>>c;

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
    cout<<"Nilai determinan :"<<D<<endl;

    return 0;
}