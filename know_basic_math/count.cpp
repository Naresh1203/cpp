#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int lastdigit;
    lastdigit=int(log10(n)+1);//optimal code 
                                //o(1) time complexity    //traditional way o(log10 +1) time complexity
                                //o(1) space complexity 

    cout<<lastdigit<<endl;
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the Number:";

    cin>>n;
    count(n);
    return 0;


}