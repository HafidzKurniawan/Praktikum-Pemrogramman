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

    int a, b;
    cout<<endl;
    cout<<"Sort By :"<<endl;
    cout<<"1. Bubble"<<endl;
    cout<<"2. Selection"<<endl;
    cout<<"3. Insertion"<<endl;
    cin>>a;

    if (a==1) {
        cout<<"1. By NISN"<<endl;
        cout<<"2. By Nilai"<<endl;
        cin>>b;
        if (b==1) {
            bool sortbynisn = true;
            bsort(data, n, sortbynisn);
        }
        else {
            bool sortbynisn = false;
            bsort(data, n, sortbynisn);
        }
    }
    else if (a==2) {
        cout<<"1. By NISN"<<endl;
        cout<<"2. By Nilai"<<endl;
        cin>>b;
        if (b==1) {
            bool sortbynisn = true;
            ssort(data, n, sortbynisn);
            }
        else
        {
            bool sortbynisn = false;
            ssort(data, n, sortbynisn);
        }
    }
    else {
        cout<<"1. By NISN"<<endl;
        cout<<"2. By Nilai"<<endl;
        cin>>b;
        if (b==1) {
            bool sortbynisn = true;
            isort(data, n, sortbynisn);
        }
        else
        {
            bool sortbynisn = false;
            isort(data, n, sortbynisn);
        }
    }
    
    int c;
    long long nisn;
    cout<<"1. Search"<<endl;
    cout<<"2. Change"<<endl;
    cin>>c;
    if (c==1) {
        cout<<"Desired Data NISN : ";
        cin>>nisn;
        search(data, n, nisn);
    }
    else {
        int nilai;
        string newname;
        cout<<"Desired Data Grade : ";
        cin>>nilai;
        cin.ignore();
        cout<<"Desired New Name : ";
        getline(cin, newname);

        seqsearch(data, n, nilai, newname);
    }
    return 0;
}