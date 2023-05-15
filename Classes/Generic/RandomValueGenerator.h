//
// Created by x on 2022-12-19.
//

#ifndef PROJEKT_PO_RANDOMVALUEGENERATOR_H
#define PROJEKT_PO_RANDOMVALUEGENERATOR_H

#include <random>
#include <iostream>

template <typename  T>

class RandomValueGenerator {

public:
    explicit RandomValueGenerator();
    T generateRandomValue(T lower_range, T upper_range);
};

template<typename T>
T RandomValueGenerator<T>::generateRandomValue(T lower_range, T upper_range) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dist(lower_range,upper_range);
    return dist(gen);
}

template<typename T>
RandomValueGenerator<T>::RandomValueGenerator() = default;


#endif //PROJEKT_PO_RANDOMVALUEGENERATOR_H
