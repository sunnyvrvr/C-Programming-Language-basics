#include <iostream>
using namespace std;

class Complex {
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    //매개변수에 저장 
    //Complex(double real, double imag) {
    //    real = real;
    //    imag = imag;
    //}

    Complex(double real_, double imag_) {
        this->real = real_;
        this->imag = imag_;
    }

    double GetReal() {
        return real;
    }
    void SetReal(double real_) {
        real = real_;
    }

    double GetImag() {
        return imag;
    }
    void SetImag(double imag_) {
        imag = imag_;
    }
    void ShowValue() {
        cout << "c1 = " << real << ", " << imag << endl;
    }

private:
    double real;
    double imag;
};

int main() {
    Complex c1;  // Complex() 호출
    Complex c2 = Complex(2, 3);  // Complex(double, double) 호출
    Complex c3(2, 3);  // Complex(double, double) 호출
    Complex c4 = Complex(2, 3); 
    Complex c5 = Complex{ 2,3 };
    Complex c6{ 2, 3 };

    cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
    cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
    cout << "c3 = " << c3.GetReal() << ", " << c3.GetImag() << endl;
    c1.ShowValue();
    c2.ShowValue();
    c3.ShowValue();
    c4.ShowValue();
    c5.ShowValue();
    c6.ShowValue();
}
