/*Ponteiro: variavel cujo conteudo e um endereco de memoria, naoo um valor no sentido tradicional*/
// O endereco de uma variavel (ou funcao) e a localizacao na memoria do primeiro byte ocupao por ela
// type *variable
// A alocacao de memoria pode ser feita de maneira estatica ou de maneira dinamica

// Estatica
int alpha;
int *intPointer = &alpha;

// Dinamica: utilza new(alocacao) e delete(desalocacao)
int *intPointer = new int;

//_________
/*
int anotherInt = *intPointer;
*intPointer = 25;
bool *truth = new bool;
*truth = true
float* money = new float;
*money = 99.99
float* myMoney = new float;
delete myMoney;
myMoney = myMoney
*/