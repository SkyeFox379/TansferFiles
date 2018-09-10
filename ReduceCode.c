




#include <stdio.h>

int main() {
int i = 100, j;

start_loop1:
if(i<=0) goto end_loop1;
    if(i < 50) goto end_ifblock;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++;
        j++; 
    end_ifblock:

    if(i != 10) goto end_ifblock2;
        j--;
        j--;
        j--;
        goto switch_end;
    end_ifblock2:
    if(i != 20) goto end_ifblock3;
        j--;
        j--;
        j--;
        j--;
        j--;
        j--;
        goto switch_end;
    end_ifblock3:
        j++;
    switch_end:
    i++;
    goto start_loop1;
end_loop1;

}





// while(j > 0) {
//     if(j < 99) 
//         j--;
//     j -= 10;
//     for(i=0; i<5; i++) 
//         j++;
// }