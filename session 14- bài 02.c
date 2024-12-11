int main(){
    char str[] = "HelloWorld"; 
    printf("Chuoi da khai bao: %s\n", str);
    printf("Cac ky tu trong chuoi: ");
    for (int i = 0; i < strlen(str); i++){
        printf("%c", str[i]);
        if (i < strlen(str) - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
