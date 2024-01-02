/*Find out how much money ity will take to go tyhat many kilometers.*/
#include<stdio.h>
int i;
float km,ctpp,trp=0,tpl,tpml=0;
char st;
int main()
{   
    
    float ctpp = 102.45;  // Default value

    printf("current time petrol price\n[if ctpp 102.45 than enter any character]\n: ");
    if (scanf("%f", &ctpp) != 1) {
        // If a character is entered, set default value
        ctpp = 102.45;
        // Clear the input buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("Entered value: %.2f\n", ctpp);

    printf("how far to go in kilometers : ");
    scanf("%f",&km);
	printf("how much vahicle is go to : ");
    scanf("%d",&i);
    gt:
    printf("\nenter all(a) or only_total(t) or all_only(o) : ");
    scanf("%c",&st);
    scanf("%c",&st);
    switch (st) {
    case 'a' : 
                while(0<i){
                float rp,ml,avg;
                printf("\n________________________________________\n\n");
                printf("\nyour vahicle avg ( ?km/lt ) : ");
                scanf("%f",&avg);
                rp = (ctpp/avg)*km;
                ml = rp*(1000/ctpp);
                printf("\nIt will cost you %f ml petrol \nand Rs %f \nto go %f kilometre.",ml,rp,km);
                trp = rp + trp;
                tpml = ml + tpml;
                i--;
                }
                tpl = tpml/1000;
	            printf("\n________________________________________\n\n");
                printf("total cost %f\n",trp);
                printf("total petrol in liter %f",tpl);
                break;
    
    
    case 't' :
                while(0<i){
                float rp,ml,avg;
                printf("\n________________________________________\n\n");
                printf("\nyour vahicle avg ( ?km/lt ) : ");
                scanf("%f",&avg);
                rp = (ctpp/avg)*km;
                ml = rp*(1000/ctpp);
                
                trp = rp + trp;
                tpml = ml + tpml;
                i--;
                }
                tpl = tpml/1000;
	            printf("\n________________________________________\n\n");
                printf("total cost %f\n",trp);
                printf("total petrol in liter %f",tpl);
                break;
    
    
    case 'o' : 
                while(0<i){
                float rp,ml,avg;
                printf("\n________________________________________\n\n");
                printf("\nyour vahicle avg ( ?km/lt ) : ");
                scanf("%f",&avg);
                rp = (ctpp/avg)*km;
                ml = rp*(1000/ctpp);
                printf("\nIt will cost you %f ml petrol \nand Rs %f \nto go %f kilometre.",ml,rp,km);
                i--;
                }
                break;
    
    default : printf("plz ent character in option ");
    		  goto gt;
    
    }
    return 0;
}
    
