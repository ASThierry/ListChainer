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
    ~List(){delete _first;}

   // void ajoudDebut(int val);
    //void ajoutFin(int val);
    int longeur();
    void affichage();

    void ajoutFinListe(int val,Node*courant = nullptr);
    void ajoutDebut(int val);
    void rangerList();
    void suppElem(int val);
    void suppFirst();
};

#endif
