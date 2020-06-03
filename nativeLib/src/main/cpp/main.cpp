#include <iostream>
#include "test_hello.h"
#include <boost/chrono.hpp>
#include <boost/lexical_cast.hpp>

// when building boost we persisted the NDK version used (BOOST_BUILT_WITH_NDK_VERSION) in this custom header file
#include <boost/version_ndk.hpp>

using namespace std;

int main() {
    std::cout << "Hello " << TestHello("Leon").sayHi() << std::endl;
    string Str = "Hello from C++\n";

    //-------------------------------------
    boost::chrono::system_clock::time_point p = boost::chrono::system_clock::now();
    std::time_t t = boost::chrono::system_clock::to_time_t(p);

    char buffer[26];
    ctime_r(&t, buffer);

    //  std::string tst = std::to_string(3);

    int ver = BOOST_VERSION;
    int ver_maj = ver / 100000;
    int ver_min = ver / 100 % 1000;
    int ver_pat = ver % 100;

    string Ver_Maj = boost::lexical_cast<string>(ver_maj);
    string Ver_Min = boost::lexical_cast<string>(ver_min);
    string Ver_Pat = boost::lexical_cast<string>(ver_pat);

    Str += "Boost version: " + Ver_Maj + "." + Ver_Min + "." + Ver_Pat + "\n";

    Str += "built with NDK version: " + string(BOOST_BUILT_WITH_NDK_VERSION) + "\n";

#if defined(__ANDROID_API__)
    Str += "native Api level: " + std::to_string(__ANDROID_API__) + "\n ";
#endif

    Str += "\n";
    Str += "Boost chrono says time is \n" + std::string(buffer) + "\n\n";
    cout << Str << endl;
    return 0;
}