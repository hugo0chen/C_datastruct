typedef int datatype;
#define maxsize 1024
typedef struct {
	datatype data[maxsize];
	int last;
}squenlist

int Insert(squenlist* L,datatype x,int i)
{
	int j;
	if(((*L).last)>maxsize -1)
	{
		print("error");
		return NULL;
	}
	else 
	{
		if((i<1)||(i>((*L).last)+1))
		{
			print("error");
			return NULL;
		}
		else 
		{
			for(j=(*L).last;j>=i-1;j--)
				(*L).data[j+1]=(*L).data[j];
			(*L).data[i-1]=x;
			(*L).last=(*L).last+1;
		}
	}
	return 1;
}

int Delete(squenlist*L,int i)
{
	int j;
	if((i<1)||(i>((*L).last+1)))
	{
		print("error");
		return NULL;
	}
	else 
	{
		for(j=i;j<(*L).last;j++)
		{
			(*L).data[j-1]=(*L).data[j];			
		}
		(*L).last--;
	}
	return (1);
}
