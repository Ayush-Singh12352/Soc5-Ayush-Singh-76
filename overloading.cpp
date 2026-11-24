#include<iostream>
using namespace std;

 class Calculator
{
 public:
 int add(int a,int b)
{
 return a+b;
}
 int add(int a, int b, int c)
{
 return a+b+c;
}
};
 int main()
{
 Calculator c;
cout<<"The addition of 1 is:"<<c.add(5,4)<<endl;
cout<<"The addition of 2 is:"<<c.add(4,9,8)<<endl;
 return 0;
}
