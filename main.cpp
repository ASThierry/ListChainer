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
    List* l1= new List();
    l1->ajoutFinListe(1);
    l1->ajoutFinListe(2);
    l1->ajoutFinListe(3);
    List* l2= new List();;
    l2->ajoutFinListe(5);
    l2->ajoutFinListe(6);
    l2->ajoutFinListe(7);
    List* ll= new List();;

    ll=ll->unionList(l1,l2);

    ll->affichage();
    return 0;
}