#include "reverse_string.h"

#include <iostream>
namespace reverse_string {
    std::string reverse_string(const std::string str)
    {
        std::string reverse = "";
        for (int i = str.length()-1; i >=0; i--)
        {
            reverse.push_back(str[i]);
        }
        return reverse;
    }
}  // namespace reverse_string
