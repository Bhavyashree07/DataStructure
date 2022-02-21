#include <iostream>
using namespace std;

int main()
{
   int num, sum=0;

   cout<<" Enter 10 numbers:"<<endl;

  for(int i=0; i<10; i++)
  {
   
    cin>>num;

    sum=sum+num;
  }
     cout << "\n The sum of 10 numbers is: "<<sum << endl;
     return 0;
}
