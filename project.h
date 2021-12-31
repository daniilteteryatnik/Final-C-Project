/* written by Oliver Alejos based on the provided template */
/*
 * project.h
 */
#ifndef PROJECT_H /*what are we gonan name this lol*/
#define PROJECT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Global Variable declarations, if needed.
 */

    char name; 
/*
 * Data Structure declarations, if needed.
 */
typedef struct item{
	int productNumber;
	char productName[30];
	int quantity;
}
item;
/*
 * Function declarations, if needed.
 */
void clrscr();
void load_menu(void); 
void additem (void);
void removeitem(void);
void viewproduct(void);

#endif /* PROJECT_H */
