/*
 * Appendix 1 - Week 1 - Task 4
 * Aim: Print a letter (requesting books for the library) using printf.
 * The layout follows the sample output given in the manual.
 */
#include <stdio.h>

int main()
{
    printf("To,\n");
    printf("The Principal,\n");
    printf("Rizvi College of Engineering,\n");
    printf("Bandra (W).\n");
    printf("\n\n");
    printf("\t\tSubject : Requesting some books for the library,\n");
    printf("\n\n");
    printf("Dear Sir/Madam,\n");
    printf("\tMyself Affan would like to request purchase the following books for the library.\n");
    printf("\n");
    printf("_______________________________________________________________________________\n");
    printf("|%-35s|%-25s|%-14s|\n", "Title", "Author", "Publication");
    printf("|___________________________________|_________________________|______________|\n");
    printf("|%-35s|%-25s|%-14s|\n", "C Programming", "Balguruswami", "McGraw Hill");
    printf("|___________________________________|_________________________|______________|\n");
    printf("|%-35s|%-25s|%-14s|\n", "Python Programming", "Simon Says", "Pearsons");
    printf("|___________________________________|_________________________|______________|\n");
    printf("\n\n");
    printf("Thanking you in anticipation.\n");
    printf("Regards,\n");
    printf("Affan.\n");

    return 0;
}
