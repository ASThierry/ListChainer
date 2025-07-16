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
    List* l1 = new List();
    l1->ajoutFinListe(1);
    l1->ajoutFinListe(2);
    l1->ajoutFinListe(3);
    l1->ajoutFinListe(7);
    l1->ajoutFinListe(8);
    list->unionList(l1);
    std::cout<<""<<std::endl;
    std::cout<<"Afficage de la fusion de list et l1."<<std::endl;
    list->affichage();
    List* l2 = new List();
    l2->ajoutFinListe(2);
    l2->ajoutFinListe(4);
    l2->ajoutFinListe(7);
    l2->ajoutFinListe(8);
    List* inter = new List();
    std::cout<<""<<std::endl;
    std::cout<<"Afficage de l'intersection de deux listes."<<std::endl;
    inter = list->intersectList(l2);
    inter->affichage(); 
    std::cout<<""<<std::endl;
    return 0;
}