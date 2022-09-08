#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *p;
	p=(char *)malloc(sizeof(char)*6);
	if(p==NULL){
		printf("申请出错");
	}else{
		strcpy(p,"abcde");
		printf("%s\n",p);
	  p=realloc(p,0);
		printf("%s\n",p);
	}
	free(p);
	p=NULL;
	
	return 0;
}
