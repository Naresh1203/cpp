#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int data;
    struct node *next;

};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
int n;
int x;
int cnt=0;

cin>>n;

struct node *head=NULL;
for(int i=0;i<n;i++)
{
    if(head==NULL)
    {
        struct node *temp=new node();
        cin>>x;
        temp->data=x;
        temp->next=NULL;
        head=temp;
    }
    else
    {
        struct node *ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;

        }
        struct node *temp=new node();
        cin>>x;
        temp->data=x;
        temp->next=NULL;
        ptr->next=temp;
    }

}
    struct node *ptr=head;
    // ptr=ptr->next;
    while(ptr->next!=NULL)
    {
        if(ptr->data < ptr->next->data && ptr->next->data > ptr->next->next->data)
        {
            cnt+=1;
        }
        ptr=ptr->next;
    }
    cout<<cnt;
    return 0;
}