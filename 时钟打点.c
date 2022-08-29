#include<stdio.h>
#include<time.h>
void aaa();
clock_t start,end;


int main(){
	start=clock();
	aaa();
	end=clock();
	double point=(double)(end-start);
	printf("\npoint:%f\n",point);
	printf("time:%f秒",point/CLK_TCK);
	return 0;
}

void aaa(){
	int i;
	
	for(i=0;i<20000;i++){
		
		printf("%d",i);
	}
	
}
