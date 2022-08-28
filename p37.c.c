 #include <stdio.h>
int main()
{
    int i = 34;
    int *j;
    j= &i;//j will now store the address of i
    int **k;
    k = &j;
    //value
    printf("The value of i = %d\n",i);
    printf("The value of i = %d\n",*j);
    printf("The value of j = %d\n",*(&j));

    printf("The value of j = %d\n",*k);
    printf("The value of k = %d\n",*(&k)));


// address
    printf("The address of i = %u\n",&i);
    printf("The address of i = %u\n",j);
    printf("The address of j = %u\n",&j);
    printf("The address of k = %u\n",&k);







}
