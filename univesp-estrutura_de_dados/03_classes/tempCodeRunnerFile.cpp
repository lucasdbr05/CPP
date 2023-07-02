int main_()
{
    // vetores coma alocacao dinamica
    int num_elem = 10;
    int *c = new int[num_elem];
    for (int i = 0; i < 10; i++)
    {
        c[i] = 2 * i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << "   ";
    }
    return 0;
}