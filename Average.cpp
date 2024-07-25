#include<iostream>
using namespace std;
int main()
{
    int n , sum=0;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the number: ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    int average = sum/n;
    cout<<average;
    return 0;
}
