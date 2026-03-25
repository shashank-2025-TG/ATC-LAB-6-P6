#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter string: ");
    scanf("%s",str);

    for(int i=0;i<strlen(str);i++) {
        if(str[i]!='a' && str[i]!='+') {
            printf("Invalid\n");
            return 0;
        }
    }
    printf("Valid\n");
}