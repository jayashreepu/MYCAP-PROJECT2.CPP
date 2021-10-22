//C++ Program to check Age of a user is eligible for voting or not
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter Age of a user:";
    cin>>age;
    
    if(age>=18)
    {
        cout<<"\nYou are eligible";
    }
    else
        cout<<"\n You are not eligible";
return 0;
}
