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
    char a[] = {'T','C',' ','R','M','U','T','L',' ','C','h','i','a','n','g',' ','M','a','i',' ','T','h','a','i','l','a','n','d'} ;
    printf("First Name:") ;
    scanf("%s",first) ;
    printf("Last Name:") ;
    scanf("%s",last) ;
    printf(" %s %s %s",first,last,a) ;
    return 0;
}