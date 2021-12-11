#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char metin[61];
	int i,j;
	printf("metin gir pic\n");
	scanf("%s",metin);
	for(i=0;metin[i]!='\0';i++){
	}
	for(j=i-1;j>=0;j--){
    printf("%c",metin[j]);	}
	
	
	
	return 0;
}
