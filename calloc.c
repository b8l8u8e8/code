#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *p;
	p=(char *)calloc(2,3);
	if(p==NULL){
		printf("申请出错");
	}else{
	 strcpy(p,"abcde");
		printf("%s",p);
		free(p);
		p=NULL;	
	}
	
	
	
	return 0;
}
