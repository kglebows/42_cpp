/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:12:33 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/17 17:12:31 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
std::cout << "************************************************" << std::endl;
const Animal* dog = new Dog();
std::cout << std::endl;
const Animal* cat = new Cat();
std::cout << std::endl;
delete dog;
std::cout << std::endl;
delete cat;
std::cout << "************************************************" << std::endl;
const Dog* dog2 = new Dog();
std::cout << std::endl;
const Cat* cat2 = new Cat();

std::cout << std::endl;

dog2->getBrain()->addIdea("Food!");
dog2->getBrain()->addIdea("Play!");
dog2->getBrain()->addIdea("Chase!");
std::cout << std::endl;

cat2->getBrain()->addIdea("World Domination!");
cat2->getBrain()->addIdea("Dogs Are Stupid!");
cat2->getBrain()->addIdea("Catnip!");
std::cout << std::endl;

std::cout << "Lets peek into the Dogs brain..."<< std::endl;
dog2->getBrain()->sayIdeas();
std::cout << std::endl;
std::cout << "Nice! now lets look into Cats..."<< std::endl;
cat2->getBrain()->sayIdeas();
std::cout << "************************************************" << std::endl;
std::cout << std::endl;

const Dog* dog3 = new Dog(*dog2);

std::cout << std::endl;

std::cout << "Lets peek into the Copy Dog brain..."<< std::endl;
dog3->getBrain()->sayIdeas();

std::cout << std::endl;
std::cout << "************************************************" << std::endl;
std::cout << std::endl;
Cat* cat3 = new Cat();
std::cout << std::endl;
*cat3 = *cat2;
std::cout << std::endl;
std::cout << "Copy Cat!"<< std::endl;
cat3->getBrain()->sayIdeas();
std::cout << std::endl;


std::cout << "************************************************" << std::endl;
std::cout << std::endl;
std::cout << "I don't really like that cat... lets fix it" << std::endl;
*cat3->getBrain() = *dog3->getBrain();
std::cout << std::endl;
std::cout << "That should fix it! Lets see..."<< std::endl;
cat3->getBrain()->sayIdeas();
std::cout << std::endl;

std::cout << "Much better!"<< std::endl;
std::cout << "************************************************" << std::endl;
delete dog2;
std::cout << std::endl;
delete cat2;
std::cout << std::endl;
delete dog3;
std::cout << std::endl;
delete cat3;

std::cout << "************************************************" << std::endl;
return 0;
} 