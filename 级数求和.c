#include<stdio.h>

int main(){
	
	int k,i=1;
	double ss;
	
	scanf("%d",&k);
	for(i=1;ss<=k;i++)
	{ ss+=1.0/i;
	}
	printf("%d",i-1);
	return 0;
	
}


/*
i   ss
1   1
2   1+1/2
3   1+1/2+1/3
4   1+1/2+1/3+1/4
��Ŀ��https://www.luogu.com.cn/problem/P1035
��Ŀ����
��֪��S_n= 1+\frac{1}{2}+\frac{1}{3}+��+\frac{1}{n}S 
n
?	
 =1+ 
2
1
?	
 + 
3
1
?	
 +��+ 
n
1
?	
 ����Ȼ��������һ������ kk���� nn �㹻���ʱ��S_n>kS 
n
?	
 >k��

�ָ���һ������ kk��Ҫ������һ����С�� nn��ʹ�� S_n>kS 
n
?	
 >k��

�����ʽ
һ�������� kk��

�����ʽ
һ�������� nn��
*/