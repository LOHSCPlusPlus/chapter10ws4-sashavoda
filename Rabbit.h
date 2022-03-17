class rabbit{
private:

    enum {MAX_CHAR_LEN=100};
    char name[MAX_CHAR_LEN];
    double maxWeight;
    int yearRecognized;
    bool isRare;
    bool isValid;
public:
  void print(ofstream &out);
  void readFromUser();
  void readFromFile(ifstream &inFile);
  void makeInvalid();
}