#include <iostream>
#include <vector>

using namespace std;

vector<int> nilai;

double jumlah( int n) {
    if  (n == 0) return 0;
    int i = 0;
    return nilai[n - 1] + jumlah(n - 1);
}


double rata(int n){
    double sum;
    if  (n == 0) return 0;
    else sum = jumlah(n);
    return (sum / n);
} 

int main(){
    int n = 5;
    nilai =  {22, 55, 90, 75, 88};

    cout << "===============================";
    cout << "\nTest 1";
    cout << "\nExpected Output :";
    cout << "\nRata-Rata = 66";
    cout << "\n==============================="<<endl;

    cout<<"Nilai : ";

    for(int ind : nilai){
            cout<<ind<<" ";
    }
    
    double rataa = rata(n);
    cout << "\nRata-Rata Nilai : "<<rataa;

    cout<<endl;
    cout<<endl;

    int n1 = 7;
    nilai =  {88, 57, 23, 98, 55, 38, 72};

    cout << "===============================";
    cout << "\nTest 2";
    cout << "\nExpected Output :";
    cout << "\nRata-Rata = 61.57 ";
    cout << "\n==============================="<<endl;

    cout<<"Nilai : ";

    for(int ind : nilai){
            cout<<ind<<" ";
    }
    
    rataa = rata(n1);
    cout << "\nRata-Rata Nilai : "<<rataa;

    cout<<endl;
    cout<<endl;
    
    return 0;
}
