#include <iostream>
#include "Kulbaeva_MathTask.h"

using namespace std;

int main()
{
    int NumberA=0; NumberB =0;
    EnterDigit(NumberA, "input height A");
    EnterDigit(NumberB, "input height B");
    int RectangleArea = CalRectangleArea(NumberA, NumberB);
    cout <<"Area of Rectangle is" << RectangleArea <<endl;
}