#include <iostream>

using namespace std;

class Complex         
{
private:
    double re, im;      

public:
    

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

    Complex (const Complex &c)   
    {
        re = c.re;
        im = c.im;
    }

    
    ~Complex ()
    {
    }

   

 
    
    Complex& operator = (Complex &c)
    {
        re = c.re;
        im = c.im;

        return (*this);
    }


    
    Complex& operator += (Complex &c)
    {
        re += c.re;
        im += c.im;
        return *this;
    }

    
    Complex operator + (const Complex &c)
    {
        return Complex (re + c.re, im + c.im);
    }
    
    
    Complex&operator -=(Complex &c){
        re -=c.re;
        im -= c.im;
        return *this;
    }
    
    Complex operator - (const Complex &c)
    {
        return Complex(re - c.re, im - c.im);
    }


    
    Complex operator *=(Complex &c){
        re *=c.re;
        im *=c.im;
        return *this;
    }
   
    Complex operator * (const Complex &c)
    {
        return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
    }


    
    Complex operator /=(Complex &c){
        re /=c.re;
        im /= c.im;
        return *this;
    }
    
    
    Complex operator / (const Complex &c)
    {
        Complex temp;

        double r = c.re * c.re + c.im * c.im;
        temp.re = (re * c.re + im * c.im) / r;
        temp.im = (im * c.re - re * c.im) / r;

        return temp;
    }



    
    friend ostream & operator<< (ostream &, const Complex &);
    friend istream & operator>> (istream &, Complex &);
    friend bool operator ==(const Complex, const Complex);

};


bool operator == ( const Complex first, const Complex second)  {
    return (first.re == second.re && first.im == second.im);

}

ostream& operator<< (ostream &out, const Complex &c)
{
    out << "(" << c.re << ", " << c.im << ")";
    return out;
}


istream& operator>> (istream &in, Complex &c)
{
    in >> c.re >> c.im;
    return in;
}
