#include <iostream> 
using namespace std;  
int main()  
{ 
	int n,i=0,sum=0;
	cout<<"Enter 10 numbers:"<<endl;
	while(i<10)
	{ 
		cin>>n;
		sum=sum+n; 
		i++; 
	} 
	
	cout <<"\nThe sum of numbers is: " << sum<<endl; 
	return 0; 
} 
