
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list {
int data;
struct list *next;
};

struct list *temp,*ptr,*start,*preptr;

void addbeg();
void addlast();
void display();
void addloc();
void del();
void main()
{
char ch='y';
int choice;
start=NULL;
clrscr();
do{
	clrscr();
	printf("\n 1  Add Begning");
	printf("\n 2. Add at last");
	printf("\n 3. Display");
	printf("\n 4. Add Location");
	printf("\n 5. Delete Node");
	printf("\n 6. Exit");
	printf("\n Enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{   	   	case 1: addbeg();
				break;
			case 2: addlast();
				break;
			case 3: display();
				break;
			case 4: addloc();		break;
			case 5:   del ();
			break;
			case 6: break;
			default :
			printf ("\n Wrong choice");
		  }// end of switch
    fflush(stdin);
	  printf("\n do you want continue....");
	  scanf("%c",&ch);
	 }while (ch=='y');// end of while
   }// end of main

void addlast()
{
temp=malloc(sizeof(struct list));

if(start==NULL)
	{
	printf ("\n Enter the data ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	start=temp;
	}
else
	{
	ptr=start;
	while (ptr->next!=NULL)
		{
		ptr=ptr->next;
		}
	     printf ("\n Enter the data ");
	    scanf("%d",&temp->data);
	    temp->next=NULL;    // or   temp->next=ptr->next;
	     ptr->next=temp;
	     }
}

void display()
{
 ptr=start;
 while (ptr!=NULL)
	{
	printf("\n %d",ptr->data);
	ptr=ptr->next;
	}
   }
 void addbeg()
 {
 temp=malloc(sizeof(struct list));
  printf ("\n Enter the data ");
  scanf("%d",&temp->data);
  temp->next=start;
  start=temp;
  }

void addloc()
{         int loc,i;
printf("\n Eneter the location");
scanf("%d",&loc);
ptr=start;
for(i=1;i<loc;i++)
{
ptr=ptr->next;
if(ptr==NULL)
{
printf("\nthere are less %d Element in list",loc);
}// End if
}//End for
temp=malloc(sizeof (struct list));
printf("\n Enter the no");
scanf("%d",&temp->data);
temp->next=ptr->next;
ptr->next=temp;
}// end of function


void del()
{
	int num;
	printf("\n Enter the no for deletion");
	scanf("%d",&num);
	ptr=start;

while(ptr!=NULL)
{
   if(ptr->data==num)
    {
      if(ptr==start)
	start=ptr->next;  //if node is first for deletion

     else
	preptr->next=ptr->next; // if node is middle for deletion

	free(ptr);
	printf("\nElement is deleted");
     }//if close
else                    //traverse the list till last node
   {
     preptr=ptr;
     ptr=ptr->next;
   } // else close
}// while close
}// function close
