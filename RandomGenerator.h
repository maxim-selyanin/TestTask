#ifndef TCTT_RANDOMGENERATOR_H
#define TCTT_RANDOMGENERATOR_H

#include "uniform_distribution.h"

template<typename T, typename = std::enable_if_t<isRandomlyGenerated<T> > >
class RandomGenerator {
    std::mt19937 gen;
    uniform_distribution_t<T> range;

public:
    RandomGenerator(T min, T max);
    T operator()();
};

template<typename T, typename Dummy>
T RandomGenerator<T, Dummy>::operator()() {
    return range(gen);
}

template<typename T, typename Dummy>
RandomGenerator<T, Dummy>::RandomGenerator(T min, T max)
 : gen(std::random_device()())
 , range(min, max)
{}

#endif //TCTT_RANDOMGENERATOR_H
