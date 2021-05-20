#ifndef TCTT_GLOBALDEFINITIONS_H
#define TCTT_GLOBALDEFINITIONS_H

#include <vector>
#include <map>

//types
using ValueType = int;
using KeyType = std::size_t;
using VContainer = std::vector<ValueType >;
using MContainer = std::map<KeyType , ValueType >;

//container size constraints
constexpr std::size_t minSize =
        10
        ;
constexpr std::size_t maxSize =
        25
        ;

//value constraints
constexpr ValueType minValue = 1;
constexpr ValueType maxValue = 9;

//amount of deleted elements constraint
constexpr std::size_t elementsToDeleteMin =
        1
        ;
constexpr std::size_t elementsToDeleteMax =
        15
        ;

#endif //TCTT_GLOBALDEFINITIONS_H
