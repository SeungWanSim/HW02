#ifndef ANIMAL_H
#define ANIMAL_H



class Animal
{
public:
	virtual void makeSound() = 0;
};

class Dog : public Animal
{
public:
		void makeSound() override;
};

class Cat : public Animal
{
public:
	void makeSound() override;
};

class Cow : public Animal
{
public:
	void makeSound() override;
};

#endif
