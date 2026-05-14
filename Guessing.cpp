#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    int number, guess;
 srand(time(0));
  int = rand() % 10 + 1;
 cout<< "Guess a number between 1 and 10: ";
   cin >> guess;
 if (guess == number) {
  cout << " You guessed correctly.";
    } else {
  cout << "Wrong guess. The number was "
    << number;
    }

    return 0;
}
