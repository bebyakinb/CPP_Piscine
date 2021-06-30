#include "Convert.hpp"


Convert::Convert(){}

void *Convert::GetCurrentType(std::string const &value){
	char *endPtr;
	const char *cValue;
	double doubleValue;

	endPtr = NULL;
	cValue = value.c_str();
	doubleValue = std::strtod(cValue, &endPtr);

	if (cValue == endPtr && value.length() == 1){//char - done
		printChar(cValue[0], 1);
		printInt(static_cast<int>(cValue[0]), 1);
		printFloat(static_cast<float>(cValue[0]), 1);
		printDouble(static_cast<double>(cValue[0]), 1);
	}
	else if (cValue == endPtr) { // empty line or just a string
		printAllImpossible();
	}
	else if (errno == ERANGE){ // overflow float
		errno = 0;
		printAllImpossible();
	}
	else if (*endPtr == 'f' && *(endPtr + 1) == '\0'){//float -done
		*endPtr = '\0';
		GetFloatType(cValue);
	}
	else if (*endPtr){ // symbols after num
		printAllImpossible();
	}
	else if (value.find('.',0) == std::string::npos
			&& strcmp(cValue, "-inf") != 0 && strcmp(cValue, "+inf") != 0 &&
			strcmp(cValue, "nan") != 0){ //int
		if (!isIntOverflow(doubleValue)){
			printChar(static_cast<char>(doubleValue), !isCharOverflow
			(doubleValue));
			printInt(static_cast<int>(doubleValue), 1);
			printFloat(static_cast<float>(doubleValue), 1);
			printDouble(static_cast<double>(doubleValue), 1);
		}
		else { // int overflow
			std::cout << "что за кейс3?" << std::endl;
			printAllImpossible();
		}
	}
	else if (strcmp(cValue, "nan") == 0){ //double nan
		printChar(static_cast<char>(doubleValue), 0);
		printInt(static_cast<int>(doubleValue), 0);
		printFloat(static_cast<float>(doubleValue), 1);
		printDouble(static_cast<double>(doubleValue), 1);
	}
	else{ //double inf
		printChar(static_cast<char>(doubleValue), !isCharOverflow
				(doubleValue));
		printInt(static_cast<int>(doubleValue), !isIntOverflow
				(doubleValue));
		printFloat(static_cast<float>(doubleValue), 1);
		printDouble(static_cast<double>(doubleValue), 1);
	}
	return (void*)0;
}


void *Convert::GetFloatType(char const *cValue){
	char *endPtr;
	double doubleValue;

	endPtr = NULL;
	doubleValue = std::strtod(cValue, &endPtr); // переполнение double
	if (errno == ERANGE){
		errno = 0;
		printAllImpossible();
	} else if ((!isFloatOverflow(doubleValue) && strcmp(cValue, "nan") != 0)
			|| strcmp(cValue, "-inf") == 0 || strcmp(cValue, "+inf") == 0){
		printChar(static_cast<char>(doubleValue), !isCharOverflow(doubleValue));
		printInt(static_cast<int>(doubleValue), !isIntOverflow(doubleValue));
		printFloat(static_cast<float>(doubleValue), 1);
		printDouble(static_cast<double>(doubleValue), 1);
	} else if (strcmp(cValue, "nan") == 0){
		printChar(static_cast<char>(doubleValue), 0);
		printInt(static_cast<int>(doubleValue), 0);
		printFloat(static_cast<float>(doubleValue), 1);
		printDouble(static_cast<double>(doubleValue), 1);
	} else { // переполнение float
		std::cout << "что за кейс5?" << std::endl;
		printAllImpossible();
	}
	return (0);
}

Convert::Convert(std::string value){
	GetCurrentType(value);
}

Convert::~Convert(){}

Convert::Convert(Convert const &other){
	*this = other;
}

Convert			&Convert::operator=(Convert const &other){
	(void)other;
	return *this;
}

bool	Convert::isCharOverflow(double d){
	return (d >= std::numeric_limits<char>::max()
			|| d <=	std::numeric_limits<char>::min());
}

bool	Convert::isIntOverflow(double d){
	return (d >= std::numeric_limits<int>::max()
			|| d <=	std::numeric_limits<int>::min());
}

bool	Convert::isFloatOverflow(double d){
	return (d >= std::numeric_limits<float>::max()
			|| d <=	std::numeric_limits<float>::min());
}


void	Convert::printChar(char c, bool possible){
	std::cout << "char : ";
	if (!possible){
		std::cout << "impossible";
	} else if (c < 32 || c > 127){
		std::cout << "Non displayable";
	} else {
		std::cout << c;
	}
	std::cout << std::endl;
}

void	Convert::printInt(int i, bool possible){
	std::cout << "int : ";
	if (possible){
		std::cout << i;
	} else {
		std::cout << "impossible";
	}
	std::cout << std::endl;
}

void	Convert::printFloat(float f, bool possible){
	std::cout << "float : ";
	if (!possible){
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << f;
	if (f == (int)f){
		std::cout << ".0";
	}
	std::cout << "f" << std::endl;
}

void	Convert::printDouble(double d, bool possible){
	std::cout << "double : ";
	if (!possible){
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << d;
	if (d == (int)d){
		std::cout << ".0";
	}
	std::cout << std::endl;
}

void 	Convert::printAllImpossible(){
	printChar('\0', 0);
	printInt(0, 0);
	printFloat(0, 0);
	printDouble(0, 0);
}