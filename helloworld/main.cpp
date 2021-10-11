#include <iostream>

using namespace std;

// 10-1

class BankAccount {
private:
    string fullname;
    string account;
    double deposit;

public:
    BankAccount();

    BankAccount(const string, const string, const float);

    ~BankAccount();

    void init_account(const string, const string, float);

    void print_info() const;

    void save(float);

    void withdraw(float);

};

int main() {
    BankAccount ba("Nik", "0001", 1200);
    ba.print_info();
    ba.init_account("Nik Swit", "", 1500);
    ba.print_info();
    ba.save(233.5);
    ba.print_info();
    return 0;
}

BankAccount::BankAccount() {
    deposit = 0;
}

BankAccount::BankAccount(const string name, const string id, const float f) {
    fullname = name;
    account = id;
    deposit = f;
}

BankAccount::~BankAccount() {
    cout << "All Done !" << endl;
}

void BankAccount::init_account(const string name, const string id, float f) {
    cout << "Initializing Account infomation...." << endl;

    if (name != "") {
        fullname = name;
    }
    if (id != "") {
        account = id;
    }
    deposit = f;
}

void BankAccount::print_info() const {
    cout << "The Account info :" << endl;
    cout << "Full Name :" << fullname << endl;
    cout << "Account Id: " << account << endl;
    cout << "Deposit : " << deposit << endl;
}

void BankAccount::save(float f) {
    deposit += f;
}

void BankAccount::withdraw(float f) {
    deposit -= f;
}