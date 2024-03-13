#include <iostream>
using namespace std;

// Example of Reference variable

int main ()
{
    int rahul = 100;
    int &kana = rahul; // deep copy (reference variable)
    int raj = rahul; // shallow copy 

    cout << rahul << " & " << kana << endl;
    cout << rahul << " & " << raj << endl;

    kana = 500;

    cout << "Deep copy :"<< rahul << " & " << kana << endl;
    cout << "Shallow copy :"<< rahul << " & " << raj << endl;
    return 0;
}

// Example of psasing value
void addition(int a, int b)
{
    cout << "Addition is : " << a+b<<endl;
} 
int main ()
{
    int x=10,y=40;
    addition(5,3); // passed by value
    addition(x,y); // passed by variable 
    return 0;
}

// Example of passing an array
void func(int n[])
{
    cout <<n[0] <<endl;
}
int main ()
{
    int a[]={5,8,3};
    func(a); // pass an array
    return 0;
}

// Example of passing a pointer

void func(int *ptr)
{
    cout <<ptr<<" & " << *ptr<< endl;
}
int main ()
{
    int a= 6;
    int *p=&a;
    func(p); // pass a pointer
    return 0;
}

// Example of passing an address 

void func(int *ptr)
{
    cout << *ptr;
}
int main ()
{
    int a = 5;
    func(&a); // passing address 
    return 0;
}

// Example of call by value

void hello(int n) // shallow copy
{
    n = n+10;
}

int main ()
{
    int a = 7;
    cout << "Before : " << a << endl;
    hello(a);// call by value
    cout << "Before : " << a << endl;
    return 0;
}

// Example of call by reference

void hello(int &n) // deep copy
{
    n = n+10;
}

int main ()
{
    int a = 5;
    cout << "Before : " << a << endl;
    hello(a);// call by reference
    cout << "Before : " << a << endl;
    return 0;
}

// example of call by const reference

void hello(const int &n) // deep copy
{
    cout << "n : "<< n * n<< endl;
}

int main ()
{
    int a = 5;
    cout << "Before : " << a << endl;
    hello(a);// call by const reference
    cout << "Before : " << a << endl;
    return 0;
}