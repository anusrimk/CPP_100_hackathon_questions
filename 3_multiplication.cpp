//table tp print multipliation tables for a given number
#include <iostream>
using namespace std;

int main(){
     int n;
     int a;

     cout<< "Enter the number:";
     cin >> n;

     cout<<"Enter number upto which you want the multiplication table: ";
     cin>>a;

     for (int i=1; i<=a; i++){

        cout<< n <<" x " << i << "=" << n*i<<"\n";

        
     }

     return 0;
     
    
}