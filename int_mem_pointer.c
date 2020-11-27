#include <stdio.h>

int main()
{

   int a=0; 
   int *p=&a;
   int b[5];
   int *p1=b[0];
   //assume = &a = 0x1000, &b=0x2000
   printf(" a:%x, p:%x, p+1:%x\n", &a, p, p+1);
   printf(" n:%x, p1:%x, p1+1:%x\n", &b, p1, p1+1);
   printf("\r\nHello World");
   return 0;
}

 a:f35af81c, p:f35af81c, p+1:f35af820                                                                                 
 n:f35af830, p1:4005b0, p1+1:4005b4                                                                                   
                                                                                                                      
Hello World 