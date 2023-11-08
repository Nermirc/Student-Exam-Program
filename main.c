#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vize,Final;
    char a ='A';
    char b ='B';
    char c ='C';
    char d ='D';
    char f ='F';

    printf("Vize notunu giriniz.\n");
    scanf("%d",&vize);
     if((vize>=100 || vize<0))
    {
        printf("Vizeden 0 ile 100 arasi not alabilirsiniz.\n");
        return 0 ;
    }
    printf("Final notunu giriniz.\n");
    scanf("%d",&Final);
     if((Final>=100 || Final<0))
    {
        printf("Finalden 0 ile 100 arasi not alabilirsiniz.\n");
        return 0 ;
    }
    int grade=vize*40/100+Final*60/100;
    if((grade >=0 && grade <50))
    {
        printf("Your grade is %d\n",grade);
        printf("\"Your letter grade is %c\"\n",f);
    }
    if((grade >=50 && grade <60))
    {
        printf("Your grade is %d\n",grade);
        printf("\"Your letter grade is %c\"\n",d);
    }
    if((grade >=60 && grade <70))
    {
        printf("Your grade is %d\n",grade);
        printf("\"Your letter grade is %c\"\n",c);
    }
    if((grade >=70 && grade <85))
    {
        printf("Your grade is %d\n",grade);
        printf("\"Your letter grade is %c\"\n",b);
    }
    if((grade >=85) && (grade <=100))
    {
        printf("Your grade is %d\n",grade);
        printf("\"Your letter grade is %c\"\n",a);
    }
}
