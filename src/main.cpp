#include "iniFileOp.h"


int main() {
    iniFileOp *op = new iniFileOp("../tiny-yolo.cfg");
    std::vector<std::string> ret = op->getAllSections();

    if(!ret.empty()) {
        for (auto &vec : ret) {
            cout << vec << endl;
        }
    }
    delete op;

    return 0;
}