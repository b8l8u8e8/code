#include<stdio.h>
#include<math.h>

int main()
{
	//判断位数
		int sz,sz2,cnt=0;
	scanf("%d",&sz);
	sz2=sz;
	if(sz<0){
		sz=-sz;
	}
	while (sz>0){
		sz/=10;
		cnt++;
	}

	//判断位数结束
	
	
	int chu;
	chu=pow(10,cnt-1);
	while(sz2>0){
		printf("%d ",sz2/chu);
		if(sz2/chu>=1 && sz2/chu<=9 && sz2%chu==0)
		{
			  while (chu>9){
	  
		    if(chu==10)
		    {
		    printf("0");
			goto out;	
			}
				chu/=10;
	        	printf("0 ");
	                      }
		}
		sz2%=chu;
		if(sz2<10) {
		printf("%d",sz2);	
			break;
		}
		chu/=10;
	}
	out:
	
	/*
	123
	123/100--1
	123%100--23
	23/10--2
	23%10--3
	
	*/
	
	
	
	
	return 0;
	
}