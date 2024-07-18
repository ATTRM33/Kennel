#include "Kennel.h"

int Kennel::getKennelCount() {
	return kennelCount;
}
Kennel::Kennel() {
	kennelCount = 0;
	dogs = new Dog[0];
}
void Kennel::add(Dog d) {
	kennelCount++;
}

void Kennel::add(Dog dogs[],int num) {
	for (int i = 0; i < num; i++) {
		add(dogs[i]);
	}
}

Dog Kennel::adoptDog() {

	kennelCount++;
}
