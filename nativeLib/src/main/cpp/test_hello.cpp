//
// Created by Leon on 2020/5/30.
//

#include "test_hello.h"

#include <utility>

TestHello::TestHello(std::string name) : name(std::move(name)) {}

std::string TestHello::sayHi() {
    return name;
}
