#include <iostream>

using namespace std;

int main(void) {
  int segundos = 60;
  int result1 = 3 * segundos;
  int result2 = 6 * segundos;
  float Pi = 3.141526;
  float finalResult = (result1 + result2)/Pi;

  cout << "Result: " << finalResult << endl;
  system("pause");
  return 0;
}