#include <iostream>
using namespace std;

// WAP to print multiplication table of number N

// int main(){

//     int i, num;
//     cout << "Enter any number :";
//     cin >> num;

//     i=1;
//     for(i=1; i<=10; i++)
//     {
//         cout << num << " X " << i << " = " << num * i << endl;
        
//     }
    
//     return 0;
// }

// WAP to print sum of all digit

// int main (){

//     int num, sum, lastdigit;
//     sum=0;

//     cout <<"enter any number: ";
//     cin >> num;

    
//     while (num > 0)
//     {
//        lastdigit = num % 10;
//        sum = sum + lastdigit;
//        num = num / 10;
//     }
//     cout <<"Sum of digits : " << sum << endl;
    
//     return 0;
// }

// WAP to print sum of first & last digit

int main(){

    int sum, num ,firstdigit, lastdigit;

    sum = 0;

    cout << "Enter any number : ";
    cin >> num;

    lastdigit = num % 10;
    while (num >= 10)
    {
        num = num /10;
    }

    firstdigit = num;

    sum = firstdigit + lastdigit;

    cout << "Sum is "<< sum <<endl;
    return 0;
}