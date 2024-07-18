#pragma once
#ifndef KENNEL_H
#define KENNEL_H

#include "Dog.h"

class Kennel
{
private:
	static int kennelCount;
	//Dog* dogs;
public:
	static int getKennelCount();
	Kennel();
	void add(Dog d);
	void add(Dog dogs[], int size);
	Dog adoptDog();

};

#endif