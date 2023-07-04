#include <stdio.h>

#define MAX_SIZE 10

void getArray(int arr[], int size);

// int *getArray() {
/**
 * Function to initialize array.
 *
 * @arr		Integer array to initialize and return.
 * @size	Size of the array.
 */
void getArray(int arr[], int size) {
   /*
   int num[] = {1, 2, 3, 4, 5};
   int i;

   printf("Array inside function: ");

   for(i = 0; i < 5; ++i) {
	  printf("%d\n", num[i]);
   }

   return num;
   */

   int i;

   printf("Enter elements in array: ");
   for(i = 0; i < size; i++) {
	  scanf("%d", &arr[i]);
   }

   printf("\n\nArray inside function: \n");
   for(i = 0; i < size; i++) {
	  printf("%d ", arr[i]);
   }
}

int main() {
   int arr[MAX_SIZE];
   int i;

   // Call function to initialize array.
   getArray(arr, MAX_SIZE);

   printf("\n\nArray outside function: \n");
   for(i = 0; i < MAX_SIZE; i++) {
	 printf("%d ", arr[i]);
   } 

   /* as a pointer -- it fails
   int i;
   int *num;

   num = getArray();
   printf("Array outside function: \n");

   for(i = 0; i < 5; ++i) {
	  printf("%d\n", num[i]);
   }
   */
   return 0;
}
