#include <string>
#include <iostream>
#include <regex>
#include <vector>

using namespace std;

/**
 * @brief stringTools: trim string
 * @author Xin Chen
 *
 * @date 2021/7/24 (create)  0 dev_edu
 * @version 0 dev_edu
 * @param[in]  str     Input string has head or tail with space.
 * @param[out] trimStr Input string remove space on head or tail.
 *
 */
string trimStr(string str){
    return regex_replace(str, regex("(^[ ]+)|([ ]+$)"),"");
}


/**
 * @brief stringTools: trim string
 * @author Xin Chen
 *
 * @date 2021/7/24 (create)  0 dev_edu
 * @version 0 dev_edu
 * @param[in]  str        Input string with multi words.
 * @param[in]  delimiter  Delimiter to split string.
 * @param[out] words      Vectors of splitted array.
 *
 */

vector<string>  splitStr(const string& str,const string& delim) { 
    vector<string> res;
    if("" == str) return  res;
    
    string strs = str + delim;
    size_t pos;
    size_t size = strs.size();

 
    for (int i = 0; i < size; ++i) {
        pos = strs.find(delim, i);
        if(strs[i] == ' ') continue; 
        if( pos < size) { 
            string s = strs.substr(i, pos - i);
            res.push_back(s);
            i = pos + delim.size() - 1;
        }
    }
    return res;
}


