#include<stdio.h>

int main(){
	int num,i,d;
	scanf("%d",&num);
	int a[num];
	
	for(i=0;i<=num-1;i++)
	{
		a[i]=0;
	}
		for(i=0;i<=num-1;i++)
	{
			scanf("%d",&d);
		a[i]=d;
	}
	
		for(i=0;i<=num-1;i++)
	{
		printf("%d",a[i]);	
		
	}
	return 0;
	
}