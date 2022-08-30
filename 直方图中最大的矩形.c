#include<stdio.h>
#include<string.h>
int max(int a[],int len);

int main(){
	int num3=1,num;

       while(1){
		
	       scanf("%d",&num);
	        if(num==0) break;
		   int num2=num;
		   int a[num],i,i2,i4=0,min,i5;
		   for(i=0;i<num;i++){
			   scanf("%d",&a[i]);
		   }
		   for(num3=0;num2>1;num2--){
			   num3+=(num2-1);
		   }
		   //if(num==1) num3=1;
		   int b[num3];
		   for(i=0;i<num-1;i++){
			   i5=0;
			   for(i2=i;i2<num-1;i2++){
				   if(i2==i){
					   if(a[i2]<a[i2+1]) min=a[i2];
					   else min=a[i2+1];
					   b[i4]=2*min;
				   } //b[i4]*=a[i2]*a[i2+1];
				   else{
					   if(min>a[i2+1]) {min=a[i2+1]; }                                                    
					   b[i4]=(i5+2)*min;
				   } 
				   i5++;	
				   i4++;	
			   }
		   }
		   printf("%d",max(b,num3));
	}	
			
	

	return 0;
	
}

int max(int a[],int len)
{
	int maxid=0,i;
	for(i=1;i<len;i++){
		if(a[i]>a[maxid]){
			maxid=i;
		}
	}
	
	return a[maxid];
}

/*
  https://vjudge.csgrandeur.cn/contest/512622#problem/D
 */
