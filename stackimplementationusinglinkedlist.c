#include<stdio.h>
//...............................................................
struct node{
       int data;
       struct node *next;
        };
struct node*top=0;
//..................................................................
void push(){
    int x;
    printf("enter the element to push\n");
    scanf("%d",&x);
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
//.........................................................................
void pop(){
    struct node *ptr;
    ptr=top;
    if(top==0)
        printf("stack is empty\n");
    else
    {top=top->next;
     free(ptr);
    }
}
//............................................
void peek(){
    if(top==0)
        printf("stack is empty\n");
    else
    {printf("%d",top->data);
    }
}
//..............................................
void display()
{if(top==0)
        printf("stack is empty\n");
    else
    {struct node*temp;
    temp=top;
    while(temp!=0)
       {
        printf("%d\n",temp->data);
        temp=temp->next;
       }
    }
}
//.........................................................
void main(){
    int ch;

    do{
        printf("enter choice");
    scanf("%d",&ch);
        switch(ch){
        case 1:
            {push();
            break;}
        case 2:
           {pop();
            break;}
        case 3:
           {peek();
            break;}
        case 4:
            {display();
            break;}
        default :
            {printf("invalid choice \n");
            }
        }
    }while(ch!=0);

}







