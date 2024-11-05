#include <iostream>

using namespace std;

struct Pay {
    string nama_pegawai;
    int gross_salary;
    int installment;
    int insurance;
};

int main() {
    Pay pay;
    
    cout << "Enter Name" << endl;
    getline(cin, pay.nama_pegawai);
    cout << "Enter Gross Salary" << endl;
    cin>>pay.gross_salary;
    cout << "Enter Installment" << endl;
    cin>>pay.installment;
    cout << "Enter Insurance" << endl;
    cin>>pay.insurance;

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

    return 0;
}