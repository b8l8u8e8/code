#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
unsigned int InputNumber(char ch);
int IsPrime(unsigned int n); 
int PrimeSum(unsigned int m, unsigned int n);
int main()
{
	int m = 0,n = 0,sum = 0,i = 0;
	do
	{
		m = InputNumber('m');  //实参‘ｍ’只在输入提示时使用
		n = InputNumber('n');
	}while(m > n && printf("n must be not smaller than m! Input again!\n"));   //保证m<=n
	sum = PrimeSum(m,n);
	printf("sum of prime numbers:%d",sum);
	return 0;
}
unsigned int InputNumber(char ch){
	printf("Please input the number %c(>1):",ch);
	char a[10];
	int b,is,i;
	while(1){
		is=1;
		scanf("%s",a);
		b=atoi(a);
		for(i=0;i<(int)strlen(a);i++){
			if(a[i]<'1' || a[i]>'9' || b<=1){	
					is=0;
					break;
			}
		}
		if(is==1){
			break;
		}
	printf("The input must be an integer larger than 1!\n");
	printf("Please input the number %c(>1):",ch);
	}
	return b;
}
int IsPrime(unsigned int n){
	int is=1,i;
	for(i=2;i<(int)n;i++){
		if(n%i==0){
			is=0;
			break;
		}
	}
	return is;
}
int PrimeSum(unsigned int m, unsigned int n){
	int ret=0;
	for(;m<=n;m++){
		if(IsPrime(m)==1){
			printf("%d\n",m);
			ret+=m;
		}
	}
	return ret;
}


/*
  用函数编程实现输出 m~n之间所有素数，并求和，m和n由键盘输入。素数是只能被1和自身整除的大于1的正整数。 要求程序能对用户输入的数据进行正确性检查，满足条件：m和n都是大于1的正整数，并且m<=n。
  1. 要求编写函数InputNumber 实现用户输入一个正整数，并对数的合法性进行检查，如果读入不成功(例如：输入字符串)，或者数不合法即不是大于1的正整数，则重新输入，直到输入正确为止。
  函数原型：
  unsigned int InputNumber(char ch);
  形式参数：ch，用于生成输入提示信息。
  返回值：返回正确的输入值。
  输入提示信息：printf("Please input the number %c(>1):",ch);
  输入格式："%d"
  输入错误提示信息："The input must be an integer larger than 1!\n"
  提示：测试scanf的返回值来判断是否成功读入数据。
  2. 要求编写函数IsPrime判断自然数x是否为素数，如果x是素数则返回1，不是素数返回0。
  函数原型：
  int IsPrime(unsigned int n); 
  返回值：如果x是素数则返回1，不是素数返回0。
  
  3. 要求编写函数PrimeSum 输出m到n之间所有素数并返回它们的和。
  函数原型：
  int PrimeSum(unsigned int m, unsigned int n);
  返回值：m到n之间所有素数的和。
  每个素数的输出格式："%d\n"
  
  主函数定义如下：
  int main()
  {
  int m = 0,n = 0,sum = 0,i = 0;
  do
  {
  m = InputNumber('m');  //实参‘ｍ’只在输入提示时使用
  n = InputNumber('n');
  }while(m > n && printf("n must be not smaller than m! Input again!\n"));   //保证m<=n
  sum = PrimeSum(m,n);
  printf("sum of prime numbers:%d",sum);
  return 0;
  }
  运行实例：
  Please input the number m(>1):abc
  The input must be an integer larger than 1!
  Please input the number m(>1):-34
  The input must be an integer larger than 1!
  Please input the number m(>1):56
  Please input the number n(>1):23
  n must be not smaller than m! Input again!
  Please input the number m(>1):23
  Please input the number n(>1):57
  23
  29
  31
  37
  41
  43
  47
  53
  sum of prime numbers:304
  Process returned 0 (0x0)   execution time : 30.690 s
  Press any key to continue.
  
 */
