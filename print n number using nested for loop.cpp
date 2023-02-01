//Write a program to print n number using nested for loop
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number of element to be printed :";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<i<<" "<<j<<"\n";
        }
    }
    return 0;
}
