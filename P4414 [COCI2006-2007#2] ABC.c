#include<stdio.h>
int max(int *p,int length);
void sort(int *p,int length);

int main(){
	
	  int a[3],i;
	  for(i=0;i<3;i++){
	  scanf("%d",&a[i]);	
	  }
	  char b[3];
	  getchar();
	  for(i=0;i<3;i++){
	  scanf("%c",&b[i]);
	  }
	 sort(a,3);
	 
	   
	   for(i=0;i<3;i++){
	   printf("%d",a[b[i]-'A']);
	   if(i!=2){
	   printf(" ");
	   }
	   }
	  
	 /*
	  for(i=0;i<3;i++){
		  switch (b[i]) {
		  case 'A':
			  printf("%d ",a[0]);
			  break;
		  case 'B':
			  printf("%d ",a[1]);
			  break;
		  case 'C':
			  printf("%d ",a[2]);
			  break;
		  }
	  }
	   */
	  
	 
	
	return 0;
}

int max(int *p,int length){
	int i,id=0;
	for(i=1;i<length;i++){
		if(p[id]<p[i]){
			id=i;
		}
	}
	return id;
}
void sort(int *p,int length){
	int i,tmp;
	for(i=length;i>1;i--){
		tmp=p[max(p,i)];
		p[max(p,i)]=p[i-1];
		p[i-1]=tmp;
	}
	
}
/*https://www.luogu.com.cn/problem/P4414*/
