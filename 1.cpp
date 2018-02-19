#include <iostream>
struct complex_t 
{ 
complex_t()
{
real=0.0f;
imag=0.0f;
}
complex_t add(complex_t other) const
{ 
complex_t result;
result.real=real+other.real;
result.imag=imag+other.imag;
return result;
}
std::istream &read( std::istream &stream )
{ return stream >> real >> imag;
}
std::ostream & write(std::ostream & stream )
{ return stream << real << imag;
}
float real;
float imag;
};

int main () 
{
complex_t a,b;
std::cout<<complex
if (read (std::cin,a)
