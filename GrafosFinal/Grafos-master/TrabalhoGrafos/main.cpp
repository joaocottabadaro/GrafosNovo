#include <iostream>
#include "Grafo.h"
#include "Grafo.cpp"
#include "Menu.h"
using namespace std;

int main() {

        Grafo* grafo = new Grafo();
        grafo->lerDigrafo("teste.txt");


    Menu* menu = new Menu(grafo);
    menu->inicia();



}
