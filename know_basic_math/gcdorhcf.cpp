#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
while(a>0 && b>0)     //USing Eculidian Method
                    //gcd(a,b)==gcd(a-b,b) if(a>b) 
                    //gcd(a,b)==gcd(b-a,b) if(b>a)

                    // some changes 
                    //gcd(a,b)==gcd(a%b,b) if(a>b)
                    //gcd(a,b)==gcd(b%a,b) if(b>a)



                    //time complexity :- o(log(fi)(min(a,b)));
{
    if(a>b){
        a=a%b;
    
    }
    else
    b=b%a;

    if(a==0)
    return b;
    else
    return a;

}
return 0;
}
int main()
{
    int a,b;
    cout<<"Entet the Number :"<<endl;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}