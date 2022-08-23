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
小蒜蒜最近学习了斐波那契数列。
leijia=2 i=1
leijia2=3 i=2
leijia=5 i=3
leijia2=8 i=4
1 1 2 3 5
斐波那契数列是指这样的数列：数列的第一个和第二个数都为 11，接下来每个数都等于前面 22 个数之和。

给出一个正整数 kk，要求斐波那契数列中第 kk 个数是多少。

输入格式
输入一行，包含一个正整数 kk。（1 \le k \le 461≤k≤46）

输出格式
输出一行，包含一个正整数，表示斐波那契数列中的第 kk 个数。
*/