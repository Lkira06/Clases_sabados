#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int getString(  char *pResult,
                char *pMsg,
                char *pMsgError,
                int min,
                int max,
                int attemps);

///
int getNumber(  int *resultado,
                char *msg,
                char *msgError,
                int minimo,
                int maximo,
                int reintentos);

int isValidNumber (char* cadena);

int getPrecio(char* mensaje, float *elPrecio);
int getCodigo(char* mensaje,char *codigo);

#endif // UTN_H_INCLUDED
