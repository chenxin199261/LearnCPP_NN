#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "options_global.h"

using namespace std;

class NN{
  public :
    int n;
    double result;
    void build();
};

void NN::build(){
    cout << "build" << endl;
    cout << nLayer  << neuPerlayer[1] <<endl;
}
