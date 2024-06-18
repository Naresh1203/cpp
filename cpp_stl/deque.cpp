#include<bits/stdc++.h>
using namespace std;
void explainDeque()
{
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();

}
void explainStack()
{
    stack<int>st;//LIFO
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(3);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}
    cout<<st.top();//print 5"**st[2]is invalid **"
    st.pop();//st looks like {3,3,2,1}
    cout<<st.top();//3
    cout<<st.size();//4
    cout<<st.empty();
    stack<int>st1,st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int>q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace(4);//{1,2,4}
    q.back()+=5; //9
    cout<<q.back();//prints 9
//Q is {1,2,9}
    cout<<q.front();//prints 1

    q.pop();//{2,9}
    cout<<q.front();prints 2

    //size swap empty same as stack
}
void explainPriority_Queue()
{
    priority_queue<int>pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{5,2,8}
    pq.emplace(10);//{10,8,5,2}

    cout<<pq.top(); //prints 10 
    pq.pop();//{8,5,2};
    cout<<pq.top();//prints 8

    //size swap empty function same as others

    //Minimum Heap  

    priority_queue<int,vector<int>,greater<int>>pq; // or Minimum priority queue
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10); //{2,5,8,10}
    
    cout<<pq.top(); //prints 2

    //Time complexity of priority queue is LOg(n)
}


int main()
{
  explainDeque(); 
  explainStack(); 
  explainQueue();
  explainPriority_Queue()
} 