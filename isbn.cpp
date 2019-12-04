#include <iostream>
using namespace std;

int main() {
  long long isbn;
  do {
    cout << "請輸入要驗證的ISBN書號：";
    cin >> isbn;
  } while (isbn < 0);

  int verify = isbn % 10;
  isbn /= 10;

  int add = 0;
  for (int multiply = 2; isbn > 0; multiply++) {
    add += isbn % 10 * multiply;
    isbn /= 10;
  }

  if (11 - add % 11 == verify) {
    cout << "此為正確的書號";
  } else if (add % 11 == 0 && verify == 0) {
    cout << "此為正確的書號";
  } else {
    cout << "此為不正確的書號";
  }
}
