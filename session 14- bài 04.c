#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "12345445234";
    char ch;
    int count = 0;
    printf("Chuoi da khai bao: %s\n", str);
    printf("Nhap vao mot ky tu: ");
    scanf(" %c", &ch);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("So lan xuat hien cua ky tu %c trong chuoi la: %d\n", ch, count);
    return 0;
}
