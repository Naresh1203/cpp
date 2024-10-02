#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next;

};
struct node *insertion(struct node *head)
{
struct node *temp= new node();
int x;
cout<<"Enter the data: ";
cin>>x;
temp->data=x;
temp->next=NULL;
if(head==NULL)
{
    head=temp;
    return head;
}
else
{
    struct node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;

    }
    ptr->next=temp;
    return head;
}


}
struct node *deletion(struct node *head)
{
    int x;
    cout<<"Enter the element you want to delete";
    cin>>x;
    
    if(head->data==x)
    {
        struct node *ptr=head;
        ptr=ptr->next;
        free(head);
        head=ptr;
        return head;

    }
    else if(head!=NULL)
    {
        struct node *ptr=head;
        while(ptr->next->data!=x)
        {
            ptr=ptr->next;
            

        }
        struct node *temp=ptr->next;
        ptr->next=temp->next;
        free(temp);
        return head;


    }
    else{
        cout<<"Head is not Present";
        return 0;
        
    }
}
    void Traversal(struct node *head)
    {
        struct node *ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<"\t";
            ptr=ptr->next;
        }

    }

int main()
{
    int n;
    struct node *head=NULL;
    do{
        cout<<"1.Insertion 2.Deletion 3.Traversal 4.count 0. Exit"<<endl;
        cout<<"Enter your choise:"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:head=insertion(head);
            break;
        case 2:head=deletion(head);
            break;
        case 3:Traversal(head);
        break;

        // case 4: head=count();
        // break;
        default:
            cout<<"Wrong Choise";
            break;
        

        }
    }while(n!=0);
    return 0;
}