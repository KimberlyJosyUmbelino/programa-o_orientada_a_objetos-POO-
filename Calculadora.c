#include <stdio.h>

int main()
{
 int n1=0,n2=0,s1=0,s2=0,m1=0,m2=0,s;
 float S1,S2,S;
 //soma//
 printf("Digite o primeiro numero inteiro que sera somado:\n");
 scanf("%d",&n1);
 printf("Digite o segundo numero inteiro:\n");
 scanf("%d",&n2);
 s=n1+n2;
 printf("O resultado da soma:%d\n",s);
//subtração//
 s=0;
 printf("Digite o primeiro numero inteiro que sera subtraido:\n");
 scanf("%d",&s1);
 printf("Digite o segundo numero inteiro:\n");
 scanf("%d",&s2);
 s=s1-s2;
 printf("O resultado da subtracao:%d\n",s);
 //multiplicação//
 s=0;
 printf("Digite o primeiro numero inteiro que sera multiplicado:\n");
 scanf("%d",&m1);
 printf("Digite o segundo numero inteiro:\n");
 scanf("%d",&m2);
 s=m1*m2;
 printf("O resultado da multiplicacao:%d\n",s);
 //divisão//
 s=0;
 printf("Digite o primeiro numero inteiro que sera dividido:\n");
 scanf("%f",&S1);
 printf("Digite o segundo numero inteiro:\n");
 scanf("%f",&S2);
 S=S1/S2;
 printf("O resultado da divisao:%f\n",S);
return 0;
}
