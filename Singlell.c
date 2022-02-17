#include<stdio.h>
#include<stdlib.h>

struct node{
  int info;
  struct node *link;
  
};

void display(struct node *ptr)
{
	while(ptr != NULL)
	{
		printf("Elemets are %d\n",ptr->info);
		ptr = ptr->link;
	}
}

struct node *insertatend(struct node *first,int info)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
 	ptr->info = info;
	struct node * p = first;

		while(p->link!=NULL){
				p = p->link;
			}
		p->link=ptr;
		ptr->link=NULL;
	  return first;
 }

struct node *insertatfirst(struct node *first,int info)
{
	 struct node *ptr = (struct node *)malloc(sizeof(struct node));
	 ptr->info= info;
	 ptr->link = first;
	 return ptr;
}

struct node *insertatindex(struct node *first,int info,int index)
{
	 struct node *ptr = (struct node *)malloc(sizeof(struct node));
	 struct node *p=first;
		
		int i=0;
    while(i!=index-1)
				{
					p = p->link;
					i++;
				}
	 ptr->info= info;
	 ptr->link = p->link;
   p->link =ptr;
	 return first;
}  

struct node *insertafternode(struct node *first,struct node *previous,int info)
{
     struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr->info=info;
	ptr->link=previous->link;
	previous->link =ptr;
   	 
 }

void delete(struct Node* first, int val)
{
    struct Node* temp = first;
    struct Node* previous;

    
    if(temp->next==NULL)
    {
        first = NULL;
        free(temp);
        printf("Value %d, deleted \n",val);
        return;
    }
    if(temp!=NULL && temp->data==val)
    {
        first = temp->next;
         
        printf("Value %d, deleted \n",val);
       
        free(temp);
        return;
    }

    
    while (temp != NULL && temp->data != val) 
    { 
       
        previous = temp; 
        temp = temp->next; 
    }

    
    if(temp==NULL)
    {
        printf("Value not found\n");
        return;
    }

    
    previous->next = temp->next;
    free(temp);
    
    
    printf("Value %d, deleted \n",val);
}


void main()
{
struct node *first,*second,*third;
first = (struct node *)malloc(sizeof(struct node));
second = (struct node *)malloc(sizeof(struct node));
third = (struct node *)malloc(sizeof(struct node));

first->info=1;
first->link=second;

second->info=2;
second->link=third;

third->info=3;
third->link=NULL;

display(first);
printf("at first");
//first = insertatfirst(first,56);
//display(first);
//printf("at end");
//first = insertatend(first,60);
//display(first);
printf("in between");
//first = insertatindex(first,56,2);
//display(first);
first=insertafternode(first,third,99);
display(first);

}
