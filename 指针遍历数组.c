#include<stdio.h>

int main(){
	char a[]={1,2,3,4,5};
	char *p=a;
	//让p的地址小于等于a数组数值最后一个地址的条件即可完成遍历
	while(p<=&a[sizeof(a)/sizeof(a[0])-1]){
		printf("%d\n",*p++);
	}
	

	
	return 0;
	
}