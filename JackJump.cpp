#include<iostream>
#include<stack>
using namespace std;
struct node{
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
void print(node* n)
{	if(n==NULL)
	cout<<"NULL\n";
	else
	{
	node *temp=n;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->link;
	}
	cout<<endl;
	}
}
int main()
{
int q;
cin>>q;
while(q--)
{	int m,F,i,u,v,s,counter=0;
	cin>>F>>m;
	node *nodes[F]={NULL};
	for(i=0;i<m;i++)
	{
		cin>>u>>v;
		u--;
		v--;
		insert(&nodes[u],v);
		insert(&nodes[v],u);
	}
	for(i=0;i<F;i++)
	{	cout<<i<<"=>  ";
		print(nodes[i]);
	}
	cout<<endl;
	cin>>s;
	v=s-1;
	int visit[F]={0},level[F];
	for(i=0;i<F;i++)
	level[i]=-1;
	stack<int> Q;
	node *w;
	visit[v]=1;
	level[v]=0;
	Q.push(v);
	while(!Q.empty())
	{	v=Q.top();
		Q.pop();
		for(w=nodes[v];w!=NULL;w=w->link)
		{	int t=w->data;
		if(!visit[t])
		{
			if(level[t]==-1)
			level[t]=1+level[v];
			//cout<<w->data<<" ";
			Q.push(t);
			visit[t]=1;

		}
		else
        {
            if(level[v]-level[t]==3)
                counter++;
        }

		}
	}
	cout<<endl;
	for(i=0;i<F;i++)
	{
		cout<<level[i]<<" ";
	}
	cout<<endl<<endl;
	}
    return 0;
}
