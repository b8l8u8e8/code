#include<stdio.h>
#include<math.h>



int main(){
printf("Input a,b,c:");
float a,b,c;
scanf("%f,%f,%f",&a,&b,&c);
float p=(a+b+c)/2;
printf("area=%.2f\n",pow(p*(p-a)*(p-b)*(p-c),0.5));
	
	return 0;
}
