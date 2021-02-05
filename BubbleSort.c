#include <stdio.h>

void swap(int *n1, int *n2);

void print_arr(int arr[], int size);

void bubble_sort(int arr[], int size);

int main(){
  int arr[10] = {13, 98, 36, 23, 86, 1002, 95, 19, 67, 34};

  print_arr(arr, 10);
  printf("*****\n");
  bubble_sort(arr, 10);

  print_arr(arr, 10);
}

void swap(int *n1, int *n2){
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}

void print_arr(int arr[], int size){
  int i;
  for(i=0; i<size; i++){
    printf("%d\n", arr[i]);
  }
}

void bubble_sort(int arr[], int size){
  int i, j;
  for(i=0; i<size-1; i++){
    for(j=0; j<size-1-i; j++){
      if(arr[j+1] > arr[j]){
        swap(&arr[j], &arr[j+1]);
      }
    }
  }
}