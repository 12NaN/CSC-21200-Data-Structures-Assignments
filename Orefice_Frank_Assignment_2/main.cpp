#include <iostream>
#include "Complex.h"
using namespace Frank_Orefice_CCNY_csc212_Complex;

int main(){
    int real_num, img_num;
    Complex results;

    std::cout << "Enter a real number and an imaginary number: ";
    std::cin >> real_num >> img_num;

    Complex comp_num1(real_num, img_num);

    std::cout << "\nEnter another real number and another imaginary number: ";
    std::cin >> real_num >> img_num;

    Complex comp_num2(real_num, img_num);

    std::cout << "\nEnter a real and an imaginary number for the first complex number to shift by: ";
    std::cin >> real_num >> img_num;

    comp_num1.shift(real_num, img_num);

    std::cout << "\nEnter another real and another imaginary number for the second complex number to shift by: ";
    std::cin >> real_num >> img_num;

    comp_num2.shift(real_num, img_num);

    std::cout << "\n";

    comp_num1.compare(comp_num2);

    results = complex_add(comp_num1, comp_num2);
    results.print();

    results = complex_sub(comp_num1, comp_num2);
    results.print();

    return 0;
}

