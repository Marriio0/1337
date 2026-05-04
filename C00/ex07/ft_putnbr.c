#include <unistd.h>
void ft_putnbr(int nb){
    if (nb < 0){
        char c = '-';
        write(1,&c,1);
        nb = -nb;
    }
    if(nb >= 10){
        ft_putnbr(nb / 10);
    }
    char c = '0' + (nb % 10);
    write(1,&c,1);
}
int main(void){
    ft_putnbr(-133333);
}