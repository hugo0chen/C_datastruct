// single linklist 
typedef int datatype;
typedef struct node{
	datatype data;
	struct node *next;
}linklist;

linklist *head,*p;
p =malloc(sizeof(linklist));

linklist *CreateListHead(void)
{
	char ch;
	linklist *head,*s;
	head = NULL;
	ch = getchar();
	while(ch!='$')
	{
		s = malloc(sizeof(linklist));
		s->data = ch;
		s->next = head;
		head = s;
		ch = getchar();
	}
	return head;	
}
//head -->head point
//rear  -->rear point
linklist *CreateListRear(void)
{
	char ch;
	linklist *head,*s,*rear;
	head = NULL;
	r = NULL;
	ch = getchar();
	while(s!='$')
	{
		s = malloc(sizeof(linklist));
		s->data = ch;
		if(head==NULL)
			head = s;
		else
			rear->next = s;
		rear = s;
		ch = getchar();
	}
	if(rear!=NULL)
		rear->next = NULL;
	return head;	
}
//search number i
linklist *Get(linklist *head,int i)
{
	linklist *p;
	int j;
	p = head;
	j = 0;
	while((p->next!=NULL)&&(j<i))
	{
		p = p->next;
		j++;
	}
	if(j==i)
		return p;
	else 
		return  NULL;
}
//insert before
InsertBefor(linklist*head,linklist*p,datatype x)
{
	linklist *s,*q;
	s = malloc(sizeof(linklist));
	s->data = x;
	q = head;
	while(q->next!=p)	
		q=q->next;
	s->next = p;
	q->next = s;
}
