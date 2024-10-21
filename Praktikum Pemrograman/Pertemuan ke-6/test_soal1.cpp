#include <bits/stdc++.h>

using namespace std;


struct Barang {
    string kode;
    string nama;
    int harga;
    int qty;
};

void bacadata (Barang &barang){
    cout<<"\nKode Barang :"<<barang.kode;
    cout<<"\nNama Barang :"<<barang.nama;
    cout<<"\nHarga Barang :"<<barang.harga;
    cout<<"\nJumlah Barang :"<<barang.qty;
    cout<<endl;
}

void hitungnilai (vector<Barang> &arr, double &sum, double &harga, double &rata){
    sum=0;
    harga=0;
    for (Barang &barang : arr){
        sum+=barang.qty;
        harga+=barang.harga * barang.qty;
    }
    rata = harga/sum;
}
    
int main(){
    Barang barang;

    double sum=0, harga=0, rata=0;

    vector<Barang>arr = {
        {"AB1123YX", "air mineral", 3000, 5},
        {"AB4458KF", "sabun mandi", 5000, 6},
        {"BB3390YK", "sikat gigi", 11000, 3},
    };

    cout << "===============================";
    cout << "\nTest 1";
    cout << "\nExpected Output :";
    cout << "\nJumlah semua barang : 14";
    cout << "\nHarga rata-rata : Rp5.571,43";
    cout << "\n===============================";

    for(Barang &barang : arr){
        bacadata(barang);
    }
    
    hitungnilai(arr, sum, harga, rata);

    cout << "===============================";
    cout << "\nJumlah semua barang : " << sum << endl;
    cout << "Harga rata-rata : " << rata << endl;
    cout << "==============================="<<endl;
    
    double sum1=0, harga1=0, rata1=0;

    vector<Barang>arr1 = {
        {"AB1188YF", "air mineral", 3000, 4},
        {"CB4858KV", "sabun mandi", 4000, 3},
        {"BD8930MK", "sikat gigi", 9000, 4},
    };

    cout<<endl;
    cout << "===============================";
    cout << "\nTest 2";
    cout << "\nExpected Output :";
    cout << "\nJumlah semua barang : 11";
    cout << "\nHarga rata-rata : Rp5.454,55";
    cout << "\n===============================";
    
    for(Barang &barang : arr1){
        bacadata(barang);
    }
    
    hitungnilai(arr1, sum1, harga1, rata1);

    cout << "===============================";
    cout << "\nJumlah semua barang : " << sum1 << endl;
    cout << "Harga rata-rata : " << rata1 << endl;
    cout << "==============================="<<endl;

    double sum2=0, harga2=0, rata2=0;

    vector<Barang>arr2 = {
        {"AB1123YX", "air mineral", 5000, 2},
        {"AB4458KF", "sabun mandi", 7000, 4},
        {"BB3390YK", "sikat gigi", 15000, 2},
    };
    
    cout<<endl;
    cout << "===============================";
    cout << "\nTest 3";
    cout << "\nExpected Output :";
    cout << "\nJumlah semua barang : 8";
    cout << "\nHarga rata-rata : Rp8.500";
    cout << "\n===============================";
    

    for(Barang &barang : arr2){
        bacadata(barang);
    }
    
    hitungnilai(arr2, sum2, harga2, rata2);

    cout << "===============================";
    cout << "\nJumlah semua barang : " << sum2 << endl;
    cout << "Harga rata-rata : " << rata2 << endl;
    cout << "==============================="<<endl;
   
    return 0;
}