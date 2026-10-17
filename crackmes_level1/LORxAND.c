#include <stdio.h>

int main(){
	int a = 5;
	int b = 4;
	if (a == 5||b==5){
		if(a < 5 || b < 5){
			for (int i = 0; i < 5 ; i++){
			    printf("Plus%d\n",i);
				b += i;
				if (b == 5){
					break;
				}
			}
		}
		if (a==5 && b==5){
			printf("OK\n");
			printf("Pass Succsed\n");
		}
		return 0;
	}
}
