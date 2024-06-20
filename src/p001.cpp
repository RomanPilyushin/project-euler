#include "p001.h"

std::string p001::run() {
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    return std::to_string(sum);
}
