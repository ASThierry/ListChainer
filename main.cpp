#include <iostream>
#include "List.h"
#include "Node.h"

int main(){
    List *list=new List();
    list->suppFirst();
    list->affichage();
    list->ajoutFinListe(2);
    list->affichage();
    list->ajoutFinListe(14);
    list->ajoutDebut(20);
    list->ajoutDebut(47);
    list->ajoutDebut(9);
    list->ajoutFinListe(14);
    list->ajoutDebut(20);
    list->affichage();
    std::cout<<""<<std::endl;
    std::cout<<""<<list->longeur()<<std::endl;
    list->rangerList();
    list->affichage();
    list->suppFirst();
    list->suppFirst();
    list->affichage();
    list->supp(47);
    list->affichage();
    list->recherhe(14);
    list->recherhe(144);
    List* l1 = new List();
    l1->ajoutFinListe(1);
    l1->ajoutFinListe(2);
    l1->ajoutFinListe(3);
    l1->ajoutFinListe(7);
    l1->ajoutFinListe(8);


    List* l2 = new List();
    l2->ajoutFinListe(2);
    l2->ajoutFinListe(4);
    l2->ajoutFinListe(7);
    l2->ajoutFinListe(8);
    List* inter = new List();
    inter = inter->intersectList(l1,l2);
    inter->affichage(); // Affiche 2 ?
    return 0;
}