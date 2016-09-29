#define Maxsize 1024
typedef int datatype;
typedef int curse;

typedef struct
{
	datatype data;
	cursor next;
}node;

node nodepoll[Maxsize];
cursor av;
void Initialize(void)
{
	int i;
	for(i = 0;i<Maxsize -1;i++)
	{
		nodepool[i].next = i+1;
	}
	nodepool[Maxsize - 1].next = NULL;
	av = 1;
}
void Cursor GetNode(void)
{
	cursor p;
	if(av = NULL)
		p = NULL;
	else
	{
		p = av ;
		av = nodepool[av].next;
	}
	return p;
}
void FreeNodep(cursor p)
{
	nodepool[p].next = av ;
	av  = p ;
}
