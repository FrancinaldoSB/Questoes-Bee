#include <stdio.h>
struct Corpo
{
    float altura;
    float peso;
}Jose = {1.78, 82.6}, Maria = {1.63, 59.5};
struct casal
{
    struct Corpo masculino;
    struct Corpo feminino;
};
int main () {
    struct casal individuo[10];
    individuo[0].masculino = Jose;
    individuo[0].feminino = Maria;
}