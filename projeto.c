#include<stdio.h>
float media,n1,n2,n3;

int main()
{
    printf("Digite a primeira nota\n");
    scanf("%f",&n1);
    printf("Digite a segunda nota\n");
    scanf("%f",&n2);
    printf("Agora, digite a terceira nota\n");
    scanf("%f",&n3);
    
    media=(n1*0.2)+(n2*0.3)+(n3*0.5);
    
    printf("Sua nota final é %.2f\n",media);

    return 0;
}
