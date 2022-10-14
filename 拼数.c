#include <stdio.h> 
#include <math.h> 
#include<string.h>
int maxid(char (*p)[10],int n);
int main()
{
	int n;
	scanf("%d",&n);
	char a[n][10];
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	
	char ret[1000]={'\0'};
	for(int i=0;i<n;i++){
	strcat(ret,a[maxid(a,n)]);
	a[maxid(a,n)][0]='0';
	}
	printf("%s",ret);
	return 0;
}

int maxid(char (*p)[10],int n){
	int id=0;
	
	for(int i=1;i<n;i++){
		char a[100]={'\0'},b[100]={'\0'};
		strcat(a,p[id]);
		strcat(a,p[i]);
		strcat(b,p[i]);
		strcat(b,p[id]);
		if(strcmp(a,b)<0){
			id=i;
		}
	}
	return id;
}

//https://www.luogu.com.cn/problem/P1012
