#include<iostream>
using namespace std;
int main()
{
  int array1[20],array2[20], sum[20], i, n;
 cout<<"enter the size of array:";
 cin>>n;
 
  cout << "Enter elements of first array" << endl;
  

  for (i = 0; i< n; i++)
    cin >> array1[i];

  cout << "Enter elements of second array" << endl;

  for (i = 0; i < n; i++)
    cin >> array2[i];

  cout << "Sum of elements of the arrays:" << endl;

  for (i = 0; i < n; i++) {
    sum[i] = array1[i] + array2[i];
    cout << sum[i] << endl;
  }
  return 0;
}
