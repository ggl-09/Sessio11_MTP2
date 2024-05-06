#include <iostream>

using namespace std;

int bad_luck(long long number, int digit) {
  if (number == 0) return 0;
  int ultim = number % 10;
  if (ultim == digit) return bad_luck(number / 10, digit);
  return bad_luck(number / 10, digit) * 10 + ultim;
}

int main() {
  long long number;
  int digit;
  do {
    cout << "ENTRA UN ENTER NO NEGATIU:" << endl;
    cin >> number;
  } while (number < 0);
  do {
    cout << "ENTRA EL DIGIT DE LA MALA SORT:" << endl;
    cin >> digit;
  } while(digit > 9 or digit < 0);
  if (number == 0 and digit == 0) cout << "VALOR FINAL:" << endl << "0" << endl;
  else cout << "VALOR FINAL:" << endl << bad_luck(number, digit) << endl;
  return 0;
}
