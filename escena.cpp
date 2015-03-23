#include "escena.h"

Escena::Escena()
{
    // Capsa minima contenidora provisional: S'ha de fer un recorregut dels objectes de l'escenes
    capsaMinima.pmin[0] = 0; capsaMinima.pmin[1] = 0; capsaMinima.pmin[2]=0;
    capsaMinima.a = 1; capsaMinima.h = 1; capsaMinima.p = 1;

    taulaBillar = NULL;
    plabase = NULL;
    bolaBlanca = NULL;
    boles = NULL;
}

Escena::~Escena()
{
    // Cal anar fent delete dels objectes que se'l hagi fet new
   delete this->taulaBillar;
   delete this->plabase;
   delete this->bolaBlanca;
   delete this->boles;
}

void Escena::addObjecte(Objecte *obj) {
    if (dynamic_cast<TaulaBillar*>(obj))
        this->taulaBillar = (TaulaBillar*)obj;
    if (dynamic_cast<PlaBase*>(obj))
        this->plabase = (PlaBase*)obj;
    if (dynamic_cast<Bola*>(obj))
        this->bolaBlanca = (Bola*)obj;
}

void Escena::addBoles(conjuntBoles *boles){
    this->boles = boles;
}


void Escena::CapsaMinCont3DEscena()
{
    // Metode a implementar
}

void Escena::aplicaTG(mat4 m) {

    // Metode a modificar

    if (taulaBillar!=NULL)
        taulaBillar->aplicaTG(m);
    if (plabase != NULL)
        plabase->aplicaTG(m);
    if (bolaBlanca != NULL)
        bolaBlanca->aplicaTG(m);
    if (boles!=NULL)
        boles->aplicaTG(m);

}

void Escena::aplicaTGCentrat(mat4 m) {

    // Metode a modificar

    if (taulaBillar!=NULL)
        taulaBillar->aplicaTGCentrat(m);
    if (plabase!=NULL)
        plabase->aplicaTGCentrat(m);
    if (bolaBlanca != NULL)
        bolaBlanca->aplicaTGCentrat(m);
    if (boles!=NULL)
        boles->aplicaTGCentrat(m);

}

void Escena::draw() {

    // Metode a modificar

    if (taulaBillar!=NULL)
        taulaBillar->draw();
    if (plabase != NULL)
        plabase->draw();
    if (bolaBlanca != NULL)
        bolaBlanca->draw();
    if (boles!=NULL)
        boles->draw();

}



