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
题目：https://www.luogu.com.cn/problem/P1035
题目描述
已知：S_n= 1+\frac{1}{2}+\frac{1}{3}+…+\frac{1}{n}S 
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
 +…+ 
n
1
?	
 。显然对于任意一个整数 kk，当 nn 足够大的时候，S_n>kS 
n
?	
 >k。

现给出一个整数 kk，要求计算出一个最小的 nn，使得 S_n>kS 
n
?	
 >k。

输入格式
一个正整数 kk。

输出格式
一个正整数 nn。
*/