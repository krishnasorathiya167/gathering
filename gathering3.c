#include<stdio.h>
int len(int a[])
{
	int i,count = 0;
	for(i=0;a[i]!=NULL;i++)
	{
		count++;
	}
	return count;
}
void main()
{
	int a[100] = {34,23,12,78,47,82,40,67,49,24,34,56,23,12,67,34,21};
	
	printf("Length Of Array  = %d",len(a));
}                  