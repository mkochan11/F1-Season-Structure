//
// Created by x on 2022-12-19.
//

#ifndef PROJEKT_PO_COMPARER_H
#define PROJEKT_PO_COMPARER_H

template <typename T>
class Comparer {
public:
    explicit Comparer();
    T returnTeamWithHigherDevelopmentBudget(T value1, T value2);
    T returnHigherValue(T value1, T value2);
};

template<typename T>
T Comparer<T>::returnTeamWithHigherDevelopmentBudget(T value1, T value2) {
    if (value1.getDevelopmentBudget() > value2.getDevelopmentBudget()){ return value1; }
    else return value2;
}

template<typename T>
T Comparer<T>::returnHigherValue(T value1, T value2) {
    if (value1 > value2){ return value1; }
    else return value2;
}


template<typename T>
Comparer<T>::Comparer() = default;


#endif //PROJEKT_PO_COMPARER_H
