#include<iostream>
using namespace std;
void addition(int x,int y);
void substracion(int x,int y)
int main()
{   
    int x , y ;
    addition(x,y);
    substraction(x,y);
    return 0;
}    
void addition(int x,int y)
{    
    cout<<"Enter the value of x = ";
    cin>>x;
    cout<<"Enter the value of y = ";
    cin>>y;
    cout<<"Addition of x and y is ="<<x+y;

void substraction(int x,int y)
{    
    cout<<"Enter the value of x = ";
    cin>>x;
    cout<<"Enter the value of y = ";
    cin>>y;
    cout<<"Addition of x and y is ="<<x+y;
}