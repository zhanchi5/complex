#include <iostream>
#include "complex.hpp"

int main ()
{
    Complex a (5, 2);
    Complex b (3, -3);

    cout << "Basic a = " << a << endl;
    cout << "Basic b = " << b << endl;


    Complex temp = a+b;
    cout << "a + b = " << temp << endl;

    Complex temp1 = a-b;
    cout << "a - b = " << temp1 << endl;

    Complex temp2 = a*b;
    cout << "a * b = " << temp2 << endl;

    Complex temp3 = a / b;
    cout << "a / b = " << temp3 << endl;

    Complex temp4 = a*=b;
    cout << "a *= b = " << temp4 << endl;

    Complex temp5 = a+=b;
    cout << "a += b = " << temp5 << endl;

    Complex temp6 = a-=b;
    cout << "a -= b = " << temp6 << endl;

    Complex temp7 = a/=b;
    cout << "a /= b = " << temp7 << endl;

    Complex temp8 = a=b;
    cout << "a = b = " << temp8 << endl;

    Complex temp9 = a*3;
    cout << "a*3 = " << temp9 << endl;



    if (a == b){
        cout << a << endl;
    }
    else{
        cout << a << " != " << b;
    }


    return 0;
}
