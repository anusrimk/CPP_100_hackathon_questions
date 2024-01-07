#include <iostream>

using namespace std;

int main(){

    int n ;
    char y;
    // goto statement used
    start:
        int sum = 0;
        cout<<"\nEnter the number you want to check : ";
        cin>>n;

    if(n<0){
        cout<<"Input invalid \n\n";
        goto start;
    }
    // so that we could multiply all dovosors to check for the number
    cout<<"\nAll divisors : \n";

    for(int i = 1 ; i < n ; i++)
    {
        if(n % i == 0)
        {
            sum += i;

            if(i == 1)
            {
                cout<<i;
            }

            else
            {
            cout<<" + "<<i;
            }
        }
    }

    if(sum == n)
    {
        cout<<" = "<<n;
        cout<<"\n\nSo , "<<n<<" is Perfect number ";
    }
    else
    {
        cout<<" = "<<sum;
        cout<<"\n\nSo , "<<n<<" is not Perfect number ";
    }

    cout<<"\nDo you want to try again? \n";
    cin>>y;

    if(toupper(y) == 'Y'){
        goto start;
    }

    return 0;
}