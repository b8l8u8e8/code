#include <stdio.h>
              
int main(void)
{
	int a,i;
	printf("\nplease input a number:\n");
	scanf("%d",&a);
	printf("%d=",a);
	for(i=2;i<=a;i++){
		if(a%i==0 && a!=i){
			a/=i;
			printf("%d*",i);
			i--;
		}else if(a%i==0 && a==i){
			a/=i;
			printf("%d",i);
			i--;
		}
	}
	return 0;
}
