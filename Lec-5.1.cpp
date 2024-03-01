#include <iostream>
using namespace std;

// WAP to print 1 to 10 digit 

// using while loop 

int main(){

    int i=1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }
    
    return 0;
}

// using do while loop

int main(){

    int i=1;
    do
    {
        cout << i << endl;
        i++;
    }while (i <= 10);
    
    return 0;
}

// using for loop

// WAP to PRint 10 to 1 digit

int main(){

    int i;
    for(i=10; i>=1; i--){
         cout<< i << endl;
    }
    
    return 0;
}
// WAP to PRint all even number from 1 to 10 digit

int main(){
    int i;
    for(i=1; i<=10; i++){
        if(i%2==0){
            cout << i << endl;
        }
    }
}