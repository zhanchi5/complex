#include <iostream>
#include <cassert>


using namespace std;

class Complex         // класс "Комплексное число"
{
private:
    double re, im;      // действительная и мнимая части

public:
   // double re, im;
    // конструкторы

    Complex ()
    {
    };

    Complex (double r)
    {
        re = r;
        im = 0;
    }

    Complex (double r, double i)
    {
        re = r;
        im = i;
    }

    Complex (const Complex &c)   // конструктор копирования
    {
        re = c.re;
        im = c.im;
    }

    // деструктор
    ~Complex ()
    {
    }


    // остальные функции


    // оператор присваивания
    Complex& operator = (Complex &c)
    {
        re = c.re;
        im = c.im;

        return (*this);
    }


    // оператор +=
    Complex& operator +=  (Complex &c)
    {
        re += c.re;
        im += c.im;
        return *this;
    }

    // оператор сложения
    Complex operator + (const Complex &c)
    {
        return Complex (re + c.re, im + c.im);
    }
    //оператор -=
    Complex&operator -=(const Complex &c){
        re -=c.re;
        im -= c.im;
        return *this;
    }
    // оператор вычитания
    Complex operator - (const Complex &c)
    {
        return Complex(re - c.re, im - c.im);
    }


    // оператор *=
    Complex operator *=(Complex &c){
        double a=re, b = im, x = c.re, y = c.im;
        re = a*x - b*y;
        im = b*x + a*y;
        return *this;
    }
    // оператор умножения
    Complex operator * (const Complex &c)
    {
        return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
    }


    // оператор /=
    Complex operator /=(Complex &c) {
        Complex t(re, im);
        double r = c.re * c.re + c.im * c.im;
        re = (t.re * c.re + t.im * c.im) / r;
        im = (t.im * c.re - t.re * c.im) / r;
        return *this;
    }

    // оператор деления
    Complex operator / (const Complex &c)
    {
        Complex temp;

        double r = c.re * c.re + c.im * c.im;
        temp.re = (re * c.re + im * c.im) / r;
        temp.im = (im * c.re - re * c.im) / r;
        return temp;
    }



    // укажем дружественные операторы, которым мы разрешаем доступ
    // к личным (private) данным
    friend ostream & operator<< (ostream &, const Complex &);
    friend istream & operator>> (istream &, Complex &);
    friend bool operator ==(const Complex, const Complex);



};
// оператор равенства
bool operator == ( const Complex first, const Complex second)  {
    return (first.re == second.re && first.im == second.im);

}

// перегрузка оператора <<
ostream& operator<< (ostream &out, const Complex &c)
{
    out << "(" << c.re << ", " << c.im << ")";
    return out;
}

// перегрузка оператора >>
istream& operator>> (istream &in, Complex &c)
{
    in >> c.re >> c.im;
    return in;
}
