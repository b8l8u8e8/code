#include<stdio.h>


int main(void){
	int k,i,leijia=1,leijia2=1;
	scanf("%d",&k);
	for(i=0;i<k-2;i++){
		if(i%2==0) leijia+=leijia2;
		else 	leijia2+=leijia;
	}
	if(leijia>leijia2)	printf("%d",leijia);
	else	printf("%d",leijia2);
	return 0;
}


/*
С�������ѧϰ��쳲��������С�
leijia=2 i=1
leijia2=3 i=2
leijia=5 i=3
leijia2=8 i=4
1 1 2 3 5
쳲�����������ָ���������У����еĵ�һ���͵ڶ�������Ϊ 11��������ÿ����������ǰ�� 22 ����֮�͡�

����һ�������� kk��Ҫ��쳲����������е� kk �����Ƕ��١�

�����ʽ
����һ�У�����һ�������� kk����1 \le k \le 461��k��46��

�����ʽ
���һ�У�����һ������������ʾ쳲����������еĵ� kk ������
*/