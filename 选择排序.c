#include<stdio.h>
int max(int a[],int len);


int main(){
	int a[]={3,2,1};

	int t,b,length,i;
		length=sizeof(a)/sizeof(a[0]);
	for(i=length-1;i>0;i--){
     b=a[max(a,i+1)];
     a[max(a,i+1)]=a[i];
     a[i]=b;
     //	printf("b%d amax%d\n",b,a[max(a,i+1)]);
	}
	//遍历数组
	for(i=0;i<length;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
	
}


//寻找数组中最大值的下标
int max(int a[],int len)
{
	int maxid=0,i;
	for(i=1;i<len;i++){
		if(a[i]>a[maxid]){
			maxid=i;
		}
	}
	
	return maxid;
}


/*
0  1  2  3  4  5
1  19 3 16  20 2
*/