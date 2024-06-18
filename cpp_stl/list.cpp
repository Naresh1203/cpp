#include <bits/stdc++.h>
using namespace std;
void explainList()
{
    list<int> ls;
    ls.push_back(2);//{2} Dynamic in nature &act as doubly linkedlist
    ls.emplace_back(5);//{2,5}
    ls.push_front(3);//{3,2,5}
    ls.emplace_front(); //{2, 5}
    //rest function same as vector
    //begin ,end,rbegin,rend,clear,insert,size,swap

}
int main()
{
    explainList();
    return 0;
}