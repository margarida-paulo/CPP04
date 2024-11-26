#ifndef CAT
# define CAT

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal{
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat &operator=(const Cat &other);
		void makeSound() const;
};

#endif
