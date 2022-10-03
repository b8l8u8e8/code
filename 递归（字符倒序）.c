#include <stdio.h>
#include<string.h>
int abcd(char *,int lenth,int cnt);

int main()
{
	char a[30];
printf("input your string:\n");
scanf("%s",a);
	abcd(a,strlen(a),strlen(a));
}
int abcd(char *p,int lenth,int cnt){
	if(cnt-1>=0){
		printf("%c",p[cnt-1]);
		abcd(p,lenth,cnt-1);
	}else{
		return 0;
	}
}
