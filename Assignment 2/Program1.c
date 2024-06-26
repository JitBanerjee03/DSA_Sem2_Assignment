#include<stdio.h>
#include "Functions1.c"

int main(){
    int choice,n,n1,n2;
    List *head,*head1,*head2,*head3;
    printf("\nEnter the number of nodes of the linked list : ");
    scanf("%d",&n);
    head=createList(n);
    do{
       
       system("clear");
       printf("\n_ _ _ _ _ _MENU_ _ _ _ _ _\n");
       printf("\n1) Print the content of the list");
       printf("\n2) Insert an element at the front of the list");
       printf("\n3) Insert an element at the end of the list");
       printf("\n4) Insert a node after the kth node.");
       printf("\n5) Insert a node after the node (first from the start) containing a given value");
       printf("\n6) Insert a node before the kth node");
       printf("\n7) Insert a node before the node (first from the start) containing a given value");
       printf("\n8) Delete the first node");
       printf("\n9) Delete the last node");
       printf("\n10) Delete a node after the kth node");
       printf("\n11) Delete a node before the kth node");
       printf("\n12) Delete the kth node");
       printf("\n13) Delete the node(first from the start) containing a specified value");
       printf("\n14) Reverse the linked list(not just printing in reverse)");
       printf("\n15) Sort the list");
       printf("\n16) Search a given element");
       printf("\n17) Merge two lists; those are in ascending order");
       printf("\n18) Concatenate two list");
       printf("\n19) Find if two lists are equal(Boolean output)\n");
       printf("\nenter your choice : ");
       scanf("%d",&choice);

       switch(choice){
         case 1: printf("\nContent of the linked list : ");
                 displayList(head);
                 break;

         case 2: head=insertFront(head);
                 break;

         case 3: head=insertEnd(head);
                 break;

         case 4: head=insetAfterK(head);
                 break;

         case 5: head=insertAfterGivenValue(head);
                 break;

         case 6: head=insertBeforeK(head);
                 break;

         case 7: head=insertBeforeGivenNode(head);
                 break;

         case 8: head=deleteFront(head);
                 break;

         case 9: head=deleteLast(head);
                 break;

         case 10: head=deleteAfterK(head);
                  break;

         case 11: head=deleteBeforeK(head);
                  break;

         case 12: head=deleteKNode(head);
                  break;

         case 13: head=deleteNodeGivenValue(head);
                  break;

         case 14: head=reverse(head);
                  break;

         case 15: head=mergeSort(head);
                  break;

         case 16: searchElement(head);
                  break;

         case 17: printf("\nEnter the number of nodes of the linked list 1 : ");
                  scanf("%d",&n1); 
                  printf("\nEnter the number of nodes of the linked list 2 : ");
                  scanf("%d",&n2); 
                  head1=createList(n1);
                  head1=mergeSort(head1);
                  displayList(head1);
                  printf("\n");
                  head2=createList(n2);
                  head2=mergeSort(head2);
                  displayList(head2);
                  printf("\n");
                  head3=Merge(head1,head2); 
                  displayList(head3);
                  break;

         case 18: printf("\nEnter the number of nodes of the linked list 1 : ");
                  scanf("%d",&n1); 
                  printf("\nEnter the number of nodes of the linked list 2 : ");
                  scanf("%d",&n2); 
                  head1=createList(n1);
                  displayList(head1);
                  printf("\n");
                  head2=createList(n2);
                  displayList(head2);
                  printf("\n");
                  head3=concatinate(head1,head2);
                  displayList(head3);
                  break;

         case 19: printf("\nEnter the number of nodes of the linked list 1 : ");
                  scanf("%d",&n1); 
                  printf("\nEnter the number of nodes of the linked list 2 : ");
                  scanf("%d",&n2); 
                  head1=createList(n1);
                  displayList(head1);
                  printf("\n");
                  head2=createList(n2);
                  displayList(head2);
                  printf("\n");
                  if(checkEqual(head1,n1,head2,n2))
                  printf("\nThe given two linked lists are equal");
                  else
                  printf("\nThe given two linked lists are not equal");
                  break;

         default: printf("\nInvalid Input!");
                  break;
       }
       printf("\nPress 1 to continue and any other key to exit :");
       scanf("%d",&choice);
    }while(choice==1);
}