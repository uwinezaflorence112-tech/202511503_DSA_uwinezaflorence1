#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, i;
    bool found = false;
 cout << "Enter number to search: ";
  cin >> key;
for (i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }
 if (found)
  cout << "Number found at position "
    << i + 1;
    else
   cout << "Number not found";

    return 0;
}
