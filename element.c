#include<stdio.h>

int main()
{
  int num[5]={6,27,15,28,9};
   int i,n;
    
printf("enter the value for the index : ");
scanf("%d",&n);
  for (int i=0;i<5;i++)
  {
        if (num[i]==n)
          {
            printf("the index number is : %d",i);
               break;
               }
          else 
             { 
              i=i+1;
            }
         
}

return 0;
}
