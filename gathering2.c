#include<stdio.h>
int sum(int a[])
{
	int i, ans = 0;
	
	for(i=0;a[i]!=NULL;i++)
	{
		ans = ans + a[i];
	}
	return ans;
}
void main()
{
	int a[100],n;
	
	printf("Enter Size Of Array = ");
	scanf("%d",&n);
	
	int i;
	printf("Enter Value Of Element = \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Sum OF All Array Element = %d",sum(a));
}