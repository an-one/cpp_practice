#pragma once

int binary_search(int numbers[],int size,int target){
   int low = 0;
  int high = size - 1;
  int mid = 0;
  while (low <= high) {
    mid = (high + low) / 2;

    if (target > numbers[mid]) {
      low = mid + 1;
    } else if (target < numbers[mid]) {
      high = mid - 1;
    } else {
      return mid;
    }
  }

  return -1;
}
int binary_search_recur(int target, int numbers[], int low, int high) {
  if (low > high) {
    return -1;
  }

  int mid = (high + low) / 2;

  if (target > numbers[mid]) {
    return binary_search_recur(target, numbers, mid + 1, high);
  } else if (target < numbers[mid]) {
    return binary_search_recur(target, numbers, low, mid - 1);
  } else {
    return mid;
  }
}