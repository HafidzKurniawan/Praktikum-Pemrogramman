#include <iostream>

using namespace std;

struct Pay {
    string nama_pegawai;
    int gross_salary;
    int installment;
    int insurance;
};

void cetakdata(Pay pay){
    int tax = pay.gross_salary/5;
    int net_salary = pay.gross_salary - tax - pay.installment - pay.insurance;

    cout << "====================================" << endl;
    cout << "              Payslip               " << endl;
    cout << "====================================" << endl;
    cout << "Name           : " << pay.nama_pegawai << endl;
    cout << "Gross Salary   : Rp." << pay.gross_salary << endl;
    cout << "Tax            : Rp." << tax << endl;
    cout << "Installment    : Rp." << pay.installment << endl;
    cout << "Insurance      : Rp." << pay.insurance << endl;
    cout << "Net Salary     : Rp." << net_salary << endl;
    cout << "====================================" << endl;
}

int main() {
    Pay pay = {"Hafidz", 65000000, 2500000, 500000};

    cout << "===============================";
    cout << "\nTest 1";
    cout << "\nExpected Output :";
    cout << "\nNet Salary : Rp.49000000";
    cout << "\n==============================="<<endl;
    cout<<endl;

    cetakdata(pay);

    cout<<endl;
    cout<<endl;

    Pay pay1 = {"Hafidz", 350000, 100000, 50000};

    cout << "===============================";
    cout << "\nTest 2";
    cout << "\nExpected Output :";
    cout << "\nNet Salary : Rp.130000";
    cout << "\n==============================="<<endl;
    cout<<endl;
    
    cetakdata(pay1);

    cout<<endl;
    cout<<endl;
    

    return 0;
}