#include<stdio.h>

int main()
{
	int ss,i=2,pd=1;
	
	printf("������Ҫ�жϵ���:");
	scanf("%d",&ss);
	if(ss==1){
		printf("��������");
			return 0;
	}
	while(i<ss)
	{
	    
	    if(ss%i==0)
	    {
	    	pd=0;
	    	break;
		}
		i++;
	}
if(pd==1){
		printf("������");
	}else{
		printf("��������");
	}
	
	return 0;
	
}