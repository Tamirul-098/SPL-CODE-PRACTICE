#include <stdio.h>
int main() {
    int found = -1;

    char n, str[1000];
    printf("Enter a charecter : ");
    scanf("%c", &n);
    printf("Enter your word");
    scanf(" %[^\n]", str);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == n) {

            found = i;
        }
        i++;
    }
    printf("position=%d", found);
    return 0;
}