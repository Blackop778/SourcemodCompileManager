
#ifndef BASE_COMPILER_H_
#define BASE_COMPILER_H_

#include "CompileResult.h"
#include <iostream>
#include <vector>

class Compiler {
public:
    static CompileResult CompileSingleFile(const std::string&, const std::string&, const std::string&);

    static std::vector<CompileResult> CompileDirectory(const std::string&, const std::string&);

    static bool StrEndsWith(const std::string&, const std::string&);
};

#endif /* BASE_COMPILER_H_ */
