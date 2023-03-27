#ifndef PARSER_H
#define PARSER_H
#include "./ai.h"

class Parser {
    Parser(int argc, char** argv);
    AI* doParse();

public:
    static AI* parse(int argc, char** argv);
};

#endif
