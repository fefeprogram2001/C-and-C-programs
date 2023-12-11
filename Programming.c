#include <stdio.h>

int test(int arr[], int size) {
    if(size <= 0) {
        return 0;
    } else {
        return arr[size - 1] + test(arr, size - 1);
    }
}

int main() {
    int arr[5];
	printf("Write the array values:\n");
	for(int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
    printf("Result = %d\n", test(arr, 5));
    return 0;
}