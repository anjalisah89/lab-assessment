void del()//Function for deletion of a node
{
  int num;
  printf("\n Enter the no for deletion");
  scanf("%d",&num);//Inputting the number to be deleted
  ptr=start;//We set ptr to start as if we do operations on start we will loose the nodes as we move forward

while(ptr!=NULL)//we put this condition to check till the end of the list as the end will be NULL
{
   if(ptr->data==num) //this if compares  ptr data and the number to be deleted. If true then it goes to next step and if false then it goes to the last else
    {
      if(ptr==start)//this checks if the first element in the list is the number
  start=ptr->next; //it moves start one step ahead and the first node is deleted

     else              // if node is in middle for deletion
  preptr->next=ptr->next; // this makes the preptr node one step ahead of ptr node thus skipping one node

  free(ptr);     // This deletes the ptr node
  printf("\nElement is deleted");
     }//if close
else                   //Bottom 2 steps traverse the list till last node
   {
     preptr=ptr;
     ptr=ptr->next;   // this way ptr will always be one step ahead of preptr
   } // else close
}// while close
}// function close