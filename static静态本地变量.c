#include<stdio.h>
void plus();
void plusstatic();

int main(void){
	plus();
	plus();
	plusstatic();
	plusstatic();
	return 0;
	
}


void plus(){
	int a=0;
	a+=1;
	printf("in %s %d\n",__func__,a);
	
}
void plusstatic(){
	static int a=0;
	a+=1;
	printf("in %s %d\n",__func__,a);
	
}
/*
__func__���Զ��滻Ϊ������
*/