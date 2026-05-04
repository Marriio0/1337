#include <unistd.h>
void ft_print_comb2(void){
    int a = 0;
    while( a <= 98){
        char c = '0' + (a/10);
        char d = '0' + (a%10);
        int b = a + 1;
        while(b <= 99){
            char c1 = '0' + (b/10);
            char d1 = '0' + (b%10);
            char q = ' ';
            char w = ',';
            write(1,&q,1);
            write(1,&c,1);
            write(1,&d,1);
            write(1,&q,1);
            write(1,&c1,1);
            write(1,&d1,1);
            if( a != 98)
                write(1,&w,1);
            b++;
        }
        a++;
    }
}
/*   
int main(void){
    ft_print_comb2();
}
*/