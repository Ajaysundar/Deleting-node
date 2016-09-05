#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node*next;
};
struct Node*head;
void Insert( int x)
{
struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->next=NULL;
if(head!=NULL)
temp->next=head;
head=temp;
}
void delete(int d)
{
struct Node*temp1=head;
if(d==1)
{
head=temp1->next;
free(temp1);
return;
}
int i;
for(i=0;i<d-2;i++)
{
temp1=temp1->next;
struct Node*temp2=temp1->next;
temp1->next=temp2->next;
free(temp2);
}
}
void Print()
{
struct Node*temp=head;
printf("list is: ");
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
printf("\n");
}
int main()
{
head=NULL;
int d;
Insert(4);
Insert(2);
Insert(1);
Insert(3);
Print();
printf("enter the position to be deleted");
scanf("%d",&d);
delete(d);
Print();
return(0);
}
