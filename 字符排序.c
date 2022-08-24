

void zfpx(char a[],int len)
{
	int i=0,i2;
	for(i2=len-1;i2>0;i2--){
		int k=0;
		
			 for(i=1;i<i2+1;i++){
	     	if(a[k]<a[i]){
			k=i;
			//printf("%d",i);
	    	}
	    }
	    int t;
	    t=a[k];
	    a[k]=a[i2];
	    a[i2]=t;
	//swap(a[k],a[i2]);
		//printf("%c %c",a[k],a[i2]);
   }
    
}
