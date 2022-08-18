#include<stdio.h>
int main(){
	int sz,cnt=0;
	scanf("%d",&sz);
	if(sz<0){
		sz=-sz;
	}
	while (sz>0){
		sz/=10;
		cnt++;
	}
	printf("%d¸öÊý\n",cnt);
		//printf("%d",pow(10,4));
	return 0;
		
}