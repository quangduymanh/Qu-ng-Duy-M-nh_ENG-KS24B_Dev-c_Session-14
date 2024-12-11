#include<stdio.h>
#include<string.h>
int main(){
	char str[]="123456";
	int length= strlen(str);
	printf("chuoi dao nguoc la: ");
	for (int i=length -1;i>=0;i--){
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
	
}
