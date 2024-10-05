#include <stdio.h>

int main()
{
    int m;
    char grade;
    printf("enter marks between 0-100: ");
    scanf("%d",&m);

    if(0<m&&m<=100)
    {
    grade=(m>=90)?'grade A':(80<=m<90)?'grade B':(70<=m<80)?'grade C':(60<=m<70)?'grade D':(m<60)?'grade F':'0';
    printf("grade is:%c\n\n",grade);
    }
    else
    {
        printf("enter a valid num:\n\n");
    }
    printf("Kairavi Padhariya\n");
    printf("ID : 24DCS059\n\n");

    return 0;
}
