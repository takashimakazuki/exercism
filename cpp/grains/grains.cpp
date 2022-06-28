#include <cmath>
#include "grains.h"

namespace grains {
    unsigned long long square(unsigned long long sq_num) {
        return pow(2, sq_num-1);
    }

    unsigned long long total() {
        return (1 * (1-powl(2, 64))) / (1-2);
    }
}  // namespace grains
