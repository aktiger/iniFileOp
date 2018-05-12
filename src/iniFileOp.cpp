//
// Created by thinking on 5/12/18.
//

#include "iniFileOp.h"

iniFileOp::iniFileOp(const string &name) noexcept {

    this->in = new ifstream(name);

}

std::vector<std::string> iniFileOp::getAllSections() {
    std::vector<std::string> sections ;
    sections.clear();

    if(!in->is_open()) {
        return sections;
    }
    string s;
    while (*in >> s) {
        size_t  start = s.find_first_of("[");
        if(string::npos != start) {
            size_t  end = s.find_first_of(']',start);
            if(string::npos != end) {
                string str = s.substr(start, end-start+1);
                sections.push_back(str);
            }
        }
    }
    return  sections;
}

iniFileOp::~iniFileOp() {
    (this->in)->close();
    delete in;
}
