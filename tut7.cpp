#include <iostream>

using namespace std;

int c = 45;

int main()
{
    // ***************Build in Data types***************

    // int a,b,c;

    // cout<<"Enter the value of a : ";
    // cin>>a;

    // cout<<"Enter the value of b : ";
    // cin>>b;

    // c = a + b;

    // cout<<"The sum is "<<c<<endl;

    //  cout<<"The global value of c is "<<::c;

    // ***************Float, double and long double literals***************
    // float d=34.4f;
    // long double e=34.4l;
    // Here 34.4 is a double by default but if 34.4f then float

    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

    // ****************Refrence Variable***************
    //  Rohan ---> Monty ---> Rohu ---> Dangerous coder
    // float x=455;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // ****************Typecasting***************
    int a = 45;
    float b = 45.46;

    cout << "The value of a is " << float(a) << endl;
    cout << "The value of a is " << (float)a << endl;

    cout << "The value of b is " << int(b) << endl;
    cout << "The value of b is " << (int)b << endl;

    int c = int(b);

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;
    cout << "The expression is " << a + c << endl;

    return 0;
}