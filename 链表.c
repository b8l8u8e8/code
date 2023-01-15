#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
	int value;
	struct node* next;
}node;
node *list_create(){
	node *list=(node*)malloc(sizeof(node));
	if(list==NULL){
		return NULL;
	}
	list->value=0;
	list->next=NULL;
	return list;
}
node *list_createarray(int a[],int n){
	node *list=list_create();
	node *p=list;
	for(int i=0;i<n;i++){		
		node *temp=list_create();
		list->value++;
		temp->value=a[i];
		p->next=temp;
		p=p->next;
	}
	p->next=NULL;
	return list;
}
int list_getnum(node*list){
	return list->value;
}
void list_visit(node *list){
	if(list==NULL){
		return;
	}
	
	for(node *p=list->next;p!=NULL;p=p->next){
		printf("%d",p->value);
	}
}
//删除list中第一个包含这个值的结点
bool list_delvalue(node *list,int value){
	if(list==NULL){
		return false;
	}
	node *p;
	bool find=false;
	for(p=list;p->next!=NULL;p=p->next){
		if(p->next->value==value){
			find=true;			
			break;
		}
	}
	if(find==false){
		return false;
	}else{
		node *temp=p->next->next;
		free(p->next);
		p->next=temp;
		list->value--;
		return true;
	}
	
}
bool list_delindex(node *list,int index){
	if(list==NULL || index>=list_getnum(list)){
		return false;
	}
	node *p=list;
	int cnt=0;
	while(p!=NULL&&cnt<index){
		cnt++;
		p=p->next;
	}
	node *temp=p->next;
	p->next=p->next->next;
	free(temp);
	list->value--;
	return true;
}
//清除除头结点外的所有结点，清除完不用继续创建头结点
bool list_clear(node *list){
	if(list->next==NULL){
		return true;
	}else if(list==NULL){
		return false;
	}
	node *p=list;
	p=p->next;
	while(p!=NULL){
		node *temp=p;
		p=p->next;
		free(temp);
		
	}
	list->value=0;
	list->next=NULL;
	return true;
}
bool list_inserthead(node *list,int value){
	if(list==NULL){
		return false;
	}
	node* temp=list_create();
	temp->value=value;
	temp->next=list->next;
	list->next=temp;
	list->value++;
	return true;
}
bool list_inserttail(node *list,int value){
	if(list==NULL){
		return false;
	}
	node*p=list;
	while(p->next!=NULL){
		p=p->next;
	}
	node*temp=list_create();
	temp->value=value;
	temp->next=NULL;
	p->next=temp;
	list->value++;
	return true;
}
bool list_insertindex(node *list,int index,int value){
	if(list==NULL || index>=list->value){
		return false;
	}
	node *p=list;
	int cnt=0;
	while(cnt<index){
		p=p->next;	
		cnt++;
	}
	node*temp=list_create();
	temp->value=value;
	temp->next=p->next;
	p->next=temp;
	list->value++;
	return true;
}
//和数组一样，下标从0开始,get不到返回-1
int list_getvalue(node* list,int index){
	node *p=list;
	int cnt=0;
	while(cnt<=index){
		p=p->next;
		cnt++;
		if(p==NULL){
			break;
		}
	}
	if(p!=NULL){
		return p->value;
	}else{
		return -1;
	}
	
}
int list_valuecount(node* list,int value){
	node*p=list;
	int cnt=0;
	p=p->next;
	while(p!=NULL){
		if(p->value==value){
			cnt++;
		}
		p=p->next;	
	}
	return cnt;
}
int main()
{
node *p=list_create();
list_inserttail(p,5);
list_inserttail(p,2);
list_inserttail(p,6);
list_inserttail(p,3);
list_inserttail(p,9);
list_visit(p);
printf("\n个数:%d\n",list_getnum(p));
list_clear(p);
list_visit(p);
printf("\n3的个数:%d\n",list_valuecount(p,3));

	
}
