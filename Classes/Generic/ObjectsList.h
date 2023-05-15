//
// Created by x on 2022-12-19.
//

#ifndef PROJEKT_PO_OBJECTSLIST_H
#define PROJEKT_PO_OBJECTSLIST_H

#include <iostream>
#include "Object.h"
template <typename T>
class ObjectsList{
protected:
    Object<T>* head;
    template<typename U>friend class ObjectsListSorter;
    template<typename U>friend class Comparer;

public:
    explicit ObjectsList(){
        this->head = nullptr;
    }

    void deleteElement(T *object);
    void addToList(T *object);
    T* getElement(Object<T>* current);
    T* getExactElement(T *object);
    Object<T> *getHead(){return this->head;}
};

template<typename T>
void ObjectsList<T>::addToList(T *object) {
    auto *node = new Object<T>[1];
    node->data = object;
    if(head == NULL){
        head = node;
        return;
    }
    Object<T>* temp = head;
    Object<T>* prev;
    while(temp->next != NULL){
        if(temp->data == object){
            cout<<endl<<"Element already on the List"<<endl;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    temp->next = node;
    temp->next->prev = temp;
}

template<typename T>
void ObjectsList<T>::deleteElement(T *object) {
    Object<T>* temp = head;
    bool found_object = false;
    while(temp  != NULL){
        if(temp->data == object){
            found_object = true;
            if (temp == head && temp->next == nullptr){
                free(temp);
                this->head = NULL;
                return;
            }
            else if(temp == head && temp->next != nullptr){
                head = temp->next;
                free(temp);
                return;
            }
            else if (temp->next == NULL){
                temp->prev->next = NULL;
                free(temp);
                return;
            }
            else{
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                free(temp);
                return;
            }
        }
        temp = temp->next;
    }
    if (!found_object) cout << "Object not found, can't be deleted" << endl;
}

template<typename T>
T* ObjectsList<T>::getElement(Object<T> *current) {
    return current->data;
}

template<typename T>
T* ObjectsList<T>::getExactElement(T *object) {
    Object<T>* temp = head;
    bool found_object = false;
    while(temp != NULL) {
        if (temp->data == object) {
            found_object = true;
            return temp->data;
        }
        temp = temp->next;
    }
    if (!found_object) cout << "Object not found, can't be deleted" << endl;
}


#endif //PROJEKT_PO_OBJECTSLIST_H
