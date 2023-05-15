//
// Created by x on 2022-11-23.
//

#include <valarray>
#include "GrandsPrixList.h"

GrandsPrixList::GrandsPrixList() {
    this->grandsprix_list = new ObjectsList<GrandPrix>;
}


void GrandsPrixList::addGrandPrix(GrandPrix *newGP) {
    if (!newGP->is_on_list){
        grandsprix_list->addToList(newGP);
        newGP->is_on_list = true;
    }
    else cout<<endl<<newGP->getGPName()<<" is already in the List"<<endl;
}

void GrandsPrixList::deleteGrandPrix(GrandPrix *grandPrix) {
    if (grandsprix_list->getHead() == nullptr){
        cout<<endl<<"No Grands Prix in the List"<<endl;
    }
    else {
        if (grandPrix->is_on_list) {
            grandsprix_list->deleteElement(grandPrix);
            grandPrix->is_on_list = false;
        } else cout << endl << grandPrix->getGPName() << " is not in the List" << endl;
    }
}

void GrandsPrixList::printList() {
    if (grandsprix_list->getHead() == nullptr){
        cout<<endl<<"No Grands Prix in the List"<<endl;
    }
    else {
        Object<GrandPrix> *temp = grandsprix_list->getHead();
        int index = 1;
        cout << endl << "Grands Prix List:" << endl;
        while (temp != NULL) {
            cout << index << ". " << temp->getData()->getGPName() << endl;
            temp = temp->getNext();
            index++;
        }
        cout << endl;
    }
}

void GrandsPrixList::printDetailedList() {
    if (grandsprix_list->getHead() == nullptr){
        cout<<endl<<"No Grands Prix in the List"<<endl;
    }
    else {
        Object<GrandPrix> *temp = grandsprix_list->getHead();
        int index = 1;
        cout << endl << "Detailed Grands Prix List:" << endl;
        while (temp != NULL) {
            cout << index << ". ";
            temp->getData()->printGPDetails();
            cout << endl;
            temp = temp->getNext();
            index++;
        }
        cout << endl;
    }
}

GrandsPrixList::~GrandsPrixList() = default;
