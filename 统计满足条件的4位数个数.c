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
С��������ɸ���λ������������������������������ĸ�����

��λ���ϵ����ּ�ȥǧλ���ϵ����֣��ټ�ȥ��λ���ϵ����֣��ټ�ȥʮλ���ϵ����ֵĽ�������㡣

�����ʽ
����Ϊ���У���һ��Ϊ��λ���ĸ��� nn���ڶ���Ϊ nn ������λ����������֮����һ���ո�ֿ���(n \le 100n��100)

�����ʽ
���Ϊһ�У�����һ����������ʾ������������λ���ĸ�����
*/