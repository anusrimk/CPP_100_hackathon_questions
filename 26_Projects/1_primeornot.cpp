#include <iostream>
using namespace std;

int main(){
  int i;
  int n;

  cout << "Enter a positive integer: ";
  cin >> n;

  if (n==0 || n==1){
    cout<<"invalid input";
  }
  else{
  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
        cout<<n << " is not a prime number ";
        break; 
    } 
    else{
        cout<< n <<" is a prime number";
    }
  } 
  }
}