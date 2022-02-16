#include "polymorphism.hpp"



// ---------------------------------------------------------------------------------------------------------//
												// Animal FUNCTIONSSS
// ---------------------------------------------------------------------------------------------------------//
Animal::Animal()
{
    std::cout << "Default Animal Constractor called" << std::endl;
}

 Animal::Animal( const Animal & src )
 {
     std::cout << "Copy Animal Constractor called" << std::endl;
 }

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destroctor called" << std::endl;
}

std::string Animal::getType()
{
    return type;
}

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}

// ---------------------------------------------------------------------------------------------------------//
												// Dooog FUNCTIONSSS
// ---------------------------------------------------------------------------------------------------------//

Dog::Dog()
{   
    type = "Dog";
	brain = new Brain();
    std::cout << "Default Dog Constractor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "bark" << std::endl;
}

 Dog::Dog( const Dog & src )
 {
	 type = src.type;
	 brain = src.brain;
     std::cout << "Copy Dog Constractor called" << std::endl;
 }
 
std::string Dog::getType()
{
    return type;
}

Dog::~Dog()
{
    std::cout << "Dog Destroctor called" << std::endl;
}

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}


// ---------------------------------------------------------------------------------------------------------//
												// Caaat FUNCTIONSSS
// ---------------------------------------------------------------------------------------------------------//

Cat::Cat()
{
    type = "Cat";
	brain = new Brain();
    std::cout << "Default Cat Constractor called" << std::endl;
}

 Cat::Cat( const Cat & src )
{
	type = src.type;
	brain = src.brain;
     std::cout << "Copy Cat Constractor called" << std::endl;
 }

void  Cat::makeSound() const
{
    std::cout << "miaw" << std::endl;
}

std::string Cat::getType()
{
    return type;
}


Cat::~Cat()
{
	delete brain;
    std::cout << "Cat Destroctor called" << std::endl;
}

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}

// ---------------------------------------------------------------------------------------------------------//
												// Brain FUNCTIONSSS
// ---------------------------------------------------------------------------------------------------------//

Brain::Brain()
{
    std::cout << "Default Brain Constractor called" << std::endl;
}

 Brain::Brain( const Brain & src )
{
     std::cout << "Copy Brain Constractor called" << std::endl;
 }


Brain::~Brain()
{
    std::cout << "Brain Destroctor called" << std::endl;
}

Brain &				Brain::operator=( Brain const & rhs )
{
	//  if ( this != &rhs )
	//  {
	//  	type = rhs.type;
	//  }
	return *this;
}

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
return (0);
}