#include<iostream>
using namespace std;

int main()
{
    int a , b , c , d , e , f , value;
    //string value;
    cout<<"Input 1 for addition \n";
    cout<<"Input 2 for substraction \n";
    cout<<"Please enter your choice = ";
    cin>>value;
    switch(value)
    {
        case 1:
        cout<<"Enter the value of 1st number = ";
        cin>>a;
        cout<<"Enter the value of 2nd number = ";
        cin>>b;
        c=a+b;
        cout<<"Addition of 1st and 2nd number is = " << c << "\n";
        break;
   
        case 2:
        cout<<"Enter the value of 1st number = ";
        cin>>d;
        cout<<"Enter the value of 2nd number = ";
        cin>>e;
        f=d-e;
        cout<<"The substraction of 1st and 2nd number is = " << f << "\n";
        break;
    }


    return 0;
}
    
