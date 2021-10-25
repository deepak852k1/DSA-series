#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements!! : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min=INT_MAX, max=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Min = "<<min<<endl;
    cout<<"max = "<<max;
    return 0;

}
