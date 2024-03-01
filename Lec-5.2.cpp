#include <iostream>
using namespace std;

// WAP to perform sum of N number
// int main(){

//     int i , n, sum;
//     sum = 0 ;

//     cout <<"Enter Any Number : ";
//     cin >> n;

//     i=1;
//     while (i <= n)
//     {
//         sum = sum + i;
//         i++;
//     }
    
//     cout << "Sum is : " << sum << endl;
//     return 0;
// }

// WAP to find factorial of N numbers
// int main(){

//     int i, n, fact;
//     fact = 1;

//     cout << "Enter Any Number : ";
//     cin >> n;

//     i = n;
//     while (i >= 1)
//     {
//         fact = fact * i;
//         i--;
//     }
//     cout <<"Factorial is : " << fact << endl;
    
//     return 0;
// }

// WAP to find factor of N numbers
int main(){

    int i, n;

    cout << "Enter Any Number : ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        if(n % i == 0){
            cout << i << endl;
        }
        i++;
    }
    
    return 0;
}