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
    Animal *animals[n];

    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "======================================================\n" << std::endl;
    Dog* animal2 = new Dog();
    Cat* animal3 = new Cat();
    animal2->getBrain()->setIdea(0, "hello");
    animal3->getBrain()->setIdea(0, "hi");
    Cat* animal4 = new Cat(*animal3);
    animal4->getBrain()->setIdea(0,"aporlo");
    
    std::cout  << ":: "<< animal2->getBrain()->getIdea(0) << std::endl;
    std::cout  << ":: "<< animal3->getBrain()->getIdea(0) << std::endl;
    std::cout  << ":: "<< animal4->getBrain()->getIdea(0) << std::endl;
    std::cout << "======================================================\n" << std::endl;
    delete animal2;
    delete animal3;
    delete animal4;
    std::cout << "======================================================\n" << std::endl;
    for (int i = 0; i < n; i++)
        delete animals[i];
    
    return 0;
}
