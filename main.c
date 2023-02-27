#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>


/* Function declarations */
void Ex1();

void Ex2();

void Ex3();

void Ex4();

void Ex5();

void Ex6();

void Ex7();

void Ex8();

void Ex9();

void Ex10();

void Ex11();

void Ex12();

void Ex13();

void Ex14();

void Ex15();

void Ex16();

void Ex17();

void Ex18();

void Ex19();

void Ex20();

void Ex21();

void Ex22();

void Ex23();

void Ex24();

void Ex25();

void Ex26();

void Ex27();

void Ex28();

/*
void Ex29();
void Ex30();
void Ex31();
void Ex32();
void Ex33();
void Ex34();
void Ex35();
void Ex36();
*/
int main(void) {
    int select = 0, i, all_Ex_in_loop = 0;
    printf("Run menu once or cyclically?\n(Once - enter 0, cyclically -enter other number) ");
    if (scanf("%d", &all_Ex_in_loop) == 1)
        do {
            for (i = 1; i <= 28; i++)
                printf("Ex%d--->%d\n", i, i);
            printf("EXIT-->0\n");
            do {
                select = 0;
                printf("please select 0-28 : ");
                scanf("%d", &select);
            } while ((select < 0) || (select > 28));
            switch (select) {
                case 1:
                    Ex1();
                    break;
                case 2:
                    Ex2();
                    break;
                case 3:
                    Ex3();
                    break;
                case 4:
                    Ex4();
                    break;
                case 5:
                    Ex5();
                    break;
                case 6:
                    Ex6();
                    break;
                case 7:
                    Ex7();
                    break;
                case 8:
                    Ex8();
                    break;
                case 9:
                    Ex9();
                    break;
                case 10:
                    Ex10();
                    break;
                case 11:
                    Ex11();
                    break;
                case 12:
                    Ex12();
                    break;
                case 13:
                    Ex13();
                    break;
                case 14:
                    Ex14();
                    break;
                case 15:
                    Ex15();
                    break;
                case 16:
                    Ex16();
                    break;
                case 17:
                    Ex17();
                    break;
                case 18:
                    Ex18();
                    break;
                case 19:
                    Ex19();
                    break;
                case 20:
                    Ex20();
                    break;

                case 21:
                    Ex21();
                    break;
                case 22:
                    Ex22();
                    break;
                case 23:
                    Ex23();
                    break;
                case 24:
                    Ex24();
                    break;
                case 25:
                    Ex25();
                    break;
                case 26:
                    Ex26();
                    break;
                case 27:
                    Ex27();
                    break;
                case 28:
                    Ex28();
                    break;
                    /*
                    case 29: Ex29(); break;
                    case 30: Ex30(); break;
                    case 31: Ex31(); break;
                    case 32: Ex32(); break;
                    case 33: Ex33(); break;
                    case 34: Ex34(); break;
                    case 35: Ex35(); break;
                    case 36: Ex36(); break;
                     */
            }
        } while (all_Ex_in_loop && select);
    return 0;
}

void Ex1() {


}

void Ex2() {

}

void Ex3() {

}

void Ex4() {

}

void Ex5() {

}

void Ex6() {

}

void Ex7() {

}

void Ex8() {

}

void Ex9() {

}

void Ex10() {

}

void Ex11() {

}

void Ex12() {

}

void Ex13() {

}

void Ex14() {

}

void Ex15() {


}

void Ex16() {

}

void Ex17() {

}

void Ex18() {

}

void Ex19() {

}

void Ex20() {


}

void Ex21() {

}

void Ex22() {

}

void Ex23() {

}

void Ex24() {

}

void Ex25() {

}

void Ex26() {

}

void Ex27() {

}

void Ex28() {

}
