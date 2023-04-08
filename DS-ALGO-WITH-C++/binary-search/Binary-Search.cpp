
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int middle, int item){
    while(left <= right) {
        middle = (left + right) / 2;
        if(arr[middle] == item) {
            return middle;
       }
       else if(arr[middle] < item) {
          left = middle + 1;
       }
       else {
            right = middle - 1;
       }
   }
   return -1;

}
int main(){

   int arr[] = {2, 3, 4, 10, 40};
   int item = 4;
   int left, right, middle;
   left = 0;
   right = sizeof(arr) / sizeof(arr[0]);
   int result = binarySearch(arr, left, right, middle, item);
   if(result == -1) {
     cout << "Item not found " << endl;
   }
   else {
     cout << "item found at index " << result << endl;
   }

return 0;
}
