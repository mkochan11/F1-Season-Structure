//
// Created by x on 2022-12-19.
//

#ifndef PROJEKT_PO_OBJECT_H
#define PROJEKT_PO_OBJECT_H

#include<iostream>
using namespace std;

template<typename T>class Object{
protected:
    T *data;
    Object<T>* prev;
    Object<T>* next;
    template<typename U>friend class ObjectsList;
    template<typename U>friend class ObjectsListSorter;
public:
    Object<T>* getNext(){return this->next;}
    Object<T>* getPrev(){return this->prev;}
    T* getData(){return this->data;}

    Object(){
        this->next = nullptr;
        this->prev = nullptr;
    }
};

#endif //PROJEKT_PO_OBJECT_H
