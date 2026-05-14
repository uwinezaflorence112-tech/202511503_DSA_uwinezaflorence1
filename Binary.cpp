#include <iostream>

using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int low = 0, high = 4, mid, key;
    bool found = false;
 cout << "Enter number to search: ";
cin >> key;
while (low <= high) {
 mid = (low + high) / 2;
if (arr[mid] == key) {
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
if (found)
cout << "Number found at position " 
  << mid + 1;
    else
        return << "Number not found";
return 0;
}
