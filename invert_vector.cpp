#include <iostream>
using namespace std;

void swap(int arr[], int size) {
	int temp;
	for(int i = 0; i < size/2; i++) {
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	swap(arr, 5);
	cout << "Vector: ";
	for(int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
		