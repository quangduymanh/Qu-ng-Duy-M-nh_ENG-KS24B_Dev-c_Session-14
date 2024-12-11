#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int count = 0;
    int word = 0;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++){
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
            word = 0;  
        } else if (word == 0){
            word = 1;  
            count++; 
        }
    }
    printf("So luong tu trong chuoi la: %d\n", count);
    return 0;
}
