/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main() {
    char first[55] ;
    char last[55] ;
    printf("First Name: ") ;
    scanf("%s",&first) ;
    printf("Last Name: ") ;
    scanf("%s",&last) ;
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand",first,last);
    return 0;
}