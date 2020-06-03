//
// Created by Leon on 2020/5/30.
//

#ifndef NATIVE_LIB_TEMPLETE_TEST_HELLO_H
#define NATIVE_LIB_TEMPLETE_TEST_HELLO_H


#include <string>

class TestHello {
public:
    TestHello(std::string name);

    std::string sayHi();

protected:
    std::string name;
};


#endif //NATIVE_LIB_TEMPLETE_TEST_HELLO_H
