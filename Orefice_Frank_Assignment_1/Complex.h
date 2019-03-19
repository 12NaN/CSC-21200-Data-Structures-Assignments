#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    public:
        Complex(int r, int i) 	// Precondition: r and i are integers.
        {						// Postcondition: The member variables real and img of the object will equal r and i, respectively.
            real = r;
            img = i;
        }
        void print(Complex z){						   // Precondition: z is a Complex object.
        	if(z.img < 0)							   // Postcondition: Will print out the object's real and img member variables 
            	std::cout << z.real << z.img << "i\n"; // in the form of a complex number.
            else
            	std::cout << z.real << "+" << z.img << "i\n";
        }
        void compare(Complex x, Complex y){			// Precondition: x and y are Complex objects.
            if(x.real == y.real && x.img == y.img)	// Postcondition: Will print whether or not the complex numbers of x and y are equal.
                std::cout << "\nThese complex numbers are equal.\n";
            else
                std::cout << "\nThese complex numbers are not equal.\n";
        }
        int get_real() const{		// Precondition: The Complex object has a member variable called real.
            return real;			// Postcondition: Returns the value of the object's real member variable.
        }

        int get_img() const{		// Precondition: The Complex object has a member variable called img.
            return img;				// Postcondition: Returns the value of the object's img member variable.
        }
    private:
        int real;
        int img;
};

Complex complex_add(Complex x, Complex y){		// Precondition: x and y are Complex objects.
    std::cout << "Sum: ";						// Postcondition: Returns the sum of the complex numbers of x and y.
    Complex result_sum(x.get_real() + y.get_real(), x.get_img() + y.get_img());
    return result_sum;
}

Complex complex_sub(Complex x, Complex y){		// Precondition: x and y are Complex objects.
    std::cout << "Difference: ";				// Postcondition: Returns the difference of the complex numbers of x and y.
    Complex result_diff(x.get_real() - y.get_real(), x.get_img() - y.get_img());
    return result_diff;
}

#endif // COMPLEX_H
