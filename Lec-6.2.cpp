#include <iostream>
using namespace std;
// with space pattern 

// WAP to print left half pyramid pattern

// int main(){

//     int i, j, k;
    
//     for(i=1; i<=5; i++){

//         for(k=5; k>i; k--){
//             cout << "  ";
//         }
//         for(j=1; j<=i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// WAP to print inverted left half pyramid pattern

int main(){

    int i, j, k;
    
    for(i=5; i>=1; i--){

        for(k=5; k>i; k--){
            cout << "  ";
        }
        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}