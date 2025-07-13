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

    return 0;
}