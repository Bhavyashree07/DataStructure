#include <iostream> 
using namespace std;  
int main()  
{ 
	int n,i=0,sum=0;
	cout<<"enter 10 numbers:"<<endl;
	do
	{ 
		cin>>n;
		sum=sum+n; 
		i++; 
	} 
	while(i<10);
	cout <<"\nThe sum of numbers is: " << sum<<endl; 
	return 0; 
} 
