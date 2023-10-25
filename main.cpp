#include <iostream>
#include <cstdlib>
#include <ctime>


#include "game.hpp"


int main()
{
      // this line is neede for random numbers, without this line the random number is choosen one time and then its locked and
      // and every single time you restart the programm the random number would be the same
      srand(static_cast<unsigned>(time(0)));

      gameLoop();

      return 0;
}