#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
    int total = a + b;
    return total;
}
int sub(int a, int b)
{
    int total = a - b;
    return total;
}
int mul(int a, int b)
{
    int total = a * b;
    return total;
}
double div(double a, double b)
{
    int total = a/b;
    return total;
}
double top(double a)
{
    double total = sqrt(a);
    return total;
}
int exp(int a, int b)
{
    int total = pow(a,b);
    return total;
}
int main()
{
    cout << "1: add"<<endl;
     cout << "2: sub"<<endl;
      cout << "3: mul"<<endl;
       cout << "4: div"<<endl;
        cout << "5: square root"<<endl;
         cout << "6: exponent"<<endl;

         int selection;
         cin >> selection;
         if(selection == 1)
         {
    int num1, num2;
    int total;
    cout<<"enter value of num1"<<endl;
    cin >> num1;
    cout<<"enter value of num2"<<endl;
    cin >> num2;
    total = num1 + num2;
    total = add( num1, num2);
    cout << total;
         }
         if (selection==2)
         {
             int num1, num2;
             int total;
             cout<<"enter value of num1"<<endl;
             cin >> num1;
             cout<<"enter value of num2"<<endl;
             cin >> num2;
             total = num1 - num2;
             total = sub(num1, num2);
             cout << total;
         }
         if (selection == 3)
         {
             int num1, num2;
             int total;
             cout<<"enter value of num1"<<endl;
             cin >> num1;
             cout<<"enter value of num2"<<endl;
             cin >> num2;
             total = num1 * num2;
             total = mul(num1, num2);
             cout << total;
         }
         if (selection == 4)
         {
             double num1, num2;
             double total;
             cout<<"enter value of num1"<<endl;
             cin >> num1;
             cout<<"enter value of num2"<<endl;
             cin >> num2;
             total = num1 / num2;
             total = div(num1, num2);
             cout << total;
         }
         if (selection == 5)
         {
             double num1;
             double total;
             cout<<"enter value of num1"<<endl;
             cin >> num1;
             total = top(num1);
             cout << total;
         }
         if (selection == 6)
         {
             int num1;
             int num2;
             int total;
             cout<<"enter value of num1"<<endl;
             cin >> num1;
             cin >> num2;
             total = exp(num1,num2);
             cout << total;
         }
}