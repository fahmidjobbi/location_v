#ifndef RESERVATION_H_INCLUDED
#define RESERVATION_H_INCLUDED
typedef struct
{
    int jour ;
    int mois ;
    int annee;
}date;
typedef struct
{
    int reservationid;
    int clientcin;
    int modeleid;
    date datereseravtion;
    date datefinreservation;
    char modelevehicule[100];


}reservation;

#endif // RESERVATION_H_INCLUDED
