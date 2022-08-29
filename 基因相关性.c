#include<stdio.h>
#include<string.h>

int main(){
	double a;
	int i,i2=0;
	char b[500],c[500];
 scanf("%lf",&a);
 scanf("%s",b);
 scanf("%s",c);
 for(i=0;i<(int)strlen(b);i++){
	 if(b[i]==c[i]){
		 i2++;
	 }
 }
 if(i2*1.00/(int)strlen(b)>=a){
	 printf("yes");
 }else printf("no");


	return 0;

}
/*
  https://vjudge.csgrandeur.cn/contest/512622#problem/C
  为了获知基因序列在功能和结构上的相似性，经常需要将几条不同序列的 \text{DNA}DNA 进行比对，以判断该比对的 \text{DNA}DNA 是否具有相关性。
  
  现比对两条长度相同的 \text{DNA}DNA 序列。首先定义两条 \text{DNA}DNA 序列相同位置的碱基为一个碱基对，如果一个碱基对中的两个碱基相同的话，则称为相同碱基对。接着计算相同碱基对占总碱基对数量的比例，如果该比例大于等于给定阈值时则判定该两条 \text{DNA}DNA 序列是相关的，否则不相关。
  
  输入格式
  有三行。第一行为一个 [0,1][0,1] 范围内实数，表示用来判定出两条 \text{DNA}DNA 序列是否相关的阈值，随后 22 行是两条 \text{DNA}DNA 序列（长度不大于 500500）。
  
  输出格式
  若两条 \text{DNA}DNA 序列相关，则输出"yes"，否则输出"no"。
 */
