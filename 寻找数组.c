#include<stdio.h>
int search(int key,int a[],int length);

int main(void){
	int a[]={1,2,3,4,5};
	int length=sizeof(a)/sizeof(a[0]);
	//printf("%d",length);
	printf("%d",search(9,a,length));
	
	return 0;
}
//寻找到返回数组下表，未寻找到返回-1
int search(int key,int a[],int length)
{
int i,ret=-1;

	for(i=0;i<length;i++){
		if(a[i]==key){
			ret=i;
			break;
		}
	}
	return ret;
	
}