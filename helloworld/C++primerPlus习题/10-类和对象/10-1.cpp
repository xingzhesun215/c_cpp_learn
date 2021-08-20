#include <iostream>


using namespace std;


/**
 * 10-1
 *
 * @return
 */

class BankAcount {
private:
    string fullname;
    string account;
    double deposit;

public:
    BankAcount();

    BankAcount(const string, const string, double);

    ~BankAcount();

    void init_account(const string, const string, float);

    void print_info() const;

    void save(float);

    void withdraw(float);

};


int main1() {

    BankAcount ba("Nik", "0001", 1200);
    ba.print_info();
    ba.init_account("Nik Swit", "", 1500);
    ba.print_info();
    ba.save(224.5);
    ba.print_info();
    return 0;
}

BankAcount::BankAcount(const string name, const string id, double f) {
    this->fullname = name;
    this->account = id;
    this->deposit = f;
}

BankAcount::~BankAcount() {
    cout << "ALl Done" << endl;
}

void BankAcount::init_account(string name, string id, float f) {
    cout << "Initaializing Account infomation " << endl;
    if (name != "") {
        fullname = name;
    }
    if (id != "") {
        account = id;
    }
    deposit = f;
}

void BankAcount::print_info() const {
    cout << "The account info :" << endl;
    cout << "Full name :" << fullname << endl;
    cout << "Account id :" << account << endl;
    cout << "Desposit :" << deposit;
}

void BankAcount::save(float f) {
    deposit = f;
}

void BankAcount::withdraw(float f) {
    deposit -=f;
}

