#include <stdio.h>

int main(void) {
  int num,i,j,m=0,flag=0;

do{      
printf("Enter number : ");    
scanf("%d",&num);

  m=num/2;    
  for(i=2;i<=m;i++)    
  {    
  if(num%i==0)    
  {    
  printf("Not prime number!!!\n");    
  flag=1;    
  break;    
  }    
  }    
  if(flag==0)
  for(j=1;j<13;j++)
       printf("%d x %d = %d\n",num,j,j*num);    
}while(num > 0);      


  return 0;
}