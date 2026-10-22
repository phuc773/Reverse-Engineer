// GNU 4444 ???????>.. .RD;LFLDSFDSJFSHIFHSDIFHSDI //
// GNU 4444 ???????>.. .RD;LFLDSFDSJFSHIFHSDIFHSDI //
// GNU 4444 ???????>.. .RD;LFLDSFDSJFSHIFHSDIFHSDI //
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
void encmulti(char *data,size_t datalen,const unsigned char *key,size_t keylen){
	
	for (int i = 0; i < datalen; i++){
		data[i] ^= key[i % keylen];
	}
}
int main(){
    char inp[5] = {0};
    char datas[15] = {0};
    unsigned char keys[] = {0x70,0x68,0x75,0x63};
    
    size_t keylens = sizeof(keys);
   
    printf("KEY LEN:%zu\n",keylens);
    printf("a. Enc\n");
    printf("b.de\n");
    printf("c.exit\n");
	while(1){
		printf("Input: ");
		scanf("%s",inp);
		if(inp[0]=='a'){
		    if (keylens <= 0){
		    	printf("No length Key Has been found,null key\n");
		    	return 1;
		    }
		    printf("input data:");
		    scanf("%s",datas);
		    size_t datalens = strlen(datas);
		    printf("%zu\n",datalens);
			encmulti(datas,datalens,keys,keylens);
			printf("ENC DONE!");
			printf("The data enc:");
			for (int i = 0; i < datalens; i++){
				printf("%02x",datas[i]);
			}
		}else if(inp[0]=='b'){
		    size_t datalens = strlen(datas);
			if (datalens <=0){
				printf("No Data has been Encrypted.\n");
			} else if (datalens > 0){
				printf("Decrypted...\n");
				encmulti(datas,datalens,keys,keylens);
				printf("Data Has Been Decrypted:%s\n",datas);
				
			}
		}else if (inp[0]=='c'){
			printf("Please wait,we try to close logic.\n");
			return 0;
		} else{
			printf("What Do you mean ?\n");
			size_t inplen = strlen(inp);
			for (int i = 0; i < inplen;i++){
				inp[i] = 0;
			}
		}
	}
}
