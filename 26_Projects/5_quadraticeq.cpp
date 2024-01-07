//program to calculate the roots of a quadratic equation using the discriminant.

#include <iostream>
#include <cmath>
using namespace std;

void Quadformula(){
    int a;
    float D, Realroots, Imaginaryroots; // D=Discriminant
    float b, c;
    float x, y; 

    if (a == 0) {  //checking if given input is a quadratic equation
        cout<< "  \n";
        cout << "Invalid-Value of a cant be 0 otherwise it wont be a quadratic equation";
        cout<< "  \n";
        return;    
    }
    else {
        D = b*b - 4*a*c; // D= root over b^2-4ac
    
        if (D > 0) {

            x = (-b + sqrt(D)) / (2*a);  //cmath module is used
            y = (-b - sqrt(D)) / (2*a);  //cmath module is used
            cout << "The quadratic equation has REAL and DIFFERENT roots" << endl;
            cout << "x1 = " << x << endl;
            cout << "x2 = " << y << endl;
        }
    
        else if (D == 0) {
            cout << "Roots are REAL and SAME." << endl;
            x = -b/(2*a);
            cout << "x = y =" << x << endl;
        }

        else {

            Realroots = -b/(2*a);
            Imaginaryroots =sqrt(-D)/(2*a);
            cout << "Roots are COMPLEX and DIFFERENT."  << endl;
            cout << "x = " << Realroots << "+" << Imaginaryroots << "i" << endl;
            cout << "y = " << Realroots << "-" << Imaginaryroots << "i" << endl;
    }
    }

}

int main() {

    float D, Realroots, Imaginaryroots; // D=Discriminant
    float a, b, c;
    float x, y; 
    cout << "Enter coefficient a: ";
    cin >> a;

    cout << "Enter coefficient b: ";
    cin >>b;

    cout << "Enter coefficient c: ";
    cin >>c;
    

    Quadformula();
    return 0;
    
}