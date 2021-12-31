/* written by Oliver Alejos */
#include "project.h" 

int main(void) 
{ 
    load_menu();
    return 0;
}
 
void load_menu()
{
    int choice;

    do
{
 printf("============================================================\n");
 printf("-                    W E L C O M E                         -\n");
 printf("-                    T O     T H E                         -\n");
 printf("-                  M A R V E L O U S                       -\n");
 printf("-               CS102  INVENTORY  SYSTEM                   -\n");
 printf("============================================================\n");
 printf("1. ADD AN ITEM\n");
 printf("2. SUBTRACT AN ITEM\n");
 printf("3. VIEW LIST \n");
 printf("4. Exit\n");
 scanf("%d",&choice);

system("clear");
switch(choice) 
{
        case 1: additem();
                break;
        case 2: removeitem();
                break;
	case 3: viewproduct();
        case 4: printf("EXITING PROGRAM\n");
                exit(0);
                break;
            default: printf(" T R Y  A G A I N \n");
printf("	    ▄              ▄   \n");  
printf("        ▌▒█           ▄▀▒▌ \n");  
printf("        ▌▒▒█        ▄▀▒▒▒▐ \n");  
printf("       ▐▄█▒▒▀▀▀▀▄▄▄▀▒▒▒▒▒▐ \n");  
printf("     ▄▄▀▒▒▒▒▒▒▒▒▒▒▒█▒▒▄█▒▐ \n");  
printf("   ▄▀▒▒▒░░░▒▒▒░░░▒▒▒▀██▀▒▌ \n");  
printf("  ▐▒▒▒▄▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄▒▌ \n"); 
printf("  ▌░░▌█▀▒▒▒▒▒▄▀█▄▒▒▒▒▒▒▒█▒▐  \n");
printf("▐░░░▒▒▒▒▒▒▒▒▌██▀▒▒░░░▒▒▒▀▄▌ \n");
printf(" ▌░▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒▌ \n");
printf("▌▒▒▒▄██▄▒▒▒▒▒▒▒▒░░░░░░░░▒▒▒▐ \n");
printf("▐▒▒▐▄█▄█▌▒▒▒▒▒▒▒▒▒▒░▒░▒░▒▒▒▒▌\n");
printf("▐▒▒▐▀▐▀▒▒▒▒▒▒▒▒▒▒▒▒▒░▒░▒░▒▒▐ \n");
printf(" ▌▒▒▀▄▄▄▄▄▄▒▒▒▒▒▒▒▒░▒░▒░▒▒▒▌ \n");
printf(" ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▒░▒▒▄▒▒▐  \n");
printf("  ▀▄▒▒▒▒▒▒▒▒▒▒▒▒▒░▒░▒▄▒▒▒▒▌  \n");
printf("    ▀▄▒▒▒▒▒▒▒▒▒▒▄▄▄▀▒▒▒▒▄▀   \n");
printf("      ▀▄▄▄▄▄▄▀▀▀▒▒▒▒▒▄▄▀     \n");
printf("         ▀▀▀▀▀▀▀▀▀▀▀▀       \n");



                                                      break; 
        }
}
 while (choice != 4);
}

void clrscr()
{
    system("@cls||clear");
}
