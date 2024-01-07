#include <iostream>

using namespace std;

int main(){
    int a = 0 , n;

    start:
    cout<<"Enter a number \n";
    cin>>n;

    if(n<0){
        cout<<"Enter positive number as negatives are not prime :) \n\n";
        goto start;
    }

    cout<<"\nFACTORS OF "<<n<<" ARE : \n" ;

    for(int i = 1 ; i <= n; i++){
        if(n%i == 0 ){
            a += 1;
            cout<<i<<"\n";
        }

    }

    cout<<"\n\nAS TOTAL NUMBER OF FACTORS ARE "<<a<<"\nTHE NUMBER IS : ";
    if(a > 2){
        cout<<"\nCOMPOSITE\n";
    }else if(a== 2){
        cout<<"\nPRIME\n";
    }else{
        cout<<"\nNOR PRIME NOR COMPOSITE\n\n";
    }

    return 0;
}