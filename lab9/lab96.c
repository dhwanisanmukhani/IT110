#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void print_help(){
	printf("\nHELP for (singly) linked list:\n");
	printf("0 -> print help\n");
	printf("1 -> insert at beginning\n");
	printf("2 -> insert at middle\n");
	printf("3 -> insert at end\n");
	printf("4 -> print list\n");
	printf("5 -> exit\n");
}
struct Node{
	int data;
	struct Node* next;
};
void init_node(struct Node* node, int _data){
	assert(node != NULL);
	node->data = _data;
	node->next = NULL;
}
struct LinkedList{
	struct Node* root;
	int sz;
};
void init_linked_list(struct LinkedList* list){
	assert(list != NULL);
	list->root = NULL;
	list->sz=0;
}
void print_linked_list(struct LinkedList* list){
	struct Node* node = list->root;
	int i=1;
	while(node){
		printf("pos %d -> %d\n", i, node->data);
		i++;
		node = node->next;
	}
	printf("DONE!!\n\n");
}
void insert_linked_list(struct LinkedList* list, int pos){
	// Node can be inserted from position 0 - sz
	// pos 0 => insert at beggining
	// pos i => insert after node i ( 1 <= i <= sz-1)
	// pos sz => insert at end
	assert(pos>=0 && pos<=list->sz);

	// Creating new node
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	int data;
	printf("Enter data: ");
	scanf(" %d",&data);
	init_node(new_node, data);

	// Inserting
	if(pos==0){
		new_node->next = list->root;
		list->root = new_node;
	}
	else{
		struct Node* node = list->root;
		int i=1;
		while(i<pos){
			node = node->next;
			i++;
		}
		new_node->next = node->next;
		node->next = new_node;
	}
	list->sz++;

	printf("DONE!!\n\n");
}
int main(){
	struct LinkedList list;
	init_linked_list(&list);

	print_help();
	while(1){
		int choice;
		printf("Enter choice: ");
		scanf(" %d",&choice);
		switch(choice){
			case 0:{
				print_help();
				break;
			}
			case 1:{
				insert_linked_list(&list, 0);
				break;
			}			
			case 2:{
				int pos;
				printf("Enter position: ");
				scanf(" %d", &pos);
				insert_linked_list(&list, pos);
				break;
			}
			case 3:{
				insert_linked_list(&list, list.sz);
				break;
			}
			case 4:{
				print_linked_list(&list);
				break;
			}
			case 5:{
				return 0;
			}
			default:{
				printf("Invalid choice\n");
				break;
			}
		}
	}
}
