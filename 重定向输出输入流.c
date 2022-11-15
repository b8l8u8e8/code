#include<stdio.h>
#include<stdlib.h>
int main(){
freopen("1.txt","w",stdout);
printf("123");
fclose(stdout);
freopen("1.txt","r",stdin);
int a;
scanf("%d",&a);
fclose(stdin);
freopen("con","w",stdout);
freopen("con","r",stdin);
    char b[4];
	sprintf(b,"%d",a);
	printf("#%s#",b);
}
