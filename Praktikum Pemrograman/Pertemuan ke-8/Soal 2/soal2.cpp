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
    int n, num;
    

    cout<<"Masukkan Banyak Nilai : ";
    cin>>n;

    for (int i = 0; i < n; i++){
        cout << "Masukkan Nilai Ke-" << i+1 << " : ";
        cin >> num; 
        nilai.push_back(num);
        }
    
    double rataa = rata(n);
    cout << "Rata-Rata Nilai : "<<rataa;
    
    return 0;
}
