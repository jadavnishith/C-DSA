#include <iostream>
using namespace std;

// int main (){

//     // int a[5]={6, 8, 2, 4, 9}; // 1D Arrray
//     // dynamically 
//     int a[5];
//     int i;
//     for(i=0; i<=4; i++){
//         cout << "Enter array element : ";
//         cin >> a[i];
//     }
//     cout << "Array element : "<<endl;
//     cout << a[1];
//     return 0;
// }

// dynamicaly iteration 
// int main(){

//     int a[5];
//     int i;
//     for(i=0; i<=4; i++){
//         cout <<"Enter your element :";
//         cin >> a[i];
//     }
//     cout << "Array element : ";
//     for(i=0; i<=4; i++){
        
//         cout << a[i] << endl;
//     }
//     return 0;
// }

// modification updation operation 
// int main(){

//     int a[5];
//     int i;
//     for(i=0; i<=4; i++){
//         cout <<"Enter your element :";
//         cin >> a[i];
//     }

//     cout << "Array element : ";

//     for(i=0; i<=4; i++){
        
//         cout << a[i] << endl;
//     }

//     a[3]=99;
//     cout << "Enter new element : ";
//     cin >> a[0];

//     cout << "Array element : ";

//     for(i=0; i<=4; i++){
        
//         cout << a[i] << endl;
//     }
//     return 0;
// }

// dynamic program
int main(){

    int size;
    cout <<"Enter array size: ";
    cin >> size;

    int a[size];
    int i;

    for(i=0; i < size; i++){
        cout <<"Enter a[" <<i<<"]: ";
        cin >> a[i];
    }

    cout << "Array element : ";

    for(i=0; i<size; i++){
        
        cout << a[i] << endl;
    }

    return 0;
}