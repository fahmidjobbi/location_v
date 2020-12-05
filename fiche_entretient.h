#ifndef FICHE_ENTRETIENT_H_INCLUDED
#define FICHE_ENTRETIENT_H_INCLUDED
typedef struct
{
    int jour ;
    int mois ;
    int annee;
}date;
typedef struct
{
    int fentretientid;
    int matriculevehicule;
    date dateentretien;
    char traveaux[100];
}fiche_entretien;


#endif // FICHE_ENTRETIENT_H_INCLUDED
