#include<stdio.h>
#include<stdlib.h>
int main(){
printf("你要申请几个元素\n");
int n;
scanf("%d",&n);
int *p=(int *)malloc(n*sizeof(int));
if(p==NULL){
	printf("申请失败\n");
}else{
	for(int i=0;i<n;i++){
	p[i]=i;
	}
	for(int i=0;i<n;i++){
		printf("p[%d]=%d\n",i,p[i]);
	}
}
free(p);
p=NULL;

}
