#include <ctime>
#include <cstdlib>
#include "class.h"




int randomNumber(){
   srand(time(0));
   return (rand()% 10) + 1;
}
