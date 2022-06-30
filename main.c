#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company var1 = XEROX;
    enum Company var2 =  GOOGLE;
    enum Company var3 = EBAY;

    printf("%d\n%d\n%d", var1, var2, var3);
    return 0;
}
