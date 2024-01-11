#include <iostream>
using namespace std;

int main() {
    int n;
    int fstterm = 0;
    int scndterm = 1;
    int nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series for "<< n << " terms";

    for (int i = 1; i <= n+1; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << fstterm << ", ";
            continue;
        }
        if(i == 2) {
            cout << scndterm << ", ";
            continue;
        }
        nextTerm = fstterm + scndterm;
        fstterm = scndterm;
        scndterm = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}