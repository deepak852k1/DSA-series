#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int count=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        { 
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}