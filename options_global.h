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
extern short unsigned int runType;    // Program run-type 1: Train+inference
extern short unsigned int debugLv;    // Debug level

extern short unsigned int nLayer;     // number of layers
extern short unsigned int neuPerlayer[maxLayer]; // number of neurons per layer

extern string inputfile;      // Input file 
extern string paramfile;      // Input parameter files
