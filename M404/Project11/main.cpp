#include <iostream>

using namespace std;

int main() {
    int Tage[5];
    int d;
    int Summe=0;
    int Tag;
    int Ende;

    printf("Um zu beginnen, klicke auf 1, um zu beenden auf 2:");
    scanf("%d", &Ende);
    fflush(stdin);
    printf("\n");
    while (Ende!=2) {
        switch(Ende) {
            case 1:
                for(d=0;d<5;d++) {
                    printf("Gebe die Stundenanzahl fuer den %d. Tag an:", d+1);
                    scanf("%d",&Tage[d]);
                    fflush(stdin);
                    Summe=Summe+Tage[d];
                }

                printf("Du hast %d Schulstunden in einer Woche\n\n", Summe);
                Summe=0;
                printf("Willst du abfragen, wie viele Stunden du an irgend einem Tag hast,\n dann klicke 3, wenn nicht 4:");
                scanf("%d", &Tag);
                fflush(stdin);

                if (Tag == 3) {
                    printf("Von welchem Tag wilst du die Stundenanzahl wissen: ");
                    scanf("%d", &d);
                    fflush(stdin);
                    printf("An dem Tag %d hast du %d Stunden.\n\n", d, Tage[d - 1]);
                    printf("Willst du abfragen, wie viele Stunden du an irgend einem Tag hast,\n dann klicke 3, wenn nicht 4:");
                    scanf("%d", &Tag);
                    fflush(stdin);
                }

                if (Tag == 4) {
                    printf("Um weiter zu machen gebe 1 ein, wenn du nicht weitermachen willst, gebe 2 ein:");
                    scanf("%d", &Ende);
                    fflush(stdin);
                }

                break;
            case 2:
                break;
        }
    }

    system("PAUSE");
    return 0;
}