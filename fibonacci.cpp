//Write a program to print fibonacci series
#include <iostream>

using namespace std;

int main()
{
    int n1=0,n2=1,n3,i,num;
    cout<<"Enter the number of elements :";
    cin>>num;
    cout<<n1<<" "<<n2<<" ";     //to print 0 and n1
    for(i=2; i<num; ++i)        //loop starts from 2 because 0 and 1 already printed
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;
}
