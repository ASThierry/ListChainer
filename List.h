#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List {
protected:
    //Tête de la list chainer
    Node* _first = nullptr;

    int longeurchaine(Node* courant);
    void affichageliste(Node* courant);

public:
    List(): _first(nullptr){}
    ~List(){/*delete _first;*/}

    // void ajoudDebut(int val);
    void ajoutFin(int val);
    int longeur();
    void affichage();

    void ajoutFinListe(int val,Node*courant = nullptr);
    void ajoutDebut(int val, Node*courant = nullptr);
    void rangerList();
    void supp(int val);
    void recherhe(int val);
    void suppFirst();
    List* unionList(List*l1,List*l2);

};

#endif
