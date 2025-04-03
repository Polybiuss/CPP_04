#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

int main(void){
	Animal* animaux[10];
	for (int i = 0; i < 5; i++)
		animaux[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animaux[i] = new Cat();
	for (int i = 0; i < 10; i++)
		animaux[i]->makeSound();
	for (int i = 0; i < 10; i++)
		delete animaux[i];
	return (0);
}