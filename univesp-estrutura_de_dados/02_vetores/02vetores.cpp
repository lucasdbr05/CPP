// Vetores: tamanho fixo, elementos devem ser do mesmo tipo, ocupam regioes consecutivas de memoria
#include <iostream>
using namespace std;

/*
int main()
{
    // vetores estaticos
    int c[10] = {14, 0, 3};
    c[5] = 30;
    c[7] = 40;
    c[8] = 50;
    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << "   ";
    }
    return 0;
}
*/
/*
int main()
{
    // vetores coma alocacao dinamica
    int num_elem = 10;
    int *c = new int[num_elem];
    for (int i = 0; i < num_elem; i++)
    {
        c[i] = 2 * i;
    }
    for (int i = 0; i < num_elem; i++)
    {
        cout << c[i] << "   ";
    }
    delete[] c;
    return 0;
}

*/
void valor_alocado_memoria(int *p) // nao modifica os valores de a e nem de *pa
{
    p = new int;
    *p = 7;
}
void valor_modificado_memoria(int *p) // modifica os valores de b e de *pb
{
    *p = 8;
}
void referencia(int *&p) // modifica os valores de pc(endereco) e de *pc, mas nao de c
{
    p = new int;
    *p = 9;
}
int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    cout << "Antes: " << pa << " " << pb << " " << pc << endl;
    cout << "Antes: " << *pa << " " << *pb << " " << *pc << endl;
    cout << endl;

    valor_alocado_memoria(pa);
    valor_modificado_memoria(pb);
    referencia(pc);
    cout << "Depois: " << pa << " " << pb << " " << pc << endl;
    cout << "Depois: " << &pa << " " << &pb << " " << &pc << endl;
    cout << "Depois: " << *pa << " " << *pb << " " << *pc << endl;
    cout << endl;

    return 0;
}
