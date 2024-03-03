#include <iostream>
using namespace std;

// custom pattern 

// WAP to print floyd's triangle

// int main(){

//     int i, j, n , row;
//     n = 1;

//     cout <<"Enter rows : ";
//     cin >> row ;
//     for(i=1; i<=row; i++){

//         for(j=1; j<=i; j++){
//             cout << n << " ";
//             n++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// WAP to Print Full Pyramid

// int main(){

//     int i, j,k;

//     for(i=1; i<=5; i++){

//         for(k=5; k>i; k-- ){
//             cout << " ";
//         }
//         for(j=1; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// WAP to print A alfabet 
int main(){

    int i;
    for(i=1; i<=5; i++){

        if(i==1 || i==3){
            cout << "* * * * *";
        }else{
            cout <<"*       *";
        }
        cout << endl;
    }
    return 0;
}