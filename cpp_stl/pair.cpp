#include <bits/stdc++.h>
using namespace std;

void explainpair()
{
    pair<int ,int > p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
//Nested pair
    pair<int,pair<int,int>> q={1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<" "<< q.second.second<<endl; 
//Array 
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
}
int main()
{
    explainpair();
    return 0;

}