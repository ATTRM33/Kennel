//Zach Brown
//Date: 7/18/2024
//CS2 Exit Ticket

#include <iostream>
#include "Dog.h"
#include "Kennel.h"

using namespace std;

int main() {

	Dog myDog(3, "Chief", "Australian Sheppard");
	Dog yourDog(4, "Lady", "Basset Hound");

	Kennel kennel;

	cout << kennel.getKennelCount() << endl;
}