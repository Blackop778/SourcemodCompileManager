
#ifndef SRC_FORMATTER_FORMATTER_H_
#define SRC_FORMATTER_FORMATTER_H_

#include "../base/CompileResult.h"
#include <iostream>
#include <vector>

class Formatter {
public:
    static std::string ProcessResults(std::vector<CompileResult>, bool, bool);
};

#endif /* SRC_FORMATTER_FORMATTER_H_ */
