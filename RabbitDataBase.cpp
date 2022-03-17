#include "RabbitDataBase.h"

RabbitDataBase();
RabbitDataBase::RabbitDataBase(){
  numRabbits = 0;
}
void RabbitDataBase::read(){
    ifstream rabbitFile("rabbits.txt");
     numRabbits = 0;
    while(rabbitFile.peek() != EOF && numRabbits < MAX_RABBITS) {
        rabbits[numRabbits] = readRabbit(rabbitFile);
        numRabbits++;
    };
}

void RabbitDataBase::print(ofstream &out, bool printIndex){
  for (int index = 0; index < MAX_RABBITS; index++) {
    if (rabbits[index].isValid) {
      if (printIndex) {
        out << "Index " << index << ": ";
        }
        printRabbit(out, rabbits[index]);
        } 
    }
}

void RabbitDataBase::save(){
    ofstream out("rabbits.txt");
    printRabbits(out, rabbits, false);
}

void RabbitDataBase::remove(){
    int index = 0;
    do {
        index = readInt("Enter an index to remove between 0 and 500: ");
    }while (index < 0 || index >= MAX_RABBITS);
    rabbits[index].isValid = false;
}

void RabbitDataBase::makeInvalid(){
  
}

void RabbitDataBase::add(){
  for (int index = 0; index < MAX_RABBITS; index++) {
    if (rabbits[index].isValid == false) {
      rabbitArray[index].readFromUser(); 
      return;
        }
}
  }