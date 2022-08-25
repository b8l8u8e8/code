#include<stdio.h>
struct student {
	char name;
	int height;
	int math;
};
struct classroom{
	struct student information;
	struct student homework;
};

struct classroom stu[2];




int main(){
	stu[0].information.height=170;
	stu[1].homework.math=2;
	printf("%d %d",stu[0].information.height,stu[1].homework.math);
	return 0;
}

