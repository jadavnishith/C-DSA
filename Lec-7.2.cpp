#include <iostream>
using namespace std;

// for each loop example 

// int main (){

//     int a[5]={7,8,9,5,1};

//     for (int n : a){
//         cout << n << endl;
//     }
//     return 0;
// }

// sizeof() operator Example 

// int main (){

//     int a =15;

//     cout << "Size in bytes : "<< sizeof(a);

//     return 0;
// }

// sizeof() array 

// int main (){

//     int arr[8]={6,7,8,9,1,5,7,1};

//     cout << "Size in bytes :"<< sizeof(arr);

//     return 0;
// }

// Q-1 Find the average of all element of 1D array

// int main (){

//     int n , i , sum;

//     cout << "Enter array size : ";
//     cin >> n;

//     int a[n];

//     for(i=0; i<n; i++){
//         cout<< "Enter a["<< i <<"] : ";
//         cin >> a[i]; 
//     }

//     for(i=0; i<n; i++){
//         sum= sum + a[i];
//     }

//     cout <<"Average is : " << sum / n << endl;
//     return 0;
// }

// Q-2 Perform addition of two 1D array and store into another array 

// int main (){

//     int n, i;

//     cout <<"Enter array size : ";
//     cin >> n;

//     int a[n], b[n], c[n];

//     for(i=0; i<n; i++){
//         cout <<"Enter a["<< i <<"] : ";
//         cin >> a[i];
//     }

//     for(i=0; i<n; i++){
//         cout <<"Enter b["<< i <<"] : ";
//         cin >> b[i];
//     }

//     for(i=0; i<n; i++){
//         c[i] = a[i] + b[i];
//     }

//     cout << endl << endl << "Array C : ";
//     for(i=0; i<n; i++){
//         cout << c[i] << " ";
//     }
//     return 0;
// }

// Q-3 Create a 1D Array of all leap years from a given range

int main (){

    int start, end, i, a[100], index, count=0;

    cout <<"Enter start year : ";
    cin >> start;

    cout <<"Enter end year : ";
    cin >> end;

    for(i=start , index =0; i<=end; i++, index++){
        if (i % 4 == 0 ) // leap year formula 
        {
            a[index] = i;
            count++;
        }
        
    }
    cout << endl << "Array is : ";
    for(i=0; i<count; i++){
        cout << a[index] << " "; 
    }
    cout << endl;
    return 0;
}