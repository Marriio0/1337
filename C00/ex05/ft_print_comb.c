#include <unistd.h>
void ft_print_comb(void){
    char i = '0';
    char j ;
    char z ;
    while ( i < '8'){
        j = i + 1;
        while(j < '9'){
            z = j + 1;
            while(z <= '9'){
                write(1,&i,1);
                write(1,&j,1);
                write(1,&z,1);
                z++;
                if(i != '7' || j != '8'){
                    char c = ',';
                    char w = ' ';
                    write(1,&c,1);
                    write(1,&w,1);
                }
            }
            j++;
        }
        i++;
    }
}
/*
int main(void){
    ft_print_comb();
}
*/