#include<stdio.h>
#define max 5
int a[max], top=-1;
void push();
void pop();
void display();

int main()
{
    int choice;
    
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");

    while(choice!=4)
    {
        printf("Enter Choice  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    push();
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    printf("Thank You\n");
                    break;
            default:
                    printf("Enter Valid Choice\n");
        }
    }
}
void push()
{
    int data;
    if(top==max-1)
    {
        printf("Stack Is Overflow\n");
    }
    else
    {
        printf("Push Element: \n");
        scanf("%d",&data);
        top++;
        a[top]=data;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Is Empty\n");
    }
    else
    {
        printf("Poped Element: %d \n",a[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        printf("Elements :  \n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    }
}
