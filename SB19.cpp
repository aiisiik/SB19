#include <iostream>
using namespace std;

class Animal {
public:
	virtual void Voice() {
		std::cout << "I am an animal" << endl;
	}
};

class Dog : public Animal {
public:
	void Voice() override {
		std::cout << "Woof!" << endl;
	}
};

class Cat : public Animal {
public:
	void Voice() override {
		std::cout << "Meow!" << endl;
	}
};

class Duck : public Animal {
public:
	void Voice() override {
		std::cout << "Quack!" << endl;
	}
};

class Horse : public Animal {
public:
	void Voice() override {
		std::cout << "Neigh!" << endl;
	}
};

int main()
{
	const int AnimalsCount = 4;
	Animal* animals[AnimalsCount];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Duck();
	animals[3] = new Horse();
	for (int i = 0; i < AnimalsCount; i++) {
		animals[i]->Voice();
	}
}