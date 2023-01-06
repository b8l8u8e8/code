
#include<stdio.h>

int array[9];       
int OK(int m,int *array);
int main()
{
	int m;
	int count=1;
	for(m=123;m<333;m++)
	{
		if(OK(m,array)&&OK(2*m,array+3)&&OK(3*m,array+6))  
		{
			printf("%d,%d,%d\n",m,2*m,3*m);
			count++;
		}
	}
	return 0;
}

int OK(int number,int *curPtr)     
{
	int *i,*j;
	for(i=curPtr;i<curPtr+3;i++)
	{
		*i=number%10;    
		number/=10;
		if((*i)==0)return 0;   
		for(j=array;j<i;j++)
		{
			if((*i)==(*j))return 0;  
		}
	}
	return 1;
}
//将1到9这九个数字分成三个3位数，要求第一个3位数，正好是第二个3位数的1/2，是第三个3位数的1/3。问应当怎样分。
//**输出格式要求："%d,%d,%d\n"
//
//程序运行示例如下：
//***,384,576
//219,438,***
//273,***,819
//327,654,***
//（部分具体数值用***代替）
