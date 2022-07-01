#include<iostream>
using namespace std;
int main()
{

int n;

cout<<"enter a number"<<endl;
cin>>n;
int i;
int arr[]={1,2,3,4,5,6};
for( i=0;i<sizeof(arr);i++)
{
	if (arr[i]==n)
	{
	  cout<<"the position is : "<<i+1<<endl;
	  break;	
	}
	
}
if(i==6)
{
	cout<<"not found";
}

return 0;
}
