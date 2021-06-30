#include <cstdlib>
#include <iostream>
#include <ctime>
class Base{
	public:
		virtual ~Base() {}
};
class A : public Base {};
class B : public Base {};
class C : public Base {};
Base * generate(void){
	int rand_val;
	std::srand(std::time(0)); //use current time as seed for random generator
	rand_val = std::rand() % 3;
	if (rand_val == 0){
		std::cout << "A instance generated" << std::endl;
		return new A;
	}	
	else if (rand_val == 1){
		std::cout << "B instance generated" << std::endl;
		return new B;
	}
	else {
		std::cout << "C instance generated" << std::endl;
		return new C;
	}
}
void identify_from_pointer( Base * p) {
	if (!p) {
		std::cout << "passed parameter is NULL";
		return;
	}
	if (dynamic_cast<A*>(p)) {
		std::cout << "A";
	}
	else if (dynamic_cast<B*>(p)) {
		std::cout << "B";
	}
	else if (dynamic_cast<C*>(p)) {
		std::cout << "C";
	}
}
void identify_from_reference( Base & p){
	try{
		A   &cl_a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(cl_a);
	}
	catch  (...){
		;//std::cout << "Failed to cast A" << std::endl;
	}
	try{
		B   &cl_b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(cl_b);
	}
	catch (...){
		;//std::cout << "Failed to cast B" << std::endl;
	}
	try
	{
		C   &cl_c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(cl_c);
	}
	catch (...)
	{
		;//std::cout << "Failed to cast C" << std::endl;
	}
}

int main(){
	Base *rand_base;
	B b_base;
	Base &rParent = reinterpret_cast<Base &>(b_base);
	Base *pParent = reinterpret_cast<Base *>(&b_base);

	std::cout << "------- checking with generate function -------" << std::endl;
	rand_base = generate();
	std::cout << "identify_from_pointer: ";
	identify_from_pointer(rand_base);
	std::cout << std::endl;
	std::cout << "identify_from_reference: ";
	identify_from_reference(*rand_base);
	std::cout << std::endl;
	std::cout << "------- checking with B allocated on stack -------" << std::endl;
	std::cout << "identify_from_pointer: ";
	identify_from_pointer(&rParent);
	std::cout << std::endl;
	std::cout << "identify_from_reference: ";
	identify_from_reference(rParent);
	std::cout << std::endl;
	std::cout << "identify_from_pointer: ";
	identify_from_pointer(pParent);
	std::cout << std::endl;
	std::cout << "identify_from_reference: ";
	identify_from_reference(*pParent);
	std::cout << std::endl;
	std::cout << "------- checking with NULL value -------" << std::endl;
	std::cout << "identify_from_pointer: ";
	identify_from_pointer(NULL);
	std::cout << std::endl;
	return (0);
}