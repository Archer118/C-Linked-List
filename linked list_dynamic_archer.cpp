#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next; //���i�� node *next 
};
typedef struct node Node;

int main(int argc, char *argv[])
{
	int i,num;
	Node *first, *current, *previous; // ��ƫ��A *�ܼ� 
	printf("Input the number of nodes:");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		current=(Node *) malloc(sizeof(Node));
		printf("Input the %d data: ",i+1);
		scanf("%d",&(current->data));
		if(i==0){//�O�oif�̭��O"==" 
			first=current;
		}
		else{
			previous->next=current;//��W�@�Ӹ`�I�����Ы��V�{�b���`�I 
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
