#include<stdio.h>
#include<stdlib.h>
void push(int*s,int*top,int nw,int n)
{
   if(*top>=n-1)
   {
     printf("overflow");
     exit(-1);

   }
   else{
   s[++(*top)]=nw;

   }


}
int pop(int *s,int*top)
{
 if(*top==-1)
 {
    printf("underflow");
    exit(1);

 } else return s[*top--];

 

}
void display(const int*s,const int*top)
{
    int x=*top;
   //for(int i=0;i)
   while(top>=0)
   {printf("%d\n",s[x--]);}


}

int main()
{
  int stack[100],n;
  int *top=-1;
  int sel;
  printf("enter the size of the stack:\n");
  scanf("%d\n",&n);
  while(1)
  {
    printf("\tEnter your choices:\n Enter 1 for push\nEnter 2 for pop\nEnter 3 for display\nFor exit enter any other number");
    scanf("%d",&sel);
    if(sel==1)
    { 
        int nw;
        printf("enter the data to be pushed to the stack:");
        scanf("%d",nw);
      push(stack,top,nw,n);

    }
    else if(sel==2)
    {   
      printf("data popped is %d\n",pop(stack,top));


    }

      else if(sel==3)
      {

       display(stack,top);

      }

   else break;
  }



}