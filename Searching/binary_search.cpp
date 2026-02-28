#include <iostream>
using namespace std;

int main() {
  int arr[] = {2,4,6,8,10};
  int n = 5;
  int target = 6;

  int start = 0, end = n-;
  while (start <= end) {
      int mid = start + (end-start) / 2;
      if (arr[mid] == target)  {
          cout <<" found at index " << mid;
          return 0;
      } else if (arr[mid] < target) {
          start = mid+1;
      } else {
          end  mid-1;
      }
  }
  cout << "not found";
  return 0;
}
