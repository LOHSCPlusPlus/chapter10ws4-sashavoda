#include "Rabbit.h"
class RabbitDataBase{
private:

enum {MAX_RABBITS = 50};
Rabbit rabbitArray[MAX_RABBITS];
int numRabbits;

public:
void read();
void print(ofstream &out, bool printIndex);
void save();
void remove();
void makeInvalid();
void add();
void makeRabbit();

}