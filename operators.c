/*
Student Name:Diwakar kandel
* Subject:programming fundamental
* Roll No:
* Program:WAP the program of assigment operators
* Lab No:01
* Date:200ct,2016
*/
#include<stdio.h>

int main()
{
   int a,b;
   
   printf("Enter the first Number:\n");
   scanf("%d",&a);
   printf("Enter the second Number:\n");
   scanf("%d",&b);

    a +=b;
    printf("\n use of += of %d",a);
    
    a -=b;
     printf("\n use of -= of %d",a);
     
    a *=b;
      printf("\n use of *= of %d",a);
      
     a /=b;
       printf("\n use of /= of %d",a);
       
     a %=b;
        printf("\n use of %= of %d",a);
        
      a=b;
   printf("\n use of = of %d",a);
   
   return 0;
}
        
