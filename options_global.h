/**  
 * Neural network options
 * 
 *
 * @brief network options
 * @author Xin Chen
 * @param nLayer  number of layers
 * @param neuPerlayer  // number of neurons per layer
 * @date 2021/7/24 (create)  0 dev_edu
 * @version 0 dev_edu
 */
#include <string>

#define maxLayer 200       // maxinum number of layers


using namespace std;
short unsigned int runType = 1;                // Program run-type 1: Train+inference
short unsigned int debugLv = 0;                // Debug level

short unsigned int nLayer = 5;                 // number of layers
short unsigned int neuPerlayer[maxLayer] = {5,5,5,5,5}; // number of neurons per layer

string inputfile = "none";      // Input file 
string paramfile = "none";      // Input parameter files
