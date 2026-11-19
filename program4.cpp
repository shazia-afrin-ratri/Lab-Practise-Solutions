#include <iostream>
using namespace std;

class Smartphone {
public:
    virtual ~Smartphone() {}
    virtual void takeSelfie() = 0;
    virtual void makeCall() = 0;
};

class Android : public Smartphone {
public:
    void takeSelfie() override {
        cout << "Android: Taking selfie using AI Portrait camera." << endl;
    }

    void makeCall() override {
        cout << "Android: Making call via VoLTE network." << endl;
    }
};

class iPhone : public Smartphone {
public:
    void takeSelfie() override {
        cout << "iPhone: Taking selfie using TrueDepth front camera." << endl;
    }

    void makeCall() override {
        cout << "iPhone: Making call via FaceTime / Cellular." << endl;
    }
};

int main() {
    Smartphone* phone1 = new Android();
    Smartphone* phone2 = new iPhone();

    phone1->takeSelfie();
    phone1->makeCall();

    cout << endl;

    phone2->takeSelfie();
    phone2->makeCall();

    delete phone1;
    delete phone2;

    return 0;
}
