#ifndef MYUTILS_H
#define MYUTILS_H

typedef unsigned short int BOOL;
typedef void (*FOnEleProc)(int data[], int idx);

void swap(int * px, int * py);
void dataCreator(int data[], int size);
void dataPrintf(int data[], int size);

void sortA(int data[], int size);
void sortD(int data[], int size);

BOOL large(int x, int y);
BOOL small(int x, int y);
void sort(int data[], int size, BOOL (*compare)(int x, int y));

void traverse(int data[], int size, void (*eleProc)(int data[], int idx));
void pTraverse(int data[], int size, FOnEleProc onEleProc);

#endif // MYUTILS_H
