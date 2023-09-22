#include "Warlock.hpp"

int main(void)
{
	Warlock richard("Richard", "Master of the Universe");
	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;
	// Richard: I am Richard, Master of the Universe!
	// Richard - Master of the Universe
	richard.setTitle("Master of the Earth");
	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;
	// Richard: I am Richard, Master of the Earth!
	// Richard - Master of the Earth

	Warlock *jack = new Warlock("Jack", "the Long");
	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();
	
	const Warlock *astrid = new Warlock("Astrid", "the Whore");
	astrid->introduce();

	delete jack;
	delete astrid;
	return (0);
}
