#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{ 

    int n=4,k=3;
    int N[]={9,8,8,5};
    int i,j;
    int length=sizeof(N)/sizeof(N[0]);
    for(int t=0;t<k;t++)
    {

    

    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(N[i]>N[j])
            {
                swap(N[i],N[j]);

            }

        

        }
        
    }
    N[0]=N[0]*-1;
    
    
}
int sum=0;
for(int i=0;i<length;i++)
{
    sum=sum+N[i];
}
// return sum;
cout<<sum;
}

