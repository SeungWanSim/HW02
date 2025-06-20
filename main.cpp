/*-Animal이라는 기본 클래스를 정의 합니다.
-Animal 클래스에는 `makeSound()`라는 순수 가상 함수를 포함합니다.
- Animal 클래스를 상속받아 다양한 동물 클래스를 생성합니다.예) Dog, Cat, Cow
- 각 클래스에서 makeSound()함수를 재정의하여 해당 동물의 소리를 출력합니다.
- 메인 함수에서 Animal 타입의 포인터 배열을 선언합니다.
- Dog, Cat, Cow 자료형의 변수를 선언하고, 배열에 저장해봅니다.
- Animal 배열을 반복문으로 순회하면서 각 동물의 울음소리를 내게 합니다.
- 전체적인 구조는 아래와 같습니다.
*/
#include "animal.h"
#include<iostream>

using namespace std;

int main()
{
	const int SIZE = 3;
	Animal* animals[SIZE] = {};


	Dog myDog;
	Cat myCat;
	Cow myCow;

	animals[0] = &myDog;
	animals[1] = &myCat;
	animals[2] = &myCow;

	for (int i = 0; i < SIZE; i++)
	{
		animals[i]->makeSound(); 
	}
	return 0;
}