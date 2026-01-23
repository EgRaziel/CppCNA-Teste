#include <iostream>
using namespace std;

//v0.3.0: 23/01/2026 - Making Simple Decisions: Intro to Flow Control in C++
/*int main(void) {
  int num1, num2, num3, num4;

  cout << "Enter the first octet: ";
  cin >> num1;
  cout << "Enter the second octet: ";
  cin >> num2;
  cout << "Enter the third octet: ";
  cin >> num3;
  cout << "Enter the fourth octet: ";
  cin >> num4;
  if ((num1 >=0 && num1 <=255) && (num2 >=0 && num2 <=255) && (num3 >=0 && num3 <=255) && (num4 >=0 && num4 <=255)) {
    cout << "\nThe IP address is valid: " << num1 << "." << num2 << "." << num3 << "." << num4 << endl;
  } else {
    cout << "\nThe IP address is not valid." << endl;
  }
  system("pause");
  return 0;
}*/
/*int main(void) {
  int v1, v2;
  float result1, result2, diference, difabs;
  const float epsilon = 0.000001;

  cout << "Enter the first value: ";
  cin >> v1;
  cout << "Enter the second value: ";
  cin >> v2;

  result1 = 1 / (float)v1;
  result2 = 1 / (float)v2;
  diference = result1 - result2;
  
  if (diference < 0) {
    difabs = -diference;
  } else {
    difabs = diference;
  }

  if (difabs <= epsilon) {
    cout << "Results are equal (by 0.000001 epsilon)." << endl;
  } else {
    cout << "Results are not equal (by 0.000001 epsilon)." << endl;
  }
  system("pause");
  return 0;
}*/
/*int main(void) {
	bool answer; 
	int value;
	
	cout << "Enter a value: ";
	cin >> value;
	
	if ((value >= 0 && value < 10) || ((value * 2) < 20 && (value - 2) > -2) || ((value - 1) > 1 && (value / 2) < 10) || value == 111) {
    cout << "THAT'S TRUE :)" << endl;
  } else {
    cout << "THAT'S NOT TRUE :(" << endl;
  }

  system("pause");
	return 0;
}*/

//v0.2.0: 22/01/2026 - Operators: Essential Tools for C++ Programming
/*int main(void) {
	int i, j, k;
	
	cout << "Enter i: ";
	cin >> i;
	cout << "Enter j: ";
	cin >> j;
	
  i += 2;
  j -= i;
  k = i / j;
  k += k;
  k--;
  j = k % i;
  k += k + i;
  k += k / j;
  k *= k * k;
  k += i * j;
	
	cout << k << endl;
  system("pause");
	return 0;
}*/
/*int main(void) {
	float pi = 3.14159265359;
  float pi_squared = pi * pi;
	float x,y;

	cout << "Enter value for x: ";
	cin >> x;

  float x_squared = x * x;
  float downcalc = x_squared + (0.5);
  float downcalcminus = x_squared - (0.5);
	y = (x_squared / (pi_squared * downcalc)) * (1 + (x_squared / (pi_squared * (downcalcminus * downcalcminus))));
	
	cout << "y = " << y << endl;

  system("pause");
	return 0;
}*/
/*int main(void) {
  float v=2;

  float result = (v + 1) * 2;
  std::cout << "result:  " << result <<  "  expected result :  6" << std::endl;

  result = (v + 1) * ((v + 2) * 2);
  std::cout << "result: " << result <<  "  expected result : 24" << std::endl;

  result = (v - 1) * (2 + (2 * 2));
  std::cout << "result:  " << result <<  "  expected result :  6" << std::endl;

  result = (v + v) * (v + v) * 2;
  std::cout << "result: " << result <<  "  expected result : 32" << std::endl;

  result = ((int)v % 2) * (v + 2 * 2);
  std::cout << "result:  " << result <<  "  expected result :  0" << std::endl;

  system("pause");
  return 0;
}*/

// v0.1.0: 21/01/2026 - The Basic of Integers and Variables
/*int main(void) {
  int segundos = 60;
  int result1 = 3 * segundos;
  int result2 = 6 * segundos;
  float Pi = 3.141526;
  float finalResult = (result1 + result2)/Pi;

  cout << "Result: " << finalResult << endl;
  system("pause");
  return 0;
}*/