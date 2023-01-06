#include<stdio.h>
int search(int number,int a[],int length);


int main(){
	int a[]={1,5,8,12,19,25,68,286,296,297};


	printf("%d",search(19,a,sizeof(a)/sizeof(a[0])));
	
	
	
	return 0;
}
//搜索不到返回-1,搜索到返回下标；
int search(int number,int a[],int length){
	int ret=-1,right=length-1,left=0,num;
		//printf("length%d\n",length);
	while(right>=left)
	{ 
		num=(right+left)/2;
		if(a[num]==number)
		{
			ret=num;
			break;
		}else if(a[num]>number){
			right=num-1;
		}else if(a[num]<number){
			left=num+1;
		}
	}
	return ret;
	
}



/*
0  1  2  3  4  5  6  7
2  6  8  10 12 15 18 20
*/