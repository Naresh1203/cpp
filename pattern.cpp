#include<bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    
    }
}
void print2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    
    }
}
void print3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    
    }
}
void print4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    
    }
}
void print5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    
    }
}
void print6(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    
    }

}
void print7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }  /*[4,1,4] [3,3,3] [2,5,2] [1,7,1] [0,9,0]*/
        for(int j=0;j<i*2+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        
        cout<<endl;
    
    }

}
void print8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }  /*[0,9,0] [1,7,1] [2,5,2] [3,3,3] [4,1,4]*/
        for(int j=0;j<2*n-(i*2+1);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        
        cout<<endl;
    
    }

}
void print10(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        if(i>) i=2*n-i;
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    
    }

}


int main()
{
    int n;
    cin>>n;
    print10(n);
}

