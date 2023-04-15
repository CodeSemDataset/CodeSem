#ifndef UTIL_H
#define UTIL_H
#include <iostream>
#include <string>
 
bool endsWith(std::string const &str, std::string const &suffix) {
    if (str.length() < suffix.length()) {
        return false;
    }
    return std::equal(suffix.rbegin(), suffix.rend(), str.rbegin());
}

#endif // end of CFG_STAT_H