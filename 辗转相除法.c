#include <stdio.h>

int MaxCommonFactor(int a, int b);

int main()
{
	int a, b, x;
	
	scanf("%d,%d", &a, &b);
	
	x = MaxCommonFactor(a, b);
	if (x < 0){
		printf("Input Error!\n");}
	else{
			printf("%d\n", x);
	}

}

int MaxCommonFactor(int a,int  b)
{
	int r;
	if (a <= 0 || b <= 0)
		return -1;
	int tmpt,tmpt2;
	do
	{
		
		r = a % b;
		if(r!=0){
			tmpt2=r;
		}
		a = b;
		b = r;
		
	}
	while (r != 0);
		return  tmpt2;
         
}
