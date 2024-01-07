#include <iostream>
using namespace std;

int main(){
    char n;
    cout<<"Enter the alphabet: ";
    cin>>n;
    // A E I O U
    if (n=='A' || n== 'E' || n=='I' || n=='O' || n=='U'){
        cout<< n << " is a vowel";
    }
    else if(n=='a' || n== 'e' || n=='i' || n=='o' || n=='u'){
        cout<< n << " is a vowel";
    }
    else{
        cout<< n << " is not a vowel";
    }
}