#include <stdio.h>

int main(void) {
  int num,i,j;

while(num >= 0)  {      
printf("Enter number : ");    
scanf("%d",&num);

 if((num==1 || num%2 == 0 || num%3 == 0 || num%5==0 || num%7==0) 
            && (num!=2 && num!=3 && num!=5 && num!=7)&&(num >0))  
  {    
  printf("Not prime number!!!\n"); continue;       
  }    
      
  if(num>0){
  for(j=1;j<13;j++)
       printf("%d x %d = %d\n",num,j,j*num);   } 
  continue;
}    


  return 0;
}