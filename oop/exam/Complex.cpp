#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
        float real;
        float imag;
    public:
    // xây dựng các hàm khởi tạo
        Complex(){real = 0; imag = 0;};
        Complex(float real, float imag){this->real = real;this->imag = imag;}
        Complex(const Complex& complex){this->real = complex.real; this->imag = complex.imag;}
    // Xây dựng hàm set get
        float getReal(){ return this->real;}
        void setReal(float real){this->real = real;}
        float getImag(){return this->imag;}
        void setImag(float imag){this->imag = imag;}
    // hàm toString
        string toString();
    // xây dựng hàm tổng
        friend Complex sum(const Complex complex1, const Complex complex2){return Complex(complex1.real+complex2.real,complex1.imag+complex2.imag);}
};
string Complex::toString(){
    ostringstream ss;
    ss << this->real<<" + "<<this->imag<<"i";
    return ss.str();
}
int main(){
    Complex complex1 = Complex(1,3);
    Complex complex2 = Complex(3,4);
    cout<<sum(complex1,complex2).toString();
    return 0;
}