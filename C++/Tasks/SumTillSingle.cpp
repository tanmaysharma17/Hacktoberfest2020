//C Program to find the sum of digits of a number until a single digit is occurred
//ANSWER BY mRuggi
#include <iostream>
using namespace std;

bool verify_single(int x) {
  if (x > 9) {
    return false;
  }
  return true;
}

void count_digits(int x, int & digit) {
  digit = 0;
  while (x != 0) {
    x /= 10;
    digit++;
  }
}

int DoSumDigits(int v[], int size, int num) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    if (verify_single(num)) {
      v[i] = num;
    } else {
      int a = (num / 10) * 10;
      v[i] = num - a;
      num /= 10;
    }
  }
  for (int i = 0; i < size; i++) {
    sum += v[i];
  }
  return sum;

}

int main() {

  int num;
  int digits;
  int sum;

  cout << "Insert number to process sum \nof digits until single digit: ";
  cin >> num;
  if (verify_single(num)) {
    cout << endl << endl << num << endl;
  } else {
    do {
      count_digits(num, digits);
      int vector[digits];
      sum = DoSumDigits(vector, digits, num);
      cout << endl << sum << endl;
      num = sum;
    } while (verify_single(sum) == 0);
  }
  system("pause");
  return 0;
}
