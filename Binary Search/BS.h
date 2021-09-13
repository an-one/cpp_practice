int searchBS(int arr[],int size,int target){
    int low = 0;
  int high = size - 1;
  int mid = 0;
  while (low <= high) {
    mid = (high + low) / 2;

    if (target > arr[mid]) {
      low = mid + 1;
    } else if (target < arr[mid]) {
      high = mid - 1;
    } else {
      return mid;
    }
}