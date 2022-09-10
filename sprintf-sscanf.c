#include<stdio.h>

int main(){
	char a[100];
	sprintf(a,"%s","gnja");
	printf("%s\n",a);
	int b,c,d;
	sscanf("2020:9:10","%d:%d:%d",&b,&c,&d);
	printf("%d:%d:%d\n",b,c,d);
	
	return 0;
}
