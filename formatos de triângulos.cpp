#include <cstdlib>
#include <stdio.h>

using namespace std;

/* _______________________________
 * |----mensagem de exercicios---- 
 * |----ass: carlos lorim--------- 
 * |------------------------------
 * |______________________________
 */
int main(int argc, char** argv) {
    float A, B, C, E, I;
    
    printf("informe o lado A do triangulo:");
    scanf("%f", &A);
    printf("informe o lado B do triangulo:");
    scanf("%f", &B);
    printf("informe o lado C do triangulo:");
    scanf ("%f", &C);
            
if (A + B <=C || C + B <=A || A + C <= B) {
    printf("Os valores não formam um triângulo.");
}
    if (A==B && B==C && C==A) {
    printf("Os valores forma um triangulo equilatero.");
}else
    if (A==B || C==B || C==A) {
    printf("Os valores forman um triangulo isoceles.");
}else
    if (A*A+B*B==C*C || B*B +C*C==A*A || A*A+C*C== B*B) {
    printf("os valores forman um trinagulo retangulo\n");
} 
    if (A!= B && B!=C && C!=A) {
    printf("os valores forman um trinagulo escaleno.");
}   else
 
return 0;
}
