
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
}
*p,*newnode,*head=NULL,*t;

void create()
{
    int i,n,ele;
    printf("Enter the number of elements to be created : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the element : ");
        scanf("%d",&ele);
        newnode->data = ele;
        newnode->next = NULL;
        if(head==NULL)
        {
            head=newnode;
            p=newnode;

        }
        else
        {
            for(p=head; p->next!= NULL; p=p->next);
            p->next=newnode;
            p=newnode;
        }
    }
}
void insert_b()
{
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = a;
    newnode->next = head;
    head = newnode;
}
void insert_e()
{
     newnode = (struct node*)malloc(sizeof(struct node));
     int a;
     printf("Enter the value");
     scanf("%d",&a);
     newnode->data = a;
     newnode->next = NULL;
     //struct node *t = head;
     while(t->next != NULL)
     {
            t = t->next;
     }
     t->next = newnode;
}
void insert_any()
{
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    int a,i,pos;
    printf("Enter the value and pos");
    scanf("%d%d",&a,&pos);
    newnode->data = a;
    struct node *t = head;
    for(int i=2; i < pos; i++) {
      if(t->next != NULL) {
        t = t->next;
      }
    }
    newnode->next = t->next;
    t->next = newnode;
}
void delete_b()
{
    int ele;
    p=head;
    head=p->next;
    ele=p->data;
    free(p);
    printf("The deleted element = %d",ele);
}
void delete_e()
{
   // struct node* t = head;
    int ele;
    for(p=head;p->next!=NULL;p=p->next)
        t=p;
    t->next=NULL;
    ele=p->data;
    free(p);
    printf("The deleted element = %d",ele);
}
void delete_any()
{
    int pos,i,ele;
    printf("\nEnter the Position: ");
    scanf("%d",&pos);

    for(p=head,i=1; i<pos; p=p->next,i++)
        t=p;
    t->next=p->next;
    ele=p->data;
    free(p);
    printf("\nThe deleted element is ->:%d ",ele);
}
void display()
{
    if(head==NULL)
        printf("SLL is Empty");
    else
        for(p=head; p!=NULL; p=p->next)
            printf("%d -> ",p->data);
}

int main()
{
    int ch;
    do
    {
    printf("\n 1.Create\n 2.Insert at Begin\n 3.Insert at End\n 4.Insert at Any\n 5.Display\n 6.Delete at Begin\n 7.Delete at End\n 8.Delete at Any Position\n 9.Exit\n");
    printf("Enter the Choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            create();
            break;
        case 2:
            insert_b();
            break;
        case 3:
            insert_e();
            break;
        case 4:
            insert_any();
            break;
        case 5:
            display();
            break;
        case 6:
            delete_b();
            break;
        case 7:
            delete_e();
            break;
        case 8:
            delete_any();
            break;
        case 9:
            exit(0);
        default:
            printf("\n WRONG INPUT!!");
    }
    } while(ch>=1 && ch<=9);
}
