#include <stdio.h>

// Function to perform linear search using arrays
int linear_search(int arr[], int size, int x) {
  for (int i = 0; i < size; i++) {
     if (arr[i] == x)
        return i;
  }
  return -1;
}
int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int size = sizeof(arr) / sizeof(arr[0]);
  int x = 30;

  int result = linear_search(arr, size, x);
  if (result != -1)
     printf("Element found at index %d\n", result);
  else
     printf("Element not found in the array\n");

  return 0;
}