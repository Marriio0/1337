#include <unistd.h>
void ft_is_negative(int n){
    if (n < 0)
    {
        char c = 'N';
        write(1,&c,1);
    }
    else{
        char p = 'P';
        write(1,&p,1);
    }
}
int main(int){
    ft_is_negative(0);
}