#include<stdio.h>
int aaa(int ret,int i2);
int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};

int main(){	
	aaa(0,0);
	return 0;
}

int aaa(int ret ,int i2){
	int i;
	ret+=1;
	for(i=0;i<3;i++){
	if(ret>=4){
		return 0;
	}
	printf("%d\n",b[i][i2]);
	aaa(ret,i2+1);
	
	
	}
	
	
	
	
}
