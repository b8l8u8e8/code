#include<stdio.h>
int is(int num);


int main(void)
{
	int n,i,cnt=0;
	
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
	scanf("%d",&num[i])	;
	if(is(num[i]))  cnt++;
	}
printf("%d",cnt);
	return 0;
	
}

int is(int num){
	int ge,shi,bai,qian,ret;
	qian=num/1000;
	bai=(num%1000)/100;	
	shi=((num%1000)%100)/10;
	ge=(((num%1000)%100)%10);
	if(ge-qian-bai-shi>0) ret=1;
	else ret=0;
	return ret;
}










/*
小蒜给了若干个四位数，请求出其中满足以下条件的数的个数：

个位数上的数字减去千位数上的数字，再减去百位数上的数字，再减去十位数上的数字的结果大于零。

输入格式
输入为两行，第一行为四位数的个数 nn，第二行为 nn 个的四位数，数与数之间以一个空格分开。(n \le 100n≤100)

输出格式
输出为一行，包含一个整数，表示满足条件的四位数的个数。
*/