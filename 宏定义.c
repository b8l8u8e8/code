#include<stdio.h>
#define pi 3.14
#define prt  printf("%f\n",pi);\
             printf("%s","����Ҳ����\n")
//��������û������
#define compute(x) x*5
//Ԥ�ȶ���ĺ�(�����ı��滻) __FILE__ __TIME__  __LINE__ __FUNC__ __TIME__

int main(){
	prt;
	printf("%d",compute(3));
	
	return 0;
}
