#include <stdio.h>
int main() {
    int n;
    printf("arrey size :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your number :");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("reverse arrey is :");
    for (int i = n - 1; i >= 0; i--)
        printf("%d ",arr[i]);

    return 0;
}