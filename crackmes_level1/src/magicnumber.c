#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
   srand(time(NULL));
   char merger[15];
   int a = 0;
   int b = 0;
   int c = 0;
   int pass = 0;
   unsigned char format[5] ={0x70,0x68,0x75,0x63};
   unsigned char r342[5] = "2343";
  
   if (a == 0 && b == 0&&c==0){
   	   printf("6E696365\n");
   }else{
    printf("626164206B69636B\n");
   	return 1;
   }
   int ran = rand() % 5 + 1;
   a += ran;
   b += ran;
   c += ran;
   if (a <=0 || b <= 0 || c <=0){
   	a=0;
   	b=0;
   	c=0;
   	a += 1;
   	b += 1;
   	c += 4;
   }
   sprintf(merger,"%d%d%d",a,b,c);
   int l = atoi(merger);
   printf(">>");
   scanf("%d",&pass);
   if (pass == l){
   	printf("636F7272656374\n");
   	
   }else {
   	return 1;
   }
   FILE *abc = fopen("347.bin","wb");
   fwrite(format,sizeof(unsigned char),4,abc);
   fwrite(r342,sizeof(unsigned char),5,abc);
   fclose(abc);
   return 0;
   
   
}
