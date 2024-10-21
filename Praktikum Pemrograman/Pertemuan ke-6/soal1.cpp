#include <bits/stdc++.h>

using namespace std;


struct Barang {
    string kode;
    string nama;
    int harga;
    int qty;
};

int main(){
    Barang barang;

    int n;
    double sum=0, harga=0;
    vector<Barang>arr;

    cout<<"masukkan n barang :\n";
    cin>>n;

    for (int i=1; i<=n; i++){
        cin.ignore();
        cout<<"masukkan kode barang :"<<endl;
        getline(cin, barang.kode);
        cout<<"masukkan nama barang :"<<endl;
        getline(cin, barang.nama);
        cout<<"masukkan harga barang :"<<endl;
        cin>>barang.harga;
        cout<<"masukkan jumlah barang :"<<endl;
        cin>>barang.qty;
        arr.push_back(barang);
        cout<<endl;

        sum+=barang.qty;

        harga+=barang.harga * barang.qty;

    }

    double rata= harga/sum;

    cout<<"Jumlah semua barang : "<<sum<<endl;
    cout<<"Harga rata-rata : "<<rata<<endl;

    return 0;
}