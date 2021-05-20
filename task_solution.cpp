#include "task_solution.h"
#include "AuxiliaryStuff.h"
#include <iostream>

void fill(VContainer &myVector, MContainer &myMap) {
    RandomGenerator<std::size_t > sizeGen(minSize, maxSize);
    RandomGenerator<ValueType > valueGen(minValue, maxValue);

    std::size_t size = sizeGen();
    /*reserve вместо resize,
     * потому что так не тратится время
     * на дефолт конструкторы элементов внутри вектора
     */
    //at worst O(N) complexity
    myVector.reserve(size);
    //O(N) complexity
    pushElements(myVector, size, valueGen);
    //O(N) complexity
    pushElements(myMap, sizeGen(), valueGen);
}

void erase(VContainer &myVector, MContainer &myMap) {
    //возможно, создание 4 генераторов слишком расточительно, но задание такое позволяет
    //O(N) complexity
    eraseRandomRange(myVector);
    //at worst O(N) complexity
    eraseRandomRange(myMap);
}

void sync(VContainer &myVector, MContainer &myMap) {
    /* идея состоит в том, чтобы пройтись по вектору
     * и для каждого элемента вектора посмотреть, есть ли у него пара
     * среди непомеченных элементов мапы; если таковая находится,
     * пометить соответствующую ноду мапы, если нет, то переместить элемент вектор в конец;
     * после цикла убрать все лишние элементы вектора с конца и все непомеченные элементы мапы;
     * сложность такого решения должна быть квадратичной:
     * O(vecSize*(mapSize + C + log mapSize)) = O(vecSize * mapSize)
     * метка элементов мапы происходит при помощи присваивания ключам
     * заведомо больших значений, чем у непомеченных элементов,
     * при этом помеченные элементы мапы залетают в её конец,
     * что удобно использовать для удаления тех, что не помечены
     */

    auto mapGarbageIterator = myMap.end();
    KeyType maxKeyVal = maxKeyValue(myMap);

    //возвращаем false, если найдено совпадение
    auto predicate =
            [&mapGarbageIterator
             , &myMap
             , maxKeyVal]
             (const ValueType &currentVal) -> bool {
        //ищем текущее значение в мапе
        //O(N)
        auto currentValueIterator = findValue(myMap.begin()
                , mapGarbageIterator, currentVal);
        //если нашли
        if (currentValueIterator != mapGarbageIterator) {
            //маркируем ноду, она улетает в конец мапы
            //O(2*log N) = O(log N)
            auto insertedIterator = markNode(myMap, currentValueIterator, maxKeyVal);
            /* если это первая найденная нода,
             * то выставляем mapGarbageIterator в неё;
             * поддерживаем mapGarbageIterator указывающим
             * на подходящий элемент с самым маленьким ключом
             */
            if (
            //если это первая вставка в конец
            mapGarbageIterator == myMap.end()
            || //или если у вставленного элемента ключ меньше, чем у mapGarbageIterator'а
            insertedIterator->first < mapGarbageIterator->first
            )
            {
                mapGarbageIterator = insertedIterator;
            }
            return false;
        } else {
            return true;
        }
    };

    //O(N) в moveToEndIf и O(N) в предикате, итого O(N^2)
    auto vecGarbageIterator = moveToEndIf(myVector.begin(), myVector.end(), predicate);

    //в векторе мусор оказывается в конце
    //O(N)
    myVector.erase(vecGarbageIterator, myVector.end());
    //в мапе в начале
    //at worst O(N)
    myMap.erase(myMap.begin(), mapGarbageIterator);
}

void makeAll() {
    VContainer vector{};
    MContainer map{};

    fill(vector, map);
    std::cout << "\nafter fill";
    show(vector, map);

    erase(vector, map);
    std::cout << "\nafter erase";
    show(vector, map);

    printNaiveIntersection(vector, map);

    sync(vector, map);
    std::cout << "\nafter sync";
    show(vector, map);
}
