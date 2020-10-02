#include <stdio.h>

int main(void) {
  int num,i,j,m=0,flag=0;

do{      
printf("Enter number : ");    
scanf("%d",&num);

 if((num==1 || num%2 == 0 || num%3 == 0 || num%5==0 || num%7==0) 
            && (num!=2 && num!=3 && num!=5 && num!=7))  
  {    
  printf("Not prime number!!!\n");        
  }    
      
  else{
  for(j=1;j<13;j++)
       printf("%d x %d = %d\n",num,j,j*num);   } 
}while(num >= 0);      


  return 0;
}