#include<iostream>
using namespace std;

int main()
{
    int a , b , c , d;
    string value;
    cout<<"Welcome to my calculator \n";
   
    value="yes";
    while (value=="yes")
    {
      cout<<"Enter 1 for multiplication \n"; 
      cout<<"Enter 2 for division \n"; 
      cout<<"Please enter your choice = ";
      cin>>d;
     if(d==1)
    {
        cout<<"Enter the value of 1st number = ";
        cin>>a;
        cout<<"Enter the value of 2nd number = ";
        cin>>b;
        c=a*b;
        cout<<"Multiplication of 1st and 2nd number is = " << c << "\n";
    }
    else if(d==2)
    {
       cout<<"Enter the value of 1st number = ";
        cin>>a;
        cout<<"Enter the value of 2nd number = ";
        cin>>b;
        c=a/b;
        cout<<"Division of 1st and 2nd number is = " << c << "\n";
    }
         cout<<"Do you want to continue ? \n" ;
    cout<<"To continue,enter value as yes else no = ";
    cin>>value;
    }

    return 0;
}