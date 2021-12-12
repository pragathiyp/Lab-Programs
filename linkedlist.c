
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node * head=NULL;

void traverse()
{
    struct node *temp = head;
    if (temp == NULL)
    {
        printf("\nEmpty list");
    }
    while (temp != NULL)
    {
        printf("%d \t",temp->data);
        temp = temp->next;
    }
}
 void add()
 {
     int a;
     printf("Enter the element to be inserted");
     scanf("%d",&a);
     struct node * new =(struct node *)malloc(sizeof(struct node));
     new -> data =a;
     new -> next = head;
     head = new;
 }
 void search()
 {
     printf("\nNothing\n");
     return;
 }
     
 
 void delete_end(){
   struct node *prev, *cur=head;
   if(head==NULL)
   printf("empty list");
   else if(head->next==NULL)
   {
       free(head);
       head=NULL;
   }
   else{
       while(cur->next!=NULL)
       {
           prev=cur;
           cur=cur->next;

       }
       free(cur);
       prev->next=NULL;
      }
 }

void insert_end()
{
    int m;
     printf("Enter the element to be inserted at the end \n");
     scanf("%d",&m);
    struct node *newNode, *cur=head;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=m;
    newNode->next=NULL;
    if(cur==NULL)
    {
        head=newNode;

    }
    else{
        while (cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=newNode;       
    }
}
void delete_begin()
{
    struct node*temp=head;
    if(head==NULL)
    {
        printf("empty list hence deletion cannot be performed\n");
        return;
    }
    else{
        head=head->next;
        free(temp);
    }
}

void insert_sort(){
    int s;
     printf("Enter the element to be inserted at the end \n");
     scanf("%d",&s);
    struct node *newNode, *cur=head;
    if(head==NULL)
    {
        head=newNode;
        head->next=NULL;

    }
}


 
int main()
{
    int n;
    while(1){
    
    printf("Enter 1 for traversal\n 2 for insertion at the beginning\n 3 for search \n 4 for insertion at the end \n 5 for deletion at the beginning \n 6 for deletion at the end \n 7 for inserting in sorted list \n -1 to exit\n"); 
    
    scanf("%d", &n);
    switch(n)
    {
        case 1:
        traverse();
        break;
        
        case 2:
        add();
        
        break;
        
        case 3:
        search();
        break;
        
        case 4:
         insert_end();
        break;

        case 5:
        delete_begin();
        break;

        case 6:
        delete_end();
        break;

        case 7:
        insert_sort();
        break;
        
        default:
        printf("Invalid choice");
        break;
        
    }
    }
    
    

    return 0;
}