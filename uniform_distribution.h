#ifndef TCTT_UNIFORM_DISTRIBUTION_H
#define TCTT_UNIFORM_DISTRIBUTION_H

#include <type_traits>
#include <random>

template<typename T>
constexpr bool isRandomlyGenerated = std::is_integral_v<T> || std::is_floating_point_v<T>;

template<typename T, bool Integral>
struct uniform_distribution;

template<typename T>
struct uniform_distribution<T, true> {
    using type = std::uniform_int_distribution<T>;
};

template<typename T>
struct uniform_distribution<T, false> {
    using type = std::uniform_real_distribution<T>;
};

//выдаёт real/int uniform distribution для типа T
template<typename T, typename = std::enable_if_t<isRandomlyGenerated<T> > >
using uniform_distribution_t = typename uniform_distribution<T, std::is_integral_v<T> >::type;

#endif //TCTT_UNIFORM_DISTRIBUTION_H
