#include "Rabbit.h"

void Rabbit::print(ofstream &out){
    out << b.name << ";" << b.maxWeight << ";" << b.yearRecognized << ";" << b.isRare << endl;
}

void Rabbit::readFromUser(){
    cout << "Enter a rabbit name: ";
    if (cin.peek() == '\n') {
        cin.ignore(100, '\n');
    }
    cin.get(b.name, Rabbit::MAX_CHAR_LEN);
    maxWeight = readDouble("Enter max rabbit weight: ");
    yearRecognized = readInt("Enter year recognized: ");
    isRare = readBool("Is this rabbit rare (y/n)? ");
    isValid = true;
  
  }

void Rabbit::readFromFile(ifstream &inFile){ 
    inFile.get(name, Rabbit::MAX_CHAR_LEN, ';');
    inFile.ignore(100,';');
    inFile >> maxWeight;
    inFile.ignore(100,';');
    inFile >> yearRecognized;
    inFile.ignore(100,';');
    inFile >> isRare;
    inFile.ignore(100,'\n');
    // If we reached the end of the file while reading, then the entry is not valid
    rabbit.isValid = !inFile.eof();
}

void Rabbit::makeInvalid(){
  isValid = false;
}
