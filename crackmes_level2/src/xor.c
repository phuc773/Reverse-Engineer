#include <stdio.h>
#include <stdlib.h>
void encr(char *dtenc,size_t len,char key){
	for (int i = 0; i < len; i++){
	    dtenc[i] ^= key;
	}
}
int main(){
    char a[] = "abc123";
    int l = sizeof(a);
    char key = 0x70;
    encr(a,l,key);
    for (int i = 0; i < l; i++){
    	printf("ENC:%02x\n",(unsigned char)a[i]);
    }
    encr(a,l,key);
    for (int i = 0; i < l; i++){
    	printf("DEC:%s\n",a);
    }
	return 0;
}
