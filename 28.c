#include<stdio.h>
void f(int *p);
void g(int k);

int main()
{
    int i = 6;
    printf("&i=%p\n ",&i);
    f(&i);                                              //i的值被改变，传递的是值，但是传进f函数的是i的地址，函数可以对i进行访问，也就可以修改，指针*p可以作运算，可以被赋值、
    g(i);                                              
    return 0;
}


void f(int *p)
{
    printf(" p=%p\n", p);
    printf("*p=%d\n", *p);
    *p =26;                                 //这里*p就相当于i了所以对i进行赋值，使得外面的值被改变

}

void g(int k)
{
    printf("k=%d\n", k);
}