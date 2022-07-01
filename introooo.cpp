#include <iostream>
using namespace std;
int main()
{
string a,b,c,d;
	cin>>a>>b;
	c=a;
	d=b;
	c.replace(0,1,"t");
	d.replace(0,1,"t");
	if(c==d)
	{
	   cout<<"yes"<<endl; 
	}
	else
	{
          int n=a.length();
        for (int i = 0; i < n / 2; i++)
        {
        swap(a[i], a[n - i - 1]);
        }
        
        a.replace(0,1,"t");
         b.replace(0,1,"t");
        if(a==b)
        {
            cout<<"yes"<<endl;  
        }
        else{
             cout<<"no"<<endl; 
        }
	}
	return 0;
}
