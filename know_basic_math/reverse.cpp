#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int lastdigit;
    int reverse=0;
    while(n>0)
    {
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;//time complexity =o(log10(n +1))
        n=n/10;                     // space complexity=o(1)
    }
    cout<<reverse<<endl;
    
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the Number:";

    cin>>n;
    reverse(n);
    return 0;


}