#include<stdio.h>
#include<stdlib.h>
void main()
{
  int *fp,n,m,i;
   printf("how many employees?:\n");
   scanf("%d",&n);
   fp=(int *)calloc(n,sizeof(int));
   printf("Employee age :\n");
   for(i=0;i<n;i++)
{
         scanf("%d",&fp[i]);
}
   printf("employee ages are:\n");
   for(i=0;i<n;i++);
{
       printf("%d",fp[i]);
}
free(fp);

}

