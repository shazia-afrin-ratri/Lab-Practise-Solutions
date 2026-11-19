#include <iostream>
using namespace std;

class Payment {
public:
    virtual ~Payment() {}
    virtual void processPayment() = 0;
};

class CreditCardPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing payment via Credit Card gateway." << endl;
    }
};

class MobileBankingPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing payment via Mobile Banking (bKash/Nagad)." << endl;
    }
};

int main() {
    Payment* paymentPtr = nullptr;

    paymentPtr = new CreditCardPayment();
    paymentPtr->processPayment();
    delete paymentPtr;

    paymentPtr = new MobileBankingPayment();
    paymentPtr->processPayment();
    delete paymentPtr;

    return 0;
}
