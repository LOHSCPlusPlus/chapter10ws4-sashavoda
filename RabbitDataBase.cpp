#include "RabbitDataBase.h"
#include "ReadUtils.h"

RabbitDataBase::RabbitDataBase(){
  numRabbits = 0;
  read();
}
void RabbitDataBase::read(){
    ifstream rabbitFile("rabbits.txt");
     numRabbits = 0;
    while(rabbitFile.peek() != EOF && numRabbits < MAX_RABBITS) {
        rabbits[numRabbits].readFromFile(rabbitFile); 
        numRabbits++;
    };
}

void RabbitDataBase::print(ostream &out, bool printIndex){
  for (int index = 0; index < MAX_RABBITS; index++) {
    if(rabbits[index].readValid()){
      if (printIndex) {
        out << "Index " << index << ": ";
        }
      rabbits[index].print(out);
    }
    }
}

void RabbitDataBase::save(){
    ofstream out("rabbits.txt");
    print(out, false);
}

void RabbitDataBase::remove(){
    int index = 0;
    do {
        index = readInt("Enter an index to remove between 0 and 500: ");
    }while (index < 0 || index >= MAX_RABBITS);
    rabbits[index].makeInvalid();
}

void RabbitDataBase::add(){
  for (int index = 0; index < MAX_RABBITS; index++) {
    if (rabbits[index].readValid() == false) {
      rabbits[index].readFromUser(); 
      return;
        }
}
  }