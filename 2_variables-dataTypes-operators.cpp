#include <iostream>
using namespace std;

int main()
{

    //-DataTypes
    // int a = 4;
    // float b = 100.27; //4 Byte (32bit), used to store decimals. less common is normal use.
    // double c = 100.27; //8 Byte (64bit), used to store decimals. more scientific precise and regularly used.
    // char d = 'a'; //use to store single charactor, with single quote only.
    // string e = "abcdef"; //use to store string, with double quotes only.
    // bool f = true; //boolean value true or false.

    //-Output in C++
    // string name = "cosmos";
    // cout << "Hello " << name << "!" << endl;

    //-Input in C++
    // int age;
    // cout << "What is your age: ";
    // cin >> age;
    // cout << "Your age is: " << age << endl;

    //-Typecasting: converting data from one type to another
    // char grade = 'A';
    // int value = grade;
    // cout << value << endl;
    //;here we converted a character into a integer where after converting into integer, it will show characters ASCII value.

    //-Unary operators
    // increment "++"
    int a = 10;
    int b = a++;
    cout << "value of a: " << a << endl; // it will print 11
    cout << "value of b: " << b << endl; // it will print 10
    // if ++ is after the variable like in a++, it will first assign the value of a to b and then increment the value of a.

    int c = 10;
    int d = ++c;
    cout << "\nvalue of c: " << c << endl; // it will print 11
    cout << "value of d: " << d << endl;   // it will print 11
    //;if ++ is before the variable like in ++c, it will first increment the value of c and then assign it to d.
    return 0;

    // decrement "--"
    int e = 10;
    int f = e--;
    cout << "\nvalue of e: " << e << endl; // it will print 9
    cout << "value of f: " << f << endl;   // it will print 10
    // if -- is after the variable like in e--, it will first assign the value of e to f and then decrement the value of e.

    int g = 10;
    int h = --g;
    cout << "\nvalue of g: " << g << endl; // it will print 9
    cout << "value of h: " << h << endl;   // it will print 9
    //;if -- is before the variable like in --g, it will first decrement the value of g and then assign it to h.
}
