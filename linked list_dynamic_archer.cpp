#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next; //不可用 node *next 
};
typedef struct node Node;

int main(int argc, char *argv[])
{
	int i,num;
	Node *first, *current, *previous; // 資料型態 *變數 
	printf("Input the number of nodes:");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		current=(Node *) malloc(sizeof(Node));
		printf("Input the %d data: ",i+1);
		scanf("%d",&(current->data));
		if(i==0){//記得if裡面是"==" 
			first=current;
		}
		else{
			previous->next=current;//把上一個節點的指標指向現在的節點 
		}
		current->next=NULL; 
		previous=current; 
	}
	current=first;
	while(current->next!=NULL){
		printf("the address of the node=%p ",current);
		printf("the data of the node=%d ",current->data);
		printf("the address of the next node=%p \n",current->next);
		current=current->next;
	}
	
	system("pause");
	return 0;
}
