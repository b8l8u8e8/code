#include<stdio.h>

int main(){
	FILE *fp=fopen("1.txt","r");
	if(fp){
		int a;
		fscanf(fp,"%*d %d",&a);
		printf("%+-04d",a);
		fclose(fp);
	}else printf("�޷����ļ�");
	
	return 0;
}