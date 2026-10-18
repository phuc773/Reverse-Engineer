#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
void enxor(char *a,size_t b,char dekey){
	for (int i = 0; i < b;i++){
		a[i] ^= dekey;
	}
}


int main(){
    char data[20]={0};
    char sele[5]={0};
    
    size_t size = strlen(data);
    char key = 'p'; // Default Key //
     
    bool isloop = true;
    printf("CLI TOOL\n");
    printf("a.Encrypt (XOR)\n"); // Encrypt Data, If you use two time in a same data,Its will be Encrypt and Decrypt :) //
    printf("b.Decrypt (XOR)(ONLY WORK IF USE ENCRYPT FIRST)\n");
    printf("c.Exit (OF USE HOT KEY Ctrl + C)\n");
    
	while(isloop == true){
		printf("=> ");
		scanf("%s",sele);
		if (sele[0]=='a'){
			printf("Status: Work || Selected: a\n");
			printf("Input Data Only String:");
			scanf("%15s",data);
			
			enxor(data,size,key);
			printf("Status: Done||Details: Encrypt Done\n");
			for (int i = 0; i < size;i++){
			   printf("Data Encrypt: ");
			   printf("%02x",data[i]);
		    }
			
		} else if(sele[0] == 'b'){
			printf("Status: Work || Selected: b\n");
			
			if(size== 0){
				printf("GAY\n");
				return 1;
			}
			enxor(data,size,key);
			printf("DATA AFTER Decrypt:%s\n",data);
		}else if(sele[0] == 'c'){
		    isloop = false;
			break;
		} else {
			printf("Wrong thing of data is wrong ?\n");
			return 1;
		}
	}
	
}
