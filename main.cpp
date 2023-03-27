#include <memory>
#include "./ai.h"
#include "./parser.h"

int main(int argc, char** argv) {
    auto ai = std::make_unique<AI>(Parser::parse(argc, argv));
    ai->sendRequest();
    ai->showResponse();
}
