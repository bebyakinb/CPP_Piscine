#include <iostream>
#include <unistd.h>

typedef struct __attribute__((packed)) {
	std::string s1;
	int i;
	std::string s2;
}  Data ;

std::string randString(){
	std::string randStr = "";
	int strlen;

	strlen = rand() % 5 + 5;
	while (strlen)
	{
		randStr += rand() % 94 + 32;
		strlen--;
	}
	return randStr;
}

void * serialize(void){
	Data *data;

	data = new Data;
	srand(time(0));
	data->s1 = randString();
	std::cout << "Data->first string now is:" <<  data->s1 << std::endl;
	data->i = rand();
	std::cout << "Data->integer now is:" <<  data->i << std::endl;
	data->s2 = randString();
	std::cout << "Data->second string now is:" <<  data->s2 << std::endl;

	return reinterpret_cast<void*>(data);
}

Data * deserialize(void *raw){
	return reinterpret_cast<Data*>(raw);
}

int main(){
	void *ptr;
	Data *result;

	std::cout << "-------------- serialize result ----------" << std::endl;
	ptr = serialize();
	result = deserialize(ptr);
	std::cout << sizeof(*result) << std::endl;
	std::cout << "-------------- deserialize result ----------" << std::endl;
	std::cout << "Data->first string now is:" <<  result->s1 << std::endl;
	std::cout << "Data->integer now is:" <<  result->i << std::endl;
	std::cout << "Data->second string now is:" <<  result->s2 << std::endl;
	delete result;

	ptr = NULL;
	result = NULL;
	sleep(100);
	return 0;
}
