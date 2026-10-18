#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(){
	
	char password[15];
	char storepass[15];
	FILE *f_o = fopen("password.txt","w");
	if (f_o == NULL){
		printf("License Key Cant Create\n");
		return 1;
	}
	strcpy(password, "pas!word");
	fprintf(f_o,"%s",password);
	fclose(f_o);
	printf("Input key:");
	scanf("%s",storepass);
	if (strcmp(password,storepass) == 0){
		printf("Welcome!\n");
		return 0;
	}else {
		printf("Wrong key!\n");
		return 1;
	}
	
}
