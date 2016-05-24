#include <stdio.h>
#include <locale.h>
main()
{
setlocale(LC_ALL,"Portuguese");
double n1, n2, n3, media;
printf("digite 3 números:___\b\b\b");
scanf("%lf %lf %lf",&n1,&n2,&n3);
media=(n1+n2+n3)/3;
printf("A MÉDIA É: %0.2f\n\n", media);

system("PAUSE");
}
