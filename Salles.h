#ifndef SALLES_H_INCLUDED
#define SALLES_H_INCLUDED

enum TypeSalle {amphi, TD, TP};

typedef struct {
    char *nom;
    TypeSalle type;
    int nbPlaces;
}Salle;


#endif // SALLES_H_INCLUDED
