#include<stdio.h>
#include<stdlib.h>

//malloc
int main(){
	int *p;
//����4*int==p[0]->p[3]
p=(int*)malloc(4*sizeof(int));
p[0]=0;
printf("%d",p[0]);
free(p);//�ͷ��ڴ�


	return 0;
	
}


