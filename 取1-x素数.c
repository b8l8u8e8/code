#include<stdio.h>

int main()
{
	int ss,i=2,pd=1,put;
	
    printf("请输入要1-x的数:");
	scanf("%d",&put);

	for(ss=1;ss<=put;ss++)
	{
		i=2;
		pd=1;
	   	while(i<ss)
     	{
	    
	    if(ss%i==0)
	    {
	    	pd=0;
	    	break;
		}
		i++;
    	}
        if(pd==1)
		{
		printf("%d\n",ss);
	        }	
	}

	return 0;	
}