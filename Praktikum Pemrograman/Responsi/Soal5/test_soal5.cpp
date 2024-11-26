#include <iostream>
#include <string>

using namespace std;

void balik(string &str)
{
    string reversed = "";
    for (int i = str.length()-1; i >= 0; i--){
        reversed += str[i];
       
    }
    str = reversed;
}

int main (){

    cout << "===============================================";
    cout << "\nTest 1";
    cout << "\nInput : Kasur Rusak";
    cout << "\nExpected Output : Polindrom";
    cout << "\n==============================================="<<endl;

    string str, temp;
    str = "Kasur Rusak";
    cout << "Masukkan string yang ingin dicek : "<< str << endl;
    temp = str;
    balik(str);
    cout << "String setelah dibalik : "<< str << endl;
    if (str == temp){
        cout << "String tersebut Polindrom";
    }
    else {
        cout << "String tersebut bukan Polindrom";
    }

    cout << "\n==============================================="<<endl;
    cout << endl;

    cout << "===============================================";
    cout << "\nTest 2";
    cout << "\nInput : Ilmu Komputer";
    cout << "\nExpected Output : Bukan Polindrom";
    cout << "\n==============================================="<<endl;

    string str1, temp1;
    str1 = "Ilmu Komputer";
    cout << "Masukkan string yang ingin dicek : "<< str1 << endl;
    temp1 = str1;
    balik(str1);
    cout << "String setelah dibalik : "<< str1 << endl;
    if (str1 == temp1){
        cout << "String tersebut Polindrom";
    }
    else {
        cout << "String tersebut bukan Polindrom";
    }

    cout << "\n==============================================="<<endl;
    cout << endl;

    cout << "===============================================";
    cout << "\nTest 3";
    cout << "\nInput : Ayam Goreng";
    cout << "\nExpected Output : Bukan Polindrom";
    cout << "\n==============================================="<<endl;

    string str2, temp2;
    str2 = "Ayam Goreng";
    cout << "Masukkan string yang ingin dicek : "<< str2 << endl;
    temp2 = str2;
    balik(str2);
    cout << "String setelah dibalik : "<< str2 << endl;
    if (str2 == temp2){
        cout << "String tersebut Polindrom";
    }
    else {
        cout << "String tersebut bukan Polindrom";
    }

    cout << "\n==============================================="<<endl;

    return 0;
}