/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:12:33 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 14:23:52 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

// int	main()
// {
// 	Animal		Animal;
// 	Cat			Cat;
// 	Dog			Dog;

// 	Animal.makeSound();
// 	Cat.makeSound();
// 	Dog.makeSound();
// 	Animal.makeSound();
// }

int main()
{
std::cout << "************************************************" << std::endl;
const Animal* animal = new Animal();
const Animal* dog = new Dog();
const Animal* cat = new Cat();

std::cout << std::endl;

const WrongAnimal* wrongAnimal = new WrongAnimal();
const WrongAnimal* wrongDog = new WrongDog();
const WrongAnimal* wrongCat = new WrongCat();

std::cout << std::endl;

std::cout << "Animal type :" << animal->getType() << ":" << std::endl;
std::cout << "Dog type :" << dog->getType() << ":" << std::endl;
std::cout << "Cat type :"  << cat->getType() << ":" << std::endl;
std::cout << "WrongAnimal type :" << wrongAnimal->getType() << ":" << std::endl;
std::cout << "WrongDog type :" << wrongDog->getType() << ":" << std::endl;
std::cout << "WrongCat type :"  << wrongCat->getType() << ":" << std::endl;

std::cout << std::endl << "now lets hear them! Animal -> Dog -> Cat :" << std::endl;
animal->makeSound();
dog->makeSound();
cat->makeSound();

std::cout << std::endl << "now lets hear the wrong ones! Animal -> Dog -> Cat :" << std::endl;
wrongAnimal->makeSound();
wrongDog->makeSound();
wrongCat->makeSound();

std::cout << std::endl;
delete animal;
delete dog;
delete cat;
std::cout << std::endl;
delete wrongAnimal;
delete wrongDog;
delete wrongCat;
std::cout << "************************************************" << std::endl;
return 0;
}