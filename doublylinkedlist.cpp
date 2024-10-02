#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;

};

struct node *insertfront(struct node *head)
{
    cout<<"Enter the Element you want to insert:";
    int x;
    cin>>x;
     struct node *temp=new node();
        temp->data=x;
        temp->left=NULL;
        temp->right=NULL;
    if(head==NULL)
    {
        return temp;
    }
    else
    {
        head->left=temp;
        temp->right=head;
         head=temp;
        return head;
    }
}
struct node *insertend(struct node *head)
{
cout<<"Enter the Element you want to insert:";
    int x;
    cin>>x;
     struct node *temp=new node();
        temp->data=x;
        temp->left=NULL;
        temp->right=NULL;
    if(head==NULL)
    {
        return temp;
    }
    else
    {
        struct node *ptr=head;
        while(ptr->right!=NULL)
        {
            ptr=ptr->right;
        }
        ptr->right=temp;
        temp->left=ptr;
        return head;
    }
}
struct node *insert(struct node *head)
{
    int cnt;
    cout<<"Enter the location you want to insert but less equal to size of linked list";
    cin>>cnt;
    cout<<"Enter the element:";
    int x;
    cin>>x;
    int i=0;
    struct node *ptr=head;
    while(i!=cnt)
    {
        ptr=ptr->right;
    }
    struct node *temp=new node();
    temp->data=x;
    ptr->right->left=temp;
    temp->right=ptr->right;
    
    ptr->right=temp;
    temp->left=ptr;
    return head;
}
void traversal(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"\t";
        ptr=ptr->right;

    }

}
int main()
{
    int n;
    struct node *head=NULL;
    do{
        
        cout<<"\n1.insert from front\n 2.insert to end.\n 3.insert at given location\n 4. deletefrom front\n 5.delete to specific location \n6.delete from end: \n7.Traverse "<<endl;
        cin>>n;
        switch (n)
        {
        case 1:head=insertfront(head);
            break;
        case 2:head=insertend(head);
        break;

        case 3:head=insert(head);
        break;
        case 7:traversal(head);
        break;
        
        default:
            break;
        }
    }while(n!=0);
}