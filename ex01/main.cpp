#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int n  = 10;
    Animal* j = new Dog();
    Animal* i = new Cat();

    // Brain *brain;
    Animal *animals[n];

    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        std::cout << i << animals[i]->getType() << std::endl;
    }
    // brain = animals[7]->getBrain();
    // brain->_ideas[0] = "hello aporlo";
    // std::cout << animals[7]->getBrain()->_ideas[0] << std::endl;
    // for (int i = 0; i < n; i++)
    //     delete animals[i];


    delete i;
    delete j;

    return 0;
}
