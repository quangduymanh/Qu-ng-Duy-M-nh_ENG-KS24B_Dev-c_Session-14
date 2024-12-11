#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	printf("Nhap vao chu so muon in: ");
	scanf("%s",&c);
	printf("chuoi so vua nhap la: %s\n",c);
	printf("Do dai cua chuoi la: %lu\n",strlen(c));
	return 0;
}
