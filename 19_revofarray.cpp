//program to print revrse of an array

#include <iostream>  
using namespace std;  
  
int main ()  
{  
    int n; 
    int t; 
    int i, j;  // for loops


    cout << " Enter the size of the array: ";  
    cin >> n;  
    int arr[n];
      
    // use for loop to enter the numbers   
    for (i = 0; i < n; i++)  
    {  
        cout << " Enter the element " << i+1 << ": ";  
        cin >> arr[i];  
    }  
      
      
    for ( i = 0, j = n - 1; i < n/2; i++, j--)  
    {     
        t = arr[i];   
        arr[i] = arr[j];  
        arr[j] = t;  
    }  
    cout << "\n Reverse all elements of the array: " << endl;  
    // use for loop to print the reverse array  
    for ( i = 0; i < n; i++)  
    {  
        cout << arr[i] << " ";  
    }  
    return 0;  
}  