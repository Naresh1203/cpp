#include<bits/stdc++.h>
using namespace std;

class Node
{
    int data;
    Node *next;
public:
    Node(int data1,Node *next1)
    {
        data=data1;
        next=next1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

Node *insert(head,x){
    Node * temp=new Node(data)
    return temp;
    
}

int display(Node head)
{
    Node *ptr=head;

    while(ptr->next!=NULL)
    {
        cout<<ptr->data<<" ";
    }
}

int main()

{
    Node *head;
    int n;
    int x;

    do{
        cout<<"0.exit 1.insert 2.display "<<endl;
        cout<<"Enter Your Choise:";
        cin>>n;

        switch(n)
        {
            case 1: cout<<"Enter the Number you want to insert:"
                    cin>>x; 
                    head=insert(head,x);
            
            case 2: display(head);
                    // exit();

        }
    
        
    }while(true);
}
