#include<stdio.h>
struct date{
	int year,month,day;
};
struct date today;


int main(){
	today.year=2022;
	today.month=8;
	today.day=24;
	printf("现在是%d年%d月%d日",today.year,today.month,today.day);
	
	return 0;
}