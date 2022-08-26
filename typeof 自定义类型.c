#include<stdio.h>
struct axis{
	int x,y;
};
typedef struct axis axis
//以后axis==struct axis
int main(void){
	axis a;
	a.x=1;
	a.y=2;
	printf("%d &d\n",a.x,a.y)
	
	return 0;
	
}