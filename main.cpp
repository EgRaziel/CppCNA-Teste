#include <iostream>
using namespace std;

// v0.7.0: 26/01/2025 - Switch Statements: Another Perspective on Conditional Logic

/*int main(void)
{
  int choice = 1;
  double val1, val2, result;

  while (choice != 0)
  {
    cout << "MENU:" << endl;
    cout << "\n0 - exit" << endl;
    cout << "1 - addition" << endl;
    cout << "2 - subtraction" << endl;
    cout << "3 - multiplication" << endl;
    cout << "4 - division" << endl;
    cout << "\nYour Choice: ";

    cin >> choice;

    switch (choice)
    {
    case 0:
      cout << "\nProgram exited!" << endl;
      break;

    case 1:
      cout << "\nEnter the first value: ";
      cin >> val1;
      cout << "Enter the second value: ";
      cin >> val2;

      result = val1 + val2;

      cout << "\nResult: " << result << endl;
      cout << "" << endl;
      break;

    case 2:
      cout << "\nEnter the first value: ";
      cin >> val1;
      cout << "Enter the second value: ";
      cin >> val2;

      result = val1 - val2;

      cout << "\nResult: " << result << endl;
      cout << "" << endl;
      break;

    case 3:
      cout << "\nEnter the first value: ";
      cin >> val1;
      cout << "Enter the second value: ";
      cin >> val2;

      result = val1 * val2;

      cout << "\nResult: " << result << endl;
      cout << "" << endl;
      break;

    case 4:
      cout << "\nEnter the first value: ";
      cin >> val1;
      cout << "Enter the second value: ";
      cin >> val2;

      if (val2 != 0)
      {
        result = val1 / val2;
        cout << "\nResult: " << result << endl;
        cout << "" << endl;
      }
      else
      {
        cout << "\nSecond value cannot be zero!" << endl;
        cout << "" << endl;
      }
      break;

    default:
      cout << "\nEnter a valid option!" << endl;
      cout << "" << endl;
      break;
    }
  }

  system("pause");
  return 0;
}*/

// v0.6.0: 26/01/2026 - Algebra and Computer Logic

/*int main(void)
{
  unsigned short int val;
  bool ispalindrome = false;

  cout << "Enter a value: ";
  cin >> val;

  unsigned short int newval = 0;

  for (int i = 0; i < 16; i++) // Percorre cada um dos 16 bits de 'val' (direita para esquerda)
  {
    // Verifica se bit de 'val' está ativo na posição 'i'. Em cada iteração a máscara é deslocada para o bit de 'val' 'i' casas à esquerda, e a comparação é feita novamente)
    int bit = val & (1 << i);
    if (bit) // Se a comparação for verdadeira (bit de 'val' na posição 'i' == 1 na posição 'i', i.e. i-ésimo bit de 'val' == 1)
    {
      // O novo valor vai receber o bit de 'val' na posição inversa da comparação anterior
      // Por exemplo, 'val' = 9. 9 em bits = 0000000000001001. Se o bit na posição 'i = 0' (primeira à direita) for 1, então newval recebe um bit de valor 1 na posição 15 - i (15 - 0 = 15)
      // Com isso, o bit 1 vai ser adicionado na posição 15 do valor, i.e. na primeira casa à esquerda.
      newval |= (1 << (15 - i));
    } // O loop irá se repetir, colocando bits 1 na posição inversa caso val & (1 << i) == 1, e não fazendo nada (mantendo o bit == 0) caso a comparação seja falsa (comparação == 0)
    // Dessa forma o valor irá se inverter. 0000000000001001 irá virar 1001000000000000
  }

  ispalindrome = (newval == val); // ispalindrome recebe a comparação entre os bits de newval e val. No caso do exemplo acima, 0000000000001001 é diferente de 1001000000000000
                                  // pois os bits estão em posições diferentes

  if (ispalindrome)
  {
    cout << val << " is a bitwise palindrome." << endl;
  }
  else
  {
    cout << val << " is not a bitwise palindrome." << endl;
  }

  system("pause");
  return 0;
}*/

/*int main(void)
{
  int number;
  unsigned long bits;

  cout << "Enter a number to see the number of bits set to 1: ";
  cin >> number;

  bits = 0;

  if (number >= 0)
  {
    while (number) // enquanto number diferente de 0
    {
      bits += number & 1; // incrementa bits se o bit menos significativo for 1
      number >>= 1; // desloca os bits de number para a direita em 1 posição, descartando o bit menos significativo usado na comparação acima
    }
    cout << bits << endl;
  }
  else
  {
    cout << "Invalid input. Please enter a non-negative integer." << endl;
    bits = 0;
  }

  system("pause");
  return 0;
}*/

// v0.5.0: 25/01/2026 - Looping Constructs: Iterating Through Code Blocks

/*int main(void)
{
  int size, bottomRight;

  cout << "Enter the helix size: ";
  cin >> size;

  // Calculando o valor no canto inferior direito de uma espiral numérica de tamanho ímpar
  if (size % 2 != 0 && size > 0)
  {
    size = size - 1;
    bottomRight = (size * size) + 1;

    cout << bottomRight << endl;
  }
  else
  {
    cout << "Invalid input. Please enter a positive odd integer." << endl;
  }

  system("pause");
  return 0;
}*/

/*int main(void)
{
  unsigned n;
  unsigned long long factorial = 1;

  cout << "Enter a number to calculate its factorial: ";
  cin >> n;

  if (n > 0)
  {
    for (int i = n; i >= 1; i--)
    {
      factorial *= i;
    }
    cout << factorial << endl;
  }
  else if (n == 0)
  {
    cout << "1" << endl;
  }
  else
  {
    cout << "Invalid input. Please enter a non-negative integer." << endl;
  }

  system("pause");
  return 0;
}*/

/*int main(void)
{
  int n;
  unsigned long long fib1 = 1., fib2 = 1., fibn;

  cout << "Enter the Fibonacci term to calculate (n > 0): ";
  cin >> n;

  if (n > 0)
  {
    if (n == 1 || n == 2)
    {
      fibn = 1.;
    }
    else
    {
      for (int i = 3; i <= n; i++)
      {
        fibn = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibn;
      }
    }
    cout.precision(20);
    cout << fibn << endl;
  }
  else
  {
    cout << "Invalid input. Please enter a positive integer." << endl;
  }

  system("pause");
  return 0;
}*/

/*int main(void)
{
  int n;

  cout << "Enter the side size: ";
  cin >> n;

  if (n > 1 && n <= 65)
  {
    cout << '+';
    for (int i = 0; i < n - 2; i++)
      cout << '-';
    cout << '+' << endl;
    for (int i = 0; i < n - 2; i++)
    {
      cout << '|';
      for (int j = 0; j < n - 2; j++)
        cout << ' ';
      cout << '|' << endl;
    }
    cout << '+';
    for (int i = 0; i < n - 2; i++)
      cout << '-';
    cout << '+' << endl;
  }
  else
  {
    cout << "Sorry, the side size is too big!" << endl;
  }

  system("pause");
  return 0;
}*/

/*int main(void)
{
  int n;
  double pow = 1;

  cout << "Enter the power of 2 to calculate (0 to 63): ";
  cin >> n;

  if (n < 64 && n >= 0)
  {
    for (int i = 0; i < n; i++)
    {
      pow /= 2.0;
    }

    cout.precision(20);
    cout << pow << endl;
  }
  else
  {
    cout << "Invalid input. Please enter a number between 0 and 63." << endl;
  }

  system("pause");
  return 0;
}*/

/*int main(void)
{
  int n;
  unsigned long long pow = 1;

  cout << "Enter the power of 2 to calculate (0 to 63): ";
  cin >> n;

  if (n < 64 && n >= 0)
  {
    for (int i = 0; i < n; i++)
    {
      pow *= 2;
    }
    cout << pow << endl;
  }
  else
  {
    cout << "Invalid input. Please enter a number between 0 and 63." << endl;
  }

  system("pause");
  return 0;
}*/

/*int main(void)
{
  double pi4 = 0., div = 1.;
  long n;

  cout << "Number of iterations? ";
  cin >> n;

  // Hipótese de Leibniz para o cálculo de Pi: Pi/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ...
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 1)
    {
      pi4 -= 1. / div;
    }
    else
    {
      pi4 += 1. / div;
    }
    div += 2.;
  }

  cout.precision(20);
  cout << "Pi = " << (pi4 * 4.) << endl;

  system("pause");
  return 0;
}*/

/*int main(void)
{
  int c0, counter = 0;

  cout << "Enter a number: ";
  cin >> c0;

  // Hipótese de Collatz: Independentemente do número inicial, a sequência sempre chegará a 1.
  if (c0 > 0)
  {
    while (c0 != 1)
    {
      if (c0 % 2 == 0)
      {
        c0 = c0 / 2;
      }
      else
      {
        c0 = (c0 * 3) + 1;
      }

      cout << c0 << endl;
      counter++;
    }
    cout << "Steps = " << counter << endl;
  }
  else
  {
    cout << "Invalid input. Please enter a non-negative and non-zero number." << endl;
  }

  system("pause");
  return 0;
}*/

// v0.4.0: 24/01/2026 - If and Else: Enhancing Conditional Instructions in C++

/*int main(void)
{
  int year, a, b, c, d, e, easterDay;

  cout << "Enter year: ";
  cin >> year;

  a = year % 19;
  b = year % 4;
  c = year % 7;
  d = (19 * a + 24) % 30;
  e = ((2 * b) + (4 * c) + (6 * d) + 5) % 7;

  if (d + e < 10)
  {
    easterDay = d + e + 22;

    cout << "\nMarch " << easterDay << endl;
  }
  else
  {
    easterDay = d + e - 9;

    cout << "\nApril " << easterDay << endl;
  }

  system("pause");
  return 0;
}*/

/*int main(void)
{
  int year, month, day, weekday;

  cout << "Enter year: ";
  cin >> year;
  cout << "Enter month: ";
  cin >> month;
  cout << "Enter day number: ";
  cin >> day;

  if ((month >= 1 && month <= 12) && (day >= 1 && day <= 31))
  {
    month -= 2;
    if (month <= 0)
    {
      month += 12;
      year -= 1;
    }
    month = (month * 83) / 32;
    month += day;
    month += year;
    month += year / 4;
    month -= year / 100;
    month += year / 400;
    ;
    weekday = month % 7;

    cout << "\nWeekday is (0 - Sunday, 1 - Monday, 2 - Tuesday, 3 - Wednesday, 4 - Thursday, 5 - Friday, 6 - Saturday): " << endl;
    cout << weekday << endl;
  }
  else
  {
    cout << "\nInvalid month or day number." << endl;
  }

  system("pause");
  return 0;
}*/

/*int main(void)
{
  int measureSystem, feet;
  float meters, inches;

  cout << "Select the measurement system:" << endl;
  cin >> measureSystem;

  if (measureSystem == 0)
  {
    cout << "Enter the value in meters: ";
    cin >> meters;

    inches = meters / 0.0254;
    feet = inches / 12;
    inches = inches - (feet * 12);

    cout << "\nThe converted measurement is: " << feet << "'" << inches << "\"" << endl;
  }
  else if (measureSystem == 1)
  {
    cout << "Enter the value in feet: ";
    cin >> feet;

    cout << "Enter the value in inches: ";
    cin >> inches;

    feet *= 12;
    inches = feet + inches;
    meters = inches * 0.0254;

    cout << "\nThe converted measurement is: " << meters << "m" << endl;
  }
  else
  {
    cout << "Invalid measurement system selected." << endl;
  }

  system("pause");
  return 0;
}*/

/*int main(void)
{
  float grossPrice, taxPerc, netPrice, taxValue;

  cout << "Enter the gross price: ";
  cin >> grossPrice;
  cout << "Enter the tax percentage (e.g., enter 20 for 20%): ";
  cin >> taxPerc;

  if (grossPrice > 0 && taxPerc > 0 && taxPerc < 100)
  {
    taxValue = grossPrice - (grossPrice / (1 + (taxPerc / 100)));
    netPrice = grossPrice - taxValue;

    cout << "\nNet price: " << netPrice << endl;
    cout << "Tax value: " << taxValue << endl;
  }
  else
  {
    cout << "\nInvalid input values. Please ensure gross price is greater than zero and tax percentage is between 0 and 100." << endl;
  }

  system("pause");
  return 0;
}*/

/*int main(void)
{
  int year;

  cout << "Enter a year: ";
  cin >> year;

  if (year < 1582)
  {
    cout << "Year falls outside the Gregorian calendar." << endl;
  }
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
  {
    cout << "Leap year." << endl;
  }
  else
  {
    cout << "Common year." << endl;
  }

  system("pause");
  return 0;
}*/

// v0.3.0: 23/01/2026 - Making Simple Decisions: Intro to Flow Control in C++

/*int main(void)
{
  int num1, num2, num3, num4;

  cout << "Enter the first octet: ";
  cin >> num1;
  cout << "Enter the second octet: ";
  cin >> num2;
  cout << "Enter the third octet: ";
  cin >> num3;
  cout << "Enter the fourth octet: ";
  cin >> num4;
  if ((num1 >= 0 && num1 <= 255) && (num2 >= 0 && num2 <= 255) && (num3 >= 0 && num3 <= 255) && (num4 >= 0 && num4 <= 255))
  {
    cout << "\nThe IP address is valid: " << num1 << "." << num2 << "." << num3 << "." << num4 << endl;
  }
  else
  {
    cout << "\nThe IP address is not valid." << endl;
  }
  system("pause");
  return 0;
}*/

/*int main(void)
{
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

  if (diference < 0)
  {
    difabs = -diference;
  }
  else
  {
    difabs = diference;
  }

  if (difabs <= epsilon)
  {
    cout << "Results are equal (by 0.000001 epsilon)." << endl;
  }
  else
  {
    cout << "Results are not equal (by 0.000001 epsilon)." << endl;
  }
  system("pause");
  return 0;
}*/

/*int main(void)
{
  bool answer;
  int value;

  cout << "Enter a value: ";
  cin >> value;

  if ((value >= 0 && value < 10) || ((value * 2) < 20 && (value - 2) > -2) || ((value - 1) > 1 && (value / 2) < 10) || value == 111)
  {
    cout << "THAT'S TRUE :)" << endl;
  }
  else
  {
    cout << "THAT'S NOT TRUE :(" << endl;
  }

  system("pause");
  return 0;
}*/

// v0.2.0: 22/01/2026 - Operators: Essential Tools for C++ Programming

/*int main(void)
{
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

/*int main(void)
{
  float pi = 3.14159265359;
  float pi_squared = pi * pi;
  float x, y;

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

/*int main(void)
{
  float v = 2;

  float result = (v + 1) * 2;
  std::cout << "result:  " << result << "  expected result :  6" << std::endl;

  result = (v + 1) * ((v + 2) * 2);
  std::cout << "result: " << result << "  expected result : 24" << std::endl;

  result = (v - 1) * (2 + (2 * 2));
  std::cout << "result:  " << result << "  expected result :  6" << std::endl;

  result = (v + v) * (v + v) * 2;
  std::cout << "result: " << result << "  expected result : 32" << std::endl;

  result = ((int)v % 2) * (v + 2 * 2);
  std::cout << "result:  " << result << "  expected result :  0" << std::endl;

  system("pause");
  return 0;
}*/

// v0.1.0: 21/01/2026 - The Basic of Integers and Variables

/*int main(void)
{
  int segundos = 60;
  int result1 = 3 * segundos;
  int result2 = 6 * segundos;
  float Pi = 3.141526;
  float finalResult = (result1 + result2) / Pi;

  cout << "Result: " << finalResult << endl;
  system("pause");
  return 0;
}*/