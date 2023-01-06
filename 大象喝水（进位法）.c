#include<stdio.h>
#include<math.h>
#define PAI 3.14159
//有小数进位ceil，有小数不进位强制转换int，满5进位int（a+0.5）

int main(){
	int h,r;
    printf("please input the height and the radius:\n")	;
	scanf("%d,%d",&h,&r);
	float ret=1e3*20/(PAI*r*r*h);
	printf("%d",(int)ceil(ret));
	
	return 0;
}
