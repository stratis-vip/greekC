//
// Created by Στρατής Χριστοδούλου on 26/7/18.
// My Input Output library mio.h
//

#ifndef MIO_H
#define MIO_H
#define MAXCHARSIZE 255

void mfgets(char *p, int size);
long mfgets_int(char **ptr, int size, int accept_error);
double mfgets_double(char **ptr, int accept_error);

#endif //MIO_H
