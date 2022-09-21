#include <stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int i,i2;
	char a[8][20];
	for(i=0;i<8;i++){
		scanf("%s",a[i]);
	}
	int min=0;
	for(i2=0;i2<8;i2++){
		for(i=0;i<8;i++){
			if(strcmp(a[min],a[i])>0){
				min=i;
			}		
		}
		if(i==7){
			printf("%s",a[min]);
		}else{
			printf("%s ",a[min]);
		}
		
		a[min][0]=123;
	}
	
	
	
	
	
	
	
	
}

