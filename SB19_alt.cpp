#include <iostream>
#include <string>
#include <random>

const int NamesCount = 15;
const std::string Names[NamesCount] =
{ "Bella","Max","Luna","Charlie","Lucy","Cooper","Daisy","Milo","Zoe","Rocky","Hana","Yumi","Pikachu","Yuki","Nami"};
const int VoicesCount = 18;
const std::string AnimalType[VoicesCount] =
{ "cat","dog","horse","goat","pig","cow","donkey","chicken","rooster",
"bird","owl","duck","goose","gobble","mosquitoe","cricket","frog","lion" };
const std::string Voices[VoicesCount] =
{ "meow","woof","neigh","baa","oink","moo","hee-haw","cluck","cock-a-doodle-do",
"chirp","Hoot","quack","honk","gobble","buzz","chirp","ribbit","roar" };



class Animal{
public:
	Animal(std::string _Name = "Animal", std::string _VoiceText = "...") : Name(_Name), VoiceText(_VoiceText) {
		Name = Names[rand()% NamesCount];
		VoiceText = Voices[rand() % VoicesCount];
	}
	virtual void Voice(){
		std::cout << Name <<" said: " << VoiceText << std::endl;
	};
	std::string GetName() {
		return Name;
	}
private:
	std::string VoiceText;
	std::string Name;
};

class Dog : Animal{
public:
	Dog (){}
	void Voice() override{
		std::cout << GetName() << " said: " "Woof!" << std::endl;
	};
};


class Cat : Animal{
public:
	Cat() {}
	void Voice() override {
		std::cout << GetName() << " said: " "Meow!" << std::endl;
	};
};

int main(){
	Animal* arr[3];
	arr[0] = new Dog();
	arr[1] = new Cat();
	arr[2] = new Cow();

	for (int i = 0; i < 3; i++) {
		arr[i]->Voice();
	}

	const int AnimalsCount = 10;
	Animal* animals[AnimalsCount];


	for (int i = 0; i < AnimalsCount; i++) {
		switch (rand() % 3)
		{
		case 0: animals[i] = new Dog();
		default: animals[i] = new Animal();
		}
	}


}
