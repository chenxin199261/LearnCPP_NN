#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "options_global.h"
using namespace std;

void prtWelcome();
void readInputfile();
string trimStr(string str);
vector<string>  splitStr(const string& str,const string& delim); 

/**  
 * The main entrance of this program
 * The common should be organized in CPP style. 
 *
 * @brief Entrance of the learning program.
          This program is a neural-network program. 
 * @author Xin Chen
 *
 * @date 2021/7/23 (create)  0 dev_edu
 * @version 0 dev_edu
 */

int main(int argc,char* argv[]){
//  1. Read inputfile
    if (argc ==1){
        std::cout << "Please provide input file name" << endl;
        return 0;
    }
    else{
        inputfile = argv[1];
    }

    readInputfile();

//  2. Build NN

//  3. Print basic informations
    prtWelcome();

//  4. Train NN
    
//  5. Test NN

//  
    return 0;
}


/**
 * @brief read input file
 * @author Xin Chen
 *
 * @date 2021/7/24 (create)  0 dev_edu
 * @version 0 dev_edu
 *
 */
void readInputfile(){   
    ifstream infile(inputfile);
    vector<string> NNstruct;

    // set neuPerlayer to -1
    for (int i=0; i<maxLayer ; i++ ){
       neuPerlayer[i] = -1;
    }
    if(!infile){
        std::cout << "No such file" << inputfile <<endl;
        exit(1);
    }
    else{
        string tempstring;
        vector<string> words_split;
        // parse inputfile
        while (!infile.eof()){ 
            std::getline(infile, tempstring);
            tempstring = trimStr(tempstring);  // Remove space or something out
            if (tempstring[0]=='#') continue;  // Skip common in inputfile
            words_split = splitStr(tempstring," ");
            if(words_split.size() == 0 ) continue;

            // Parse number of layers
            if(words_split[0] == "nlayers") nLayer = std::stoi(words_split[1]);

            // Parse number of neurons per layer
            if(words_split[0] == "neuronslayer") NNstruct = words_split;

            // Parse running type
            if(words_split[0] == "type") runType = std::stoi(words_split[1]);
           
            // Parse debug 
            if(words_split[0] == "debug") debugLv = std::stoi(words_split[1]);

            // Parse parameter files
            if(words_split[0] == "parafile ") paramfile = words_split[1];
        }
    }
    // Build neuPerlayer
    for (int i=1; i< NNstruct.size(); i++ ){
       neuPerlayer[i-1] =std::stoi( NNstruct[i] );
    }



    infile.close();
}

/**
 * @brief Print welcome information
 * @author Xin Chen
 *
 * @date 2021/7/24 (create)  0 dev_edu
 * @version 0 dev_edu
 *
 */
void prtWelcome(){   
    std::cout << "+++++++++++++++++++++++++++++" << endl << endl;
    std::cout << "This is a C++ learning pogram" << endl;
    std::cout << "Realizing a neural network " << endl;
    std::cout << "+++++++++++++++++++++++++++++" << endl << endl;
    std::cout << "The input file is : "<<  inputfile  << endl;
    std::cout << "The run type is   : "<<  runType  << endl;
    std::cout << "The debug type is : "<<  debugLv  << endl;
    std::cout << "The layer of NN is: "<<  nLayer  << endl ;
    std::cout << "The number of neurons per layer: "  << endl ;
    cout << "[  "; 
    for (int i=0; i<nLayer ; i++ ){
       cout << neuPerlayer[i]<<"  ";
    }
    cout <<']'  << endl;
}
