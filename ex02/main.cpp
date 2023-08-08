#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* j = new Dog();
    Animal* i = new Cat();

    delete i;
    delete j;

    std::cout << "======================================================\n" << std::endl;
    int n  = 4;
    Brain *brain;
    Animal *animals[n];

    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "======================================================\n" << std::endl;

    brain = animals[1]->getBrain();
    brain->getIdea(0) = "hello";
    std::cout << animals[1]->getType() << ":: "<< animals[1]->getBrain()->getIdea(0) << std::endl;
    std::cout << animals[2]->getType() << "::";
    animals[2]->makeSound();
    std::cout << "======================================================\n" << std::endl;
    for (int i = 0; i < n; i++)
        delete animals[i];
    return 0;
}
