#include <memory>
#include "./ai.h"
#include "./parser.h"

int main(int argc, char** argv) {
    std::unique_ptr<AI> ai(Parser::parse(argc, argv));
    ai->sendRequest();
    ai->showResponse();
}
