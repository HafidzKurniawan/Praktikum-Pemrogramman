#include <iostream>
#include <vector>

using namespace std;

struct dataMhs {
    long long nisn;
    string nama;
    int nilai;
};

void tukar(dataMhs &a, dataMhs &b) {
    dataMhs t = a;
    a = b;
    b = t;
}

void cetakdata(vector<dataMhs> data) {
    for (const auto& mhs : data) {
        cout << mhs.nisn << "  " << mhs.nama << "  " << mhs.nilai << endl;
    }
}

void bsort(vector<dataMhs> &data, int n, bool sortnisn) {
    if (sortnisn) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (data[j].nisn > data[j + 1].nisn) {
                    tukar(data[j], data[j + 1]);
                }
            }
            
        }cetakdata(data);
    } else {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (data[j].nilai > data[j + 1].nilai) {
                    tukar(data[j], data[j + 1]);
                }
            }
            
        }cetakdata(data);
    }
}

void isort(vector<dataMhs> &data, int n, bool sortnisn) {
    if (sortnisn) {
        for (int i = 1; i < n; i++) {
            dataMhs a = data[i];
            int j = i - 1;
            while (j >= 0 && data[j].nisn > a.nisn) {
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = a;
            
        }cetakdata(data);
    } else {
        for (int i = 1; i < n; i++) {
            dataMhs a = data[i];
            int j = i - 1;
            while (j >= 0 && data[j].nilai > a.nilai) {
                data[j + 1] = data[j];
                j--;
            }
            data[j + 1] = a;
            
        }cetakdata(data);
    }
}

void ssort(vector<dataMhs> &data, int n, bool sortnisn) {
    if (sortnisn) {
        for (int i = 0; i < n - 1; i++) {
            int min = i;
            for (int j = i + 1; j < n; j++) {
                if (data[j].nisn < data[min].nisn) min = j;
            }
            tukar(data[i], data[min]);
            
        }cetakdata(data);
    } else {
        for (int i = 0; i < n - 1; i++) {
            int min = i;
            for (int j = i + 1; j < n; j++) {
                if (data[j].nilai < data[min].nilai) min = j;
            }
            tukar(data[i], data[min]);
            
        }cetakdata(data);
    }
}

void search (vector<dataMhs> data, int n, long long nisn){
    int aw,ak,mid,i,cek;
    bool ada=false;aw=1;ak=n;
    while(!ada && aw<=ak) {
     mid=(aw+ak)/2;cek++;
     if(data[mid].nisn==nisn) {
       ada=true;i=mid;           
     } else if(nisn<data[mid].nisn) {
        ak=mid-1;
        }
        else aw=mid+1;        
   }
   cout<<data[i].nisn<<"  "<<data[i].nama<<"  "<<data[i].nilai<<endl;
}

void seqsearch(vector<dataMhs> data, int n, int nilai, string newname)
{ 
    int i=0;
    bool ada=false;
    int loc, cek;
    do {cek++;
      if(data[i].nilai == nilai) {
       ada=true;loc=i;           
      }
      else i++;}
    while (!ada && i<n);

    data[i].nama=newname;
    cout<<"Name Changed into :"<<endl;
    cout<<data[i].nisn<<"  "<<data[i].nama<<"  "<<data[i].nilai<<endl;

}



int main(){
    vector<dataMhs> data = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadji R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952328180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };
    cout<<endl;

    int n=7;

    for (int i=0;i<n;i++) {
        cout<<data[i].nisn<<"  "<<data[i].nama<<"  "<<data[i].nilai<<endl;
    }
    
    cout<<endl;
    int a, b;
    cout<<"1. Bubble"<<endl;
    cout<<endl;
    cout<<"Sort By :"<<endl;
    cout<<"1. By NISN"<<endl;
    cout<<endl;
    bool sortbynisn = true;
    bsort(data, n, sortbynisn);
    cout<<endl;
    cout<<"2. By Nilai"<<endl;
    cout<<endl;
    sortbynisn = false;
    bsort(data, n, sortbynisn);
    
    cout<<endl;

    cout<<"2. Selection"<<endl;
    cout<<endl;
    cout<<"Sort By :"<<endl;
    cout<<"1. By NISN"<<endl;
    cout<<endl;
    bool sortbynisn1 = true;
    ssort(data, n, sortbynisn1);
    cout<<endl;
    cout<<"2. By Nilai"<<endl;
    cout<<endl;
    sortbynisn1 = false;
    ssort(data, n, sortbynisn1);
    
    cout<<endl;

    cout<<"3. Insertion"<<endl;
    cout<<endl;
    cout<<"Sort By :"<<endl;
    cout<<"1. By NISN"<<endl;
    cout<<endl;
    bool sortbynisn2 = true;
    isort(data, n, sortbynisn2);
    cout<<endl;
    cout<<"2. By Nilai"<<endl;
    cout<<endl;
    sortbynisn2 = false;
    isort(data, n, sortbynisn2);
    
    cout<<endl;

    long long nisn = 9950310962;
    cout<<"1. Search"<<endl;
    cout<<"Desired Data NISN : "<<nisn<<endl;
    search(data, n, nisn);

    cout<<endl;

    cout<<"2. Change"<<endl;
        int nilai = 60;
        string newname = "joko";
        cout<<"Desired Data Grade : "<<nilai<<endl;
        seqsearch(data, n, nilai, newname);
    return 0;
}