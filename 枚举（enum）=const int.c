#include<stdio.h>

int main(){
	enum choice {b=1,c,d};
	int a;
	scanf("%d",&a);
	switch(a){
	case	b:printf("这是b"); break;
    case	c:printf("这是c"); break;
    case	d:printf("这是d"); break;
	default:printf("这是default"); break;
	}
	return 0;
}