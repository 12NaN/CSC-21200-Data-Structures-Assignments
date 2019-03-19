#include <iostream>
#include "Complex.h"

namespace Frank_Orefice_CCNY_csc212_Complex{
	Complex::Complex(int r, int i){
        // Precondition: r and i are integers.
     	// Postcondition: The member variables real and img of the object will equal r and i, respectively.

        real = r;
        img = i;
    }
    void Complex::print(){
        // Precondition: The Complex object has a value assigned to its real and img member variables.
        // Postcondition: Will print out the object's real and img member variables
        // in the form of a complex number.

     	if(img < 0)
          	std::cout << real << img << "i\n";
        else
          	std::cout << real << "+" << img << "i\n";
    }
    void Complex::compare(Complex& x){
        // Precondition: x is a Complex object.
        // Postcondition: Will print whether or not the Complex objects are equal.

        if(real == x.real && img == x.img)
            std::cout << true << std::endl;
        else
            std::cout << false << std::endl;
    }
    int Complex::get_real() const{
        // Precondition: The Complex object has a member variable called real.
    	// Postcondition: Returns the value of the object's real member variable.

        return real;
    }

    int Complex::get_img() const{
        // Precondition: The Complex object has a member variable called img.
        // Postcondition: Returns the value of the object's img member variable.

        return img;
    }

    void Complex::shift(int d_real, int d_img){
        // Precondition: d_real and d_img are integers.
        // Postcondition: The real member variable equals the sum of real and d_real,
        // and the img member variable equals the sum of img and d_img.

        real = real + d_real;
        img = img + d_img;
    }

	Complex complex_add(const Complex& x, const Complex& y){
        // Precondition: x and y are Complex objects.
        // Postcondition: Returns the sum of the complex numbers of x and y.

    	std::cout << "Sum: ";
    	Complex result_sum(x.get_real() + y.get_real(), x.get_img() + y.get_img());
    	return result_sum;
	}

	Complex complex_sub(const Complex& x, const Complex& y){
        // Precondition: x and y are Complex objects.
        // Postcondition: Returns the difference of the complex numbers of x and y.

    	std::cout << "Difference: ";
    	Complex result_diff(x.get_real() - y.get_real(), x.get_img() - y.get_img());
    	return result_diff;
	}
}

