#include <stdio.h>
int maxid(double *a,int n);
int main(){
	int n,t=50,t2=0;
	double money=0;
	scanf("%d %d",&n,&t);
	int a[100],b[100];
	double c[100];
	for(int i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
		c[i]=(float)b[i]/a[i];
	}
	for(int i=0;i<n;i++){
		t2+=a[maxid(c,n)];
		if(t2<=t){
			money+=b[maxid(c,n)];
			c[maxid(c,n)]=0;	
		}else{
			t2-=a[maxid(c,n)];	
			money+=(double)b[maxid(c,n)]/a[maxid(c,n)]*(t-t2);
			break;
		}
	}
	
	
	
	printf("%.2f",money);
	
	
	
}
int maxid(double *a,int n){
	int max=0;
	for(int i=1;i<n;i++){
		if(a[max]<a[i]){
			max=i;
			//TODO
		}
	}
	return max;
}
