#include <stdio.h>
#include <stdlib.h>


int main(){
  struct node{
    int data;
    struct node*next;
  };
  int i=0,min,max;
struct node *head,*newnode,*temp;
head=0;
while(i<6){
  newnode=(struct node *) malloc(sizeof(struct node));
  scanf("%d",&newnode->data);
  newnode->next=0;
  if(head==0){
    head=temp=newnode;
  }
  else{
    temp->next=newnode;
    temp=newnode;
  }
  i++;
}
temp=head;
min=max=temp->data;
while(temp!=0){

  if(temp->data<min){
    min= temp->data;
  }
  if(temp->data>max){
    max=temp->data;
  }
  temp=temp->next;
  
}
printf("The smallest element from the list is %d\n",min);
printf("The biggest element from the list is %d",max);
}