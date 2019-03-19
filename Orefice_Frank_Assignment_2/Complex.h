#ifndef COMPLEX_H
#define COMPLEX_H

namespace Frank_Orefice_CCNY_csc212_Complex{
	class Complex
	{
   		public:
        	Complex(int r = 0, int i = 0);
        	void print();
        	void compare(Complex& x);
        	int get_real() const;
        	int get_img() const;
        	void shift(int d_real = 0, int d_img = 0);

    	private:
        	int real;
        	int img;
	};

	Complex complex_add(const Complex& x, const Complex& y);
	Complex complex_sub(const Complex& x, const Complex& y);
}

// Question 7: add and subtract are better to be non-member functions because they
// don't need to change the member variables of the two objects. Shift needs to be
// a member function because it needs to directly manipulate the object's member variables.

// Question 9: The name of the add and subtract methods are better to be 'complex_add' and
// 'complex_sub' because these names are descriptive as they are used to produce the sum and
// difference of the two Complex object's member variables. The name of the shift method should
// be shift because its a method that directly manipulates the object and doesn't require a
// second object like 'complex_add' and 'complex_sub'.

#endif
