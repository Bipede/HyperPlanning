#ifndef UTILISATEURS_H_INCLUDED
#define UTILISATEURS_H_INCLUDED

typedef struct {
    unsigned int *matricule;
    char *nom;
    char *prenom;
    Sexe sexe;
    Date dateNaiss;
    Date dateInscr;
    char *adresse;
    unsigned int *codePost;
    char *ville;
    unsigned int *telM;
    unsigned int *telD;

}Stagiaire;



#endif // UTILISATEURS_H_INCLUDED
