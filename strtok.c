#include<stdio.h>
#include<string.h>

int main(){
	char a[30]="|测试.拉:lad[ok]";
	char *p[5];
	int i=-1;
	do{
		i++;
		if(i==0){
			p[i]=strtok(a,"|.:[]");
			printf("%p\n",p[i]);
		}else{p[i]=strtok(NULL,"|.:[]");
		printf("%p\n",p[i]);
		}
		
	}while(p[i]!=NULL);
	for(i=0;i<5;i++){
		printf("%s\n",p[i]);
	}
	
	
	return 0;
}
