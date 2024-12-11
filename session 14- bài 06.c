#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int count = 0;
    printf("Nhap vao chuoi: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >='a'&& str[i]<= 'z')||(str[i]>='A'&&str[i]<='Z')){
            count++;
        }
    }
    printf("So luong ky tu la chu cai trong chuoi la: %d\n", count);
    return 0;
}
