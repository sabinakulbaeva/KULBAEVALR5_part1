#ifndef _KULBAEVA_MATHTASK_H_
#define _KULBAEVA_MATHTASK_H_

#include <string>
using namespace std;
//функция контроля вводимых данных
bool UserInput(string input) {
//если строка пустая - ввод некорректен
  if (input.empty()) return false;
try{
//преобразование введенного значения в тип
int number = stoi(input);
}
catch (…) //если возникла ошибка в блоке try
{ return false; }
return true;
}
//метод ввода данных
 void Enter Digit(int& var Link, const string& label){
  string raw_input;
  count << label << "=";
  getline(cin, raw_input);
  while (!UserInput(raw_input)) {
    cout << label << " = ";
    getline(cin, raw_input);
  }
varlink - stoi(raw_input);
 }
//вычисление площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB) {
  return NumberA * NumberB;
}
#endif
