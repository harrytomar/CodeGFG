#include <iostream>
using namespace std;
typedef struct node
{
    int data;
    node *link;
}node;
int main() {
	int n,d,i,j,k,x;
	node *p,*head=NULL,*t,*l,*q;
	cin>>n>>d;
    while(n--)
    {
        cin>>x;
        p = new node;
        p->data = x;
        p->link = NULL;
        if(head==NULL)
        {
            head = p;
        }
        else
        {
            q = head;
            while(q->link!=NULL)
            {
                q=q->link;
            }
            q->link = p;
        }
    
    }
    p=head;
    while(--d)
    {
        p = p->link;
        
    }
    t = p->link;
    p->link = NULL;
    
    l = t;
    while(l->link!=NULL)
    {
        l = l->link;
    }
    l->link = head;
    
    p = t;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->link;
    }
	return 0;
}
