#include <stdio.h> *ptr,**pptr;
    ptr = &a;
    pptr = &ptr;
     printf("address of a : %u\n",&a);
      printf("address of ptr : %u\n",&ptr);
     printf("address of pptr : %u\n",&pptr);
     printf("value of of ptr : %d\n",*(&ptr));
     printf("value of pptr : %u\n",**(&pptr));


}
