#include "Rabbit.h"
class RabbitDataBase{
private:

enum {MAX_RABBITS = 50};
Rabbit rabbits[MAX_RABBITS];
int numRabbits;

public:
RabbitDataBase();
void read();
void print(ostream &out, bool printIndex);
void save();
void remove();
void makeInvalid();
void add();
};
