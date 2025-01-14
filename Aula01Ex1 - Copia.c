#include <stdio.h>
int main(int argc, char const *argv[])
{
    char *a[5] = {"Arroz","Feijao","Batata","Bife","Pure"};
    for (int i = 0; i < 5; i++)

    {
        printf("Comida[%d] = %s\n", i, a[i]);
    }

    return 0;
}
