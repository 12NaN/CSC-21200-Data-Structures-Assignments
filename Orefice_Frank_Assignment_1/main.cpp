#include <iostream>
#include "Complex.h"
using namespace std;

int main(){
    int real_num, img_num;
    Complex results(0,0);

    cout << "Enter a real number and an imaginary number: ";
    cin >> real_num >> img_num;

    Complex comp_num1(real_num, img_num);

    cout << "\nEnter another real number and another imaginary number: ";
    cin >> real_num >> img_num;

    Complex comp_num2(real_num, img_num);

    results.compare(comp_num1, comp_num2);

    results = complex_add(comp_num1, comp_num2);
    results.print(results);

    results = complex_sub(comp_num1, comp_num2);
    results.print(results);

    return 0;
}
