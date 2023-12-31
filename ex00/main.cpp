#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
     Animal* j = new Dog();
     Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    const   WrongAnimal* metaWrong = new WrongAnimal();
    const   WrongAnimal* catWrong = new WrongCat();

    std::cout << catWrong->getType() << std::endl;
    metaWrong->makeSound();
    catWrong->makeSound();

    delete metaWrong;
    delete catWrong;

    return 0;
}
