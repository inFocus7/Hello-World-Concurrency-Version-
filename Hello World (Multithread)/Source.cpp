#include <iostream>
#include <thread> //Include thread library

void hello()
{
	std::cout << "Hello Concurrent World\n";
}

int main() //THREAD 1: int main, standard thread.
{
	std::thread hw(hello); //THREAD 2: object hw - type thread - hello() serves as thread's initial function.
	hw.join(); //joins in thread causing main to wait until "hw" executes.

	system("pause"); //bad practice
	return 0;
}