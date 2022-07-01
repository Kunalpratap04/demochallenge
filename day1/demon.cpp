#include<bits/stdc++.h>
using namespace std;


int main()
{
    int r1,r2,c1,c2;
    int m1[r1][c1];
    int m2[r2][c2];
    cout<<"\nEnter the order of Matrix 1: ";
    cin >>r1>>c1;
    cout<< "\nEnter order of Matrix 2: ";
    cin>> r2>>c2;
    
    // if((r1!=r2) ||(c1!=c2))
    // {
    //     cout<<"\nPlease enter the matrix of same order.\n\n";
    //     return 0;
    // }
    
    cout<<"Enter Matrix 1:\n";
    for(int i=0;i<r1;i++)
    {
        for(int j =0;j<c1;j++)
        {
            cin >> m1[i][j];
        }
    }
    cout<<"\nEnter Matrix 2:\n";
    for(int i=0;i<r2;i++)
    {
        for(int j =0;j<c2;j++)
        {
            cin >> m2[i][j];
        }
    }
    cout<<"\n\nMatrix 1:\n";
    for(int i=0;i<r1;i++)
    {
        for(int j =0;j<c1;j++)
        {
            cout << m1[i][j]<<"\t";
        }
        cout<<endl;
    }
cout<<"\n\n";
cout<<"Matrix 2:\n";
    for(int i=0;i<r2;i++)
    {
        for(int j =0;j<c2;j++)
        {
            cout << m2[j][i]<<"\t";
        }
        cout<<endl;
    }

cout<<"Addition of matrices are:\n\n";
    int m3[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            m3[i][j]= m1[i][j]+m2[i][j];
            cout<<m3[i][j]<<"\t";
        }
        cout<<endl;
    }

return 0;
}
