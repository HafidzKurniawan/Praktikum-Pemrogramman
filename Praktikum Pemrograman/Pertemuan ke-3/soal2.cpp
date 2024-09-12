#include <iostream>

using namespace std;

int main() {
    int a, b, c, x;

    cout << "Masukkkan bilangan 1 :" << endl;
    cin>>a;
    cout << "Masukkan bilangan 2 :"<<endl;
    cin>>b;
    cout<< "Masukkan bilangan 3 :"<<endl;
    cin>>c;

    x = a;
    if (b>x){
        x=b;
    } 
    if (c>x){
        x=c;
    }
    cout<<"BIlangan terbesar adalah :"<<x<<endl;
    
    cin.ignore();
    cin.get();

    return 0;
}