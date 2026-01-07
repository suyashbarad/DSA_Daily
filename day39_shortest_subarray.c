#include <stdio.h>
#include <limits.h>

int main() {
    // int arr[] = {2, 3, 1, 2, 4, 3};
    // int n = sizeof(arr)/sizeof(arr[0]);  --->manual way
    int n;
    printf("Enter The number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter arr element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int k = 7;

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum >= k) {
                int len = j - i + 1;
                if (len < ans) ans = len;
                break;
            }
        }
    }

    if (ans == INT_MAX) printf("-1\n");
    else printf("%d\n", ans);

    return 0;
}

