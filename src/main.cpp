#include "./ai.h"
#include "./parser.h"

int main(int argc, char** argv) {
    AI* ai(Parser::parse(argc, argv));
    ai->sendRequest();
    ai->showResponse();
    delete ai;
}
