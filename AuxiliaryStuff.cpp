#include "AuxiliaryStuff.h"
#include <iostream>

//functions just to assure correctness
void printNaiveIntersection(VContainer vector, MContainer map) {
    std::vector<ValueType > intersection{};
    std::vector<ValueType > mapValues;
    std::for_each(map.begin(), map.end(), [&mapValues](const std::pair<KeyType , ValueType> &node){
        mapValues.push_back(node.second);
    });
    std::sort(vector.begin(), vector.end());
    std::sort(mapValues.begin(), mapValues.end());
    std::set_intersection(vector.begin(), vector.end(),
                          mapValues.begin(), mapValues.end(), std::back_inserter(intersection));

    std::cout << "\nintersection\n";
    showVector(intersection);
}

//вывод контейнеров на экран
void show(const VContainer &vector, const MContainer &map) {
    std::cout << "\nvector\n";
    showVector(vector);

    std::cout << "\nmap\n";
    for (auto i: map) {
        std::cout << i.second << ' ';
    }
    std::cout << '\n';
}


void pushElements(VContainer &vector, std::size_t size, RandomGenerator<ValueType> &gen) {
    while (size--) {
        vector.push_back(gen());
    }
}
void pushElements(MContainer &map, std::size_t size, RandomGenerator<ValueType> &gen) {
    while (size--) {
        map.insert(std::make_pair(size, gen()));
    }
}

//выдаёт рандомные значения для количества удаляемых элементов и для их отступа от начала массива
std::size_t getRandomDeletionAmount(std::size_t containerSize, std::size_t min, std::size_t max) {
    //чтобы оставался как минимум 1 элемент в контейнере
    std::size_t deletionMax = (containerSize <= max)
            ? containerSize - 1
            : max
            ;
    RandomGenerator<std::size_t > generator(min, deletionMax);
    return generator();
}
std::size_t getRandomOffset(std::size_t containerSize, std::size_t deletionAmount) {
    RandomGenerator<std::size_t > generator(
            0
            , containerSize - deletionAmount
    );
    return generator();
}

//прибавляет к ключу ноды такое значение, чтобы ключ ноды стал больше ключей немаркированных нод
MContainer::iterator markNode(MContainer &container
                              , MContainer::iterator nodeIterator
                              , KeyType startingMaxKeyValue) {
    auto nodeHandler = container.extract(nodeIterator);
    KeyType mark = markValue(0, startingMaxKeyValue);
    nodeHandler.key() += mark;
    auto insertResult = container.insert(std::move(nodeHandler));
    return insertResult.position;
}

//возвращает значение маркировки при заданных минимальных и максимальных значениях ключа
KeyType markValue(KeyType minKey, KeyType maxKey) {
    return maxKey - minKey + 1;
}

//возвращает максимальное значение ключа в мапе
KeyType maxKeyValue(const MContainer &map) {
    return map.crbegin()->first;
}

//ищем value в мапе, если не находим, то возвращаем past-the-end итератор
MContainer::iterator findValue(MContainer::iterator begin, MContainer::iterator end, ValueType value) {
    for (auto i = begin; i != end; ++i) {
        if (i->second == value) {
            return i;
        }
    }
    return end;
}

//выводит вектор на экран
void showVector(const VContainer &vector) {
    for (ValueType v: vector) {
        std::cout << v << ' ';
    }
    std::cout << '\n';
}
