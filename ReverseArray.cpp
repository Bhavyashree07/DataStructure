#include<iostream>
using namespace std;
int main()
{
    int arr[10],n, i;
    cout<<"Enter size of an array: ";
    cin>>n;
    cout<<"Enter array elements:";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"reversed elements are:"<<endl;
    for(i=(n-1); i>=0; i--)
    cout<<arr[i]<<" ";
  
    return 0;
}
