#include <iostream>
using namespace std;

//  WAP to print a square pattern

// int main(){

//     int i, j;

//     for(i=1; i<=5; i++){

//         for(j=1; j<=5; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// WAP to print right half pyramid
int main(){

    int i, j;

    for(i=1; i<=5; i++){

        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}