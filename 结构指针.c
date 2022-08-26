#include<stdio.h>
struct axis change(struct axis* b);
struct axis{ int x,y;
}a={1,2};

int main()
{

    //a.x=1;
 	//a.y=2;
	printf("%d %d\n",a.x,a.y);
	change(&a);
	printf("%d %d\n",a.x,a.y);
	return 0;
	
}

struct axis change(struct axis* b){
	
	b->x=2;
	(*b).y=3;
	return *b;
	
}