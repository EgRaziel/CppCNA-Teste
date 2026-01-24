#include <iostream>
using namespace std;

//v0.4.0: 24/01/2026 - If and Else: Enhancing Conditional Instructions in C++
/*int main(void) {
  int year, a, b, c, d, e, easterDay;

  cout << "Enter year: ";
  cin >> year;

  a = year % 19;
  b = year % 4;
  c = year % 7;
  d = (19 * a + 24) % 30;
  e = ((2 * b) + (4 * c) + (6 * d) + 5) % 7;

  if (d + e < 10) {
    easterDay = d + e + 22;

    cout << "\nMarch " << easterDay << endl;
  } else {
    easterDay = d + e - 9;

    cout << "\nApril " << easterDay << endl;
  }

  system("pause");
  return 0;
}*/
/*int main(void) {
  int year, month, day, weekday;

  cout << "Enter year: ";
  cin >> year;
  cout << "Enter month: ";
  cin >> month;
  cout << "Enter day number: ";
  cin >> day;

  if ((month >= 1 && month <= 12) && (day >= 1 && day <= 31)) {
    month -= 2;
    if (month <= 0) {
      month += 12;
      year -= 1;
    }
    month = (month * 83) / 32;
    month += day;
    month += year;
    month += year / 4;
    month -= year / 100;
    month += year / 400;;
    weekday = month % 7;

    cout << "\nWeekday is (0 - Sunday, 1 - Monday, 2 - Tuesday, 3 - Wednesday, 4 - Thursday, 5 - Friday, 6 - Saturday): " << endl;
    cout << weekday << endl;
  }
  else {
    cout << "\nInvalid month or day number." << endl;
  }

  system("pause");
  return 0;
}*/
/*int main(void) {
  int measureSystem, feet;
  float meters, inches;

  cout << "Select the measurement system:" << endl;
  cin >> measureSystem;

  if (measureSystem == 0) {
    cout << "Enter the value in meters: ";
    cin >> meters;

    inches = meters / 0.0254;
    feet = inches / 12;
    inches = inches - (feet * 12);

    cout << "\nThe converted measurement is: " << feet << "'" << inches << "\"" << endl;
  }
  else if (measureSystem == 1) {
      cout << "Enter the value in feet: ";
      cin >> feet;

      cout << "Enter the value in inches: ";
      cin >> inches;

      feet *= 12;
      inches = feet + inches;
      meters = inches * 0.0254;

      cout << "\nThe converted measurement is: " << meters << "m" << endl;
  } else {
    cout << "Invalid measurement system selected." << endl;
  }

  system("pause");
  return 0;
}*/
/*int main(void) {
  float grossPrice, taxPerc, netPrice, taxValue;

  cout << "Enter the gross price: ";
  cin >> grossPrice;
  cout << "Enter the tax percentage (e.g., enter 20 for 20%): ";
  cin >> taxPerc;

  if (grossPrice > 0 && taxPerc > 0 && taxPerc < 100) {
    taxValue = grossPrice - (grossPrice / (1 + (taxPerc / 100)));
    netPrice = grossPrice - taxValue;

    cout << "\nNet price: " << netPrice << endl;
    cout << "Tax value: " << taxValue << endl;
  } else {
    cout << "\nInvalid input values. Please ensure gross price is greater than zero and tax percentage is between 0 and 100." << endl;
  }

  system("pause");
  return 0;
}*/
/*int main(void) {
	int year;
	
	cout << "Enter a year: ";
	cin >> year;
	
  if (year < 1582) {
    cout << "Year falls outside the Gregorian calendar." << endl;
  }
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    cout << "Leap year." << endl;
  } else {
    cout << "Common year." << endl;
  }

  system("pause");
	return 0;
}*/

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