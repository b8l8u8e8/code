#include<stdio.h>

int main()
{
	int ss,i=2,pd=1;
	
	printf("请输入要判断的数:");
	scanf("%d",&ss);
	if(ss==1){
		printf("不是素数");
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
		printf("是素数");
	}else{
		printf("不是素数");
	}
	
	return 0;
	
}