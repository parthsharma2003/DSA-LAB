#include<stdio.h>
#include<stdlib.h>
int a[20];
int n,val,i,pos;

void create();
void display();
void insert();
void delete();

int main()
{
    int choice;
    while(1)
    {
        printf("\n\n***********MENU*********\n");
        printf("1.CREATE\n");
        printf("2.DISPLAY\n");
        printf("3.INSERT\n");
        printf("4.DELETE\n");
        printf("5.EXIT\n");
        printf("*******************************\n");
        printf("\n ENTER YOUR CHOICE: \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                   create();
                   break;
            case 2:
                   display();
                   break;
            case 3:
                   insert();
                   break;
            case 4:
                   delete();
                   break;
            case 5:
                   exit(0);
            default: 
                    printf("\nINVALID POSITION\n");
                    break;
        }
    }
    return 0;
}
void create()
 {
    printf("\nENTER THE SIZE OF THE ARRAY ELEMENTS:\t");
    scanf(" %d ",&n);
    printf("\nENTER THE ELEMENTS OF THE ARRAY:\n");
    for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]);
      }
 }
 
 void display()
 {
     int i;
     printf("\nTHE ARRAY ELEMENTS ARE:\n");
     for(i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
     }
 }
void insert()
{
    printf("\nENTER THE POSITON OF THE NEW ELEMENT:\t");
    scanf("%d",&pos);
    printf("\nENTER THE ELEMENT TO BE INSERTED:\t");
    scanf("%d",&val);
    if(pos>=n||pos<0)
        printf("INVALID POSITION\n");
    else
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    n=n+1;
}

void delete()
{
    printf("\nENTER THE POSITION OF THE ELEMENT TO BE DELETED:\t");
    scanf("%d",&pos);
    if(pos>=n||pos<0)
       printf("INVALID POSITION");
    else
    val=a[pos];
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("\nTHE DELETED ELEMENT IS = %d",val);
}










