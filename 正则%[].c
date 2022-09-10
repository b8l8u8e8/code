#include<stdio.h>

//%x 16进制 %o 8进制 %[a-z]  %[1-5]  %[ahj]  %[^b] %*d
int main(){
	char a[100];
	sscanf("abhjk 1325njb","%*s %[1-3]",a);
	printf("%s",a);
	
	return 0;
}
