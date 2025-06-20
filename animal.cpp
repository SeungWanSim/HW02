#include "animal.h"
#include<iostream>

using namespace std;

void Dog::makeSound()
{
	cout << "멍멍 ~" << endl;
}

void Cat::makeSound()
{
	cout << "야옹~" << endl;
}

void Cow::makeSound()
{
	cout << "음매~" << endl;
}