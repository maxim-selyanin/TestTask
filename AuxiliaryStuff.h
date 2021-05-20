#ifndef TCTT_AUXILIARYSTUFF_H
#define TCTT_AUXILIARYSTUFF_H

#include "GlobalDefinitions.h"
#include "RandomGenerator.h"
#include <iostream>

//naive auxiliary function
void printNaiveIntersection(VContainer vector, MContainer map);

//show vector
void showVector(const VContainer &vector);
//show result
void show(const VContainer &vector, const MContainer &map);

//pushing elements to containers
//O(N) complexity
void pushElements(VContainer &vector, std::size_t size, RandomGenerator<ValueType> &gen);
//O(N * log(N)) complexity
void pushElements(MContainer &map, std::size_t size, RandomGenerator<ValueType> &gen);

//рандомно сгенерировать количество удаляемых элементов
std::size_t getRandomDeletionAmount(std::size_t containerSize, std::size_t min, std::size_t max);
//рандомно сгенерировать отступ удаляемого диапазона от начала контейнера
std::size_t getRandomOffset(std::size_t containerSize, std::size_t deletionAmount);

//удаляет рандомный диапазон из массива
template<typename Container>
void eraseRandomRange(Container &container);

/* перемещает в конец все удовлетворяющие предикату элементы массива
 * и возвращает указатель на первый такой элемент,
 * то есть past-the-end указатель для не удовлетворяющих предикату элементов
 */
template<typename Iterator, typename Functor>
Iterator moveToEndIf(Iterator begin, Iterator end, Functor predicate);

//маркирует ноду; итератор должен быть разыменовываемым, то есть не end()
MContainer::iterator markNode(MContainer &container
                              , MContainer::iterator nodeIterator
                              , KeyType startingMaxKeyValue);

//значение, на которое увеличиваются ключи, чтобы их маркировать
KeyType markValue(KeyType minKey, KeyType maxKey);

//максимально возможное изначальное значение ключа в мапе
KeyType maxKeyValue(const MContainer &map);

//найти значение в мапе
MContainer::iterator findValue(MContainer::iterator begin, MContainer::iterator end, ValueType value);








template<typename Iterator, typename Functor>
Iterator moveToEndIf(Iterator begin, Iterator end, Functor predicate)
{
    while (begin != end) {
        if (predicate(*begin)) {//перемещаем i-тый элемент в конец
            //теперь end указывает на последний рассматриваемый элемент
            std::advance(end, -1);
            std::swap(*begin, *end);
        } else {//оставляем элемент на своём месте и идём к следующему
            std::advance(begin, 1);
        }
    }
    return end;
}

template<typename Container>
void eraseRandomRange(Container &container) {
    std::size_t deletionAmount = getRandomDeletionAmount(container.size(), elementsToDeleteMin, elementsToDeleteMax);
    std::size_t deletionOffset = getRandomOffset(container.size(), deletionAmount);

    auto startIterator = container.begin();
    std::advance(startIterator, deletionOffset);
    auto endIterator = startIterator;
    std::advance(endIterator, deletionAmount);

    //O(N) complexity
    container.erase(startIterator, endIterator);
}

#endif //TCTT_AUXILIARYSTUFF_H
