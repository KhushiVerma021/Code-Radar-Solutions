// Your code here...#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    for (int i = 0; i < n; i++) { // Read the array elements
        scanf("%d", &arr[i]);
    }
    int count=0;
    int k;
    scanf("%d",&k);
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            count++;
        }
        }
        printf("%d",count);

    
    return 0;
}
