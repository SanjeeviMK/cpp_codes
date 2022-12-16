//#include <iostream>
//new line added
#include <bits/stdc++.h>
using namespace std;

// FUNCTIONS
int s1(int n)
{
    cout << "Address in s1 " << &n << endl;
    n = n * n;
    return n;
}
int &s2(int *n)
{
    cout << "Address in s2 " << n << endl;
    *n = *n * *n;
    return *n;
}
int s3(int &n)
{
    cout << "Address in s3 " << &n << endl;
    n = n * n;
    return n;
}

// CLASSES
class doms
{
    public: // access specifier
    string name; // data member
    int id;
    void function() // member function inside class
    {
        cout << "The name is "<< name << endl;
    }
    void function1();
};
void doms::function1() // member function outside class
{
    cout << "The id is " << id << endl;
}
class constructor
{
    public:
    int r_no;

    constructor()
    {
        cout << "Default Constructor Called!" << endl;
        r_no = 1;
    } 

    constructor(int x)
    {
        cout << "Parametrized Constructor Called!" << endl;
        r_no = x;
    }
};
class destructor 
{
    public:
    ~destructor()
    {
        cout << "Destructor called";
    }
};

int main()
{
    // STRING DECLARATION
    // char a[] = {'G', 'e', 'e', 'k', 's', '\0'};
    // char a[] = "Lenovo";
    // string a = "Apple";
    // string a ("Apple");
    // cout << a;

    // ARRAY
    // int a[3] = {};
    // for (int i=0; i<3; i++)
    // cout << a[i] << " ";

    // POINTER & REFERENCE
    // int a = 10;
    // int* b = &a;
    // cout << "a = "<< a << endl << "&a = " << &a << endl << "b = " << b <<" (Address of a)" << endl << "*b = " << *b;

    // PASS BY VALUE | POINTER | REFERENCE
    //  int n1=4,n2=4,n3=4;
    //  cout << "Address in main: " << &n1 << endl;
    //  cout << "Square: " << s1(n1) << endl;
    //  cout << "Value of n1: " << n1 << endl;
    //  cout << "Address in main: " << &n2 << endl;
    //  cout << "Square: " << s2(&n2) << endl;
    //  cout << "Value of n2: " << n2 << endl;
    //  cout << "Address in main: " << &n3 << endl;
    //  cout << "Square: " << s3(n3) << endl;
    //  cout << "Value of n3: " << n3 << endl;
    //  int& m = n3;
    //  cout << m;

    // ARRAY & POINTERS
    // int a[3] = {1,2,3};
    // int* p = a;
    // cout << p[0] << " " << p[1] << " " << p[2] << endl;
    // for (int i=0;i<3;i++)
    // {
    //     cout << *p << " ";
    //     p++;
    // }
    // cout << sizeof(a) << " " << sizeof(p) << endl;
    // cout << (int)sizeof(a) << " " << (int)sizeof(*p) << endl;
    // cout << sizeof(a) << " " << sizeof(*p) << endl;
    // cout << a[1] << " ";
    // cout << *(a+1) << " ";
    // cout << p[2] << " ";
    // cout << *(p+2) << " ";

    // doms object1; // object creation
    // object1.name="Rahul"; // accessing data member & member func of class through object
    // object1.id = 20;
    // object1.function();
    // object1.function1();

    // constructor c1;
    // cout << "Value is " << c1.r_no << endl;
    // constructor c2(29);
    // cout << "Value is " << c2.r_no;

    // destructor d1;
    // cout << "Hi" << endl;

    return 0;
}
