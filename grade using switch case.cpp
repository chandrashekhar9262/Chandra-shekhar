//Write a program to check grade using switch case statement
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter obtained marks :";
    cin>>m;
    switch(m)
    {
        case 40:
        cout<<"Fail";
        break;
        case 50:
        cout<<"Grade D";
        break;
        case 60:
        cout<<"Grade C";
        break;
        case 70:
        cout<<"Grade B";
        break;
        case 80:
        cout<<"Grade A";
        break;
        case 90:
        cout<<"Grade A+";
        break;
        case 100:
        cout<<"Grade O";
        break;
    }
    return 0;
}
