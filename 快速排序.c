#include<stdio.h>
#include<stdlib.h>
int partition(int array[],int i,int j){
	int temp=array[i];
	while(i<j){
		while(i<j&& array[j]>=temp){
			j--;
		}
		if(i<j){
			array[i]=array[j];
			i++;
		}
		while(i<j&&array[i]<temp){
			i++;
		}
		if(i<j){
			array[j]=array[i];
			j--;
		}
	}
	array[i]=temp;
	return i;
}
void quicksort(int array[],int i,int j){
	if(i<j){
		int index=partition(array,i,j);
		quicksort(array,i,index-1);
		quicksort(array,index+1,j);
	}
	
}
int main(){
	int a[5]={1,3,5,2,6};
	quicksort(a,0,4);
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
