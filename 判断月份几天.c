#include<stdio.h>


int main(){
 int a,b,is;
 printf("Please Input the Date:");
 if( scanf("%d-%d",&a,&b)!=2){
	 printf("Input error!\n");
	 goto out;
	 
 }

 if(a%4==0 && a%100!=0){//闰年
	 is=1;
 }else{
	 is=0;
 }
 switch (b) {
 case 1:
	 printf("%d days",31);
	 break;
 case 2:
	 if(is==1){
		 printf("%d days",29);
	 }else{printf("%d days",28);}
	 break;
 case 3:
	 printf("%d days",31);
	 break;
 case 4:
	 printf("%d days",30);
	 break;
	 case 5:
		 printf("%d days",31);
		 break;
 case 6:
	 printf("%d days",30);
	 break;
	 case 7:
		printf("%d days",31);
		 break;
 case 8:
	 printf("%d days",31);
	 break;
	 case 9:
		 printf("%d days",30);
		 break;
 case 10:
	printf("%d days",31);
	 break;
	 case 11:
		 printf("%d days",30);
		 break;
 case 12:
	printf("%d days",31);
	 break;
 default:
	 printf("Input error!\n");
	 break;
 }
 
 
 
 
 out:
	return 0;
}
