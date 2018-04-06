#include<iostream>
#include<queue>
using namespace std;
/*struct node{
	int data;
	struct node *link;
};
void insert(struct node** head, int k)
{
    node* new_node =new node;
    node *last = *head;
    new_node->data  = k;
    new_node->link = NULL;
    if (*head == NULL)
    {
       *head = new_node;
       return;
    }
    while (last->link != NULL)
        last = last->link;
    last->link = new_node;
    return;
}
int print(node* n)
{	int r=0;
    if(n==NULL)
	return 0;
	else
	{
	node *temp=n;
	while(temp!=NULL)
	{
		r++;
		temp=temp->link;
	}
	return r;
	}
}*/
int main()
{
int q,n,m,i,a,b,p;
cin>>q;
while(q--)
{
    cin>>n>>m;
    p=0;
    int cnt[n];
    for(i=0;i<n;i++)
        cnt[i]=0;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        cnt[b-1]++;
    }
    for(i=0;i<n;i++)
        if(cnt[i]==n-1)
        {cout<<"alive "<<i+1<<endl;
        p=1;
        }
    if(!p)
        cout<<"dead"<<endl;
}
    return 0;
}
