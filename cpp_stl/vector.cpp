#include <bits/stdc++.h>
using namespace std; 
//vector is same as array but dynamic in nature

void explainVector()
{
  vector<int>v;//vector declartion
  v.push_back(1);//1 into vector
  v.emplace_back(2);//dynamically  increase size of vector and 2 into vector

//vectorinpair
vector<pair<int,int>>vec;
v.push_back({1,2});
//v.emplace_back({4,2});

vector<int> p(5,100); //return as {100,100,100,100,100};
vector<int> u(5); //return as {garbage,g ,g,g,g};
vector<int> w(5,20);//return as {20,20,20,20,20};

//copy vector into another vector
vector<int> v1(5,20);
vector<int>v2(v1);

//printmethod
cout<<v[0]<<" "<<v.at(0);//v[0] and v.at[0] both are similar.
cout<<v.back()<< " ";



//iterator like pointer  in vector

vector<int>::iterator it=v.begin();//point at begin of vector 
{
    it++;
    cout<<*(it)<<" ";  //it display the address but *it displays the value present on that location.

}
vector<int>::iterator it=v.end(); //point at end of vector.
vector<int>::iterator it=v.rbegin();//reverse the vector and point at beginneing.
vector<int>::iterator it=v.rend();//reverse the vector and point at end;

cout<<v[0]<<" "v.at(0);
cout<<v.back()<<" ";//the element which is last .

for(vector<int>::iterator it=v.begin();it!=v.end();it++)
{
    cout<<*(it)<<endl;
}
//using auto
//auto means automatically decide the datatypes.

for(auto it=v.begin();it!=v.end();it++)
{
    cout<<*(it)<<" ";
}

//another way 
//in this type auto automatically act as int in v= {10,20,30 } case.

for(auto it: v)
{
    cout<<it<<" ";
}
//Deletion in vector
//{10,20,12,23}
v.erase(v.begin()+1);//vector will be resuffled .
                    //20 wil resuffled.
//{10,20,12,23}
v.erase(v.begin()+2,v.begin()+4); //{10,20,35}[start,end] here end not included.

//Insert Function
//1.
vector<int>v(2,100); //{100,100}
v.insert(v.begin(),300); //{300,100,100};
//2.
v.insert(v.begin()+1,2,10);//{300,10,10,100,100};
//with copy another vector
//3. 
vector<int> copy{2,50}; //{50,50}
v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}





}
int main()
{
    explainVector();
    return 0;
}