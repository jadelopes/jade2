#include <stdio.h>
#include <locale.h>
main()
{
setlocale(LC_ALL,"Portuguese");
double n1, n2, media;
printf("digite 2 números:___\b\b\b");
scanf("%lf %lf",&n1,&n2);
media=(n1+n2)/2;
printf("A MÉDIA É: %0.2f\n\n", media);

system("PAUSE");
}
