#include<stdio.h>

int main(){
	enum choice {b=1,c,d};
	int a;
	scanf("%d",&a);
	switch(a){
	case	b:printf("����b"); break;
    case	c:printf("����c"); break;
    case	d:printf("����d"); break;
	default:printf("����default"); break;
	}
	return 0;
}