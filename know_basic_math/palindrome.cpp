#include<bits/stdc++.h>
using namespace std;
int palindrome(int n)
{
    int lastdigit;
   int data=n;
   int reverse=0;
   while(n>0)
   {
    lastdigit=n%10;
        reverse=reverse*10+lastdigit;//time complexity =o(log10(n +1))
        n=n/10;                         //space complexity=0(1)
   }
   if(data==reverse)
   {
    cout<<reverse <<" is Palindrome Number "<<endl;
   }
   else
   {
    cout<<reverse<<" is not Palindrome Number"<<endl;
   }
    

return 0;
    
}
int main()
{
    int n;
    cout<<"Enter the Number:";

    cin>>n;
    palindrome(n);
    return 0;


}