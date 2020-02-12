#pragma once
#ifndef NODOLDH
#define NODOLDH

class NodoLD
{
public:
    NodoLD *siguiente;
    NodoLD *anterior;
    char valor;
    NodoLD();//YO LO AÑADI
    NodoLD(char valor);
    virtual ~NodoLD();

protected:

private:

};

#endif // NODOLDH

