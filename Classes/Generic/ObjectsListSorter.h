//
// Created by x on 2022-12-19.
//

#ifndef PROJEKT_PO_OBJECTSLISTSORTER_H
#define PROJEKT_PO_OBJECTSLISTSORTER_H

#include <vector>
#include <algorithm>

template <typename T>
class ObjectsListSorter{
    T list;
public:
    explicit ObjectsListSorter(T list){
        this->list = list;
    }
    void sortByNamesAsc();
    void sortBySurnames();

};

template<typename T>
void ObjectsListSorter<T>::sortByNamesAsc() {
    auto *current = list.head;
    if(list.head == NULL){
        return;
    }
    else{
        for(current = list.head; current->next != NULL; current = current->next){
            for (auto *index = current->next; index != NULL; index = index->next) {
                if(current->data->getName() > index->data->getName()){
                    auto *temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
            }
        }
    }
}

template<typename T>
void ObjectsListSorter<T>::sortBySurnames() {
    auto *current = list.head;
    if(list.head == NULL){
        return;
    }
    else{
        for(current = list.head; current->next != NULL; current = current->next){
            for (auto *index = current->next; index != NULL; index = index->next) {
                if(current->data->getSurname() > index->data->getSurname()){
                    auto *temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
            }
        }
    }
}


#endif //PROJEKT_PO_OBJECTSLISTSORTER_H
