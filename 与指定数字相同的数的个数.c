#include<stdio.h>

int main(void){
	int n,i,cnt=0,ss;
	scanf("%d %d",&n,&ss);
	int num[n];
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		if(num[i]==ss) cnt++;
	}
	printf("%d",cnt);
	return 0;
	
}



/*
输出蒜头君的整数序列中与指定数字相同的数的个数。

输入格式
输入包含 22 行：

第 11 行为 N\ (1\le N \le 100)N (1≤N≤100) 和 m\ (1\le m \le 1000)m (1≤m≤1000)，表示整数序列的长度和指定的数字，中间用一个空格分开；

第 22 行为 NN 个整数，整数之间以一个空格分开，在 [1,1000][1,1000] 范围内。

输出格式
输出为 NN 个数中与 mm 相同的数的个数。
*/