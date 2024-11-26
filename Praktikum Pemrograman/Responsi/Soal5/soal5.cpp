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

    string str, temp;
    
    cout << "Masukkan string yang ingin dicek : ";
    getline (cin, str);

    temp = str;

    balik(str);

    cout << "String setelah dibalik : "<< str << endl;

    if (str == temp){
        cout << "String tersebut Polindrom";
    }
    else {
        cout << "String tersebut bukan Polindrom";
    }
    
    return 0;
}