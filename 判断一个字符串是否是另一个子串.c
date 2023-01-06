#include<stdio.h>
#include<string.h>
int zc(int lena,int lenb,char *a,char *b){
	int cnt=0,is=0;
	for(int i=0;i<lena;i++){
		if(a[i]==b[cnt]){
			cnt++;
			if(cnt==lenb){
				is=1;
				break;
			}
		}else{
			if(cnt!=0){
				i--;
			}
			cnt=0;
		}
	}
	return is;
}
int main(){
	char a[100],b[100];
	printf("Please input the first str:");
	scanf("%s",a);
	printf("Please input the second str:");
	scanf("%s",b);
	int lena=strlen(a),lenb=strlen(b);
	if(zc(lena,lenb,a,b)==1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
}
