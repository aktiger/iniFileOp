//
// Created by thinking on 5/12/18.
//



#ifndef INIFILEOP_INIFILEOP_H
#define INIFILEOP_INIFILEOP_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class iniFileOp {

public:
    std::vector<std::string> getAllSections();

    iniFileOp(const string &name) noexcept  ;

    ~iniFileOp();
private:
    std::ifstream * in;

};


#endif //INIFILEOP_INIFILEOP_H
