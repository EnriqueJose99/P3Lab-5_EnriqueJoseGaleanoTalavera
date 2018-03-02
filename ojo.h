#ifndef OJO_H
#define OJO_H
#include <string>
using namespace std;

class Ojo{
private:
  string colorOJ;
  bool visionNocturna;
public:
  Ojo();
  Ojo(string, bool);

  void setColorOJ(string);
  string getColorOJ();
  void setVisionNocturna(bool);
  bool getVisionNocturna();
};
#endif
