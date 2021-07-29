#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class NN{
  public :
    int n;
    double result;
    void build(unsigned short int nl, unsigned short int nL[]);
};

void NN::build(unsigned short int nlayer, unsigned short int neupLay[]){
        cout << "build" << endl;
        cout << nlayer << neupLay[1]<<endl;
        }
