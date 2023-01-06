#include <stdio.h>
int max(int *p,int length);
void sort(int *p,int length);

int main(int argc,char *argv[])
{
	int n,i,cnt=1;
	scanf("%d",&n);
	int a[n+1];
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	 sort(a,sizeof(a)/sizeof(a[0])-1);
    for(i=1;i<n+1;i++){
		
		if(a[i-1]==a[i]){
			cnt++;
		}else{
			printf("%d %d",a[i-1],cnt);
			cnt=1;
			if(i!=n){
				printf("\n");
			}
		}
		
	}



}

int max(int *p,int length){
	int id=0,i;
	for(i=1;i<length;i++){
		if(p[id]<p[i]){
			id=i;
		}
	}
	return id;
}
void sort(int *p,int length){
	int i,tmpt;
	for(i=length;i>1;i--){
		tmpt=p[max(p,i)];
		p[max(p,i)]=p[i-1];
		p[i-1]=tmpt;
	}
	
	
}
