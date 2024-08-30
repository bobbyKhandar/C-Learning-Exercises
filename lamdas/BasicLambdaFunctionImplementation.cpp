#include <iostream>
using namespace std;
auto adddigits = [](int x, int y) { return x + y; };
void printWeeklyPay() {
  cout << "Enter your hourly pay" << endl;
  int hourlypay;
  cin >> hourlypay;
  int days = 5;
  auto salaryPerWeek = [days](int hourlyRate) { return hourlyRate * 8 * days; };
  cout << salaryPerWeek(hourlypay);
}

int main() {
  int x, y;
  cout << "Enter the first number you want to add" << endl;
  cin >> x;
  cout << "Enter the second number you want to add" << endl;
  cin >> y;
  cout << adddigits(x, y);
  printWeeklyPay();
}