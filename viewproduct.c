/* written by Daniil Teteryatnik */
#include "project.h"

void viewproduct()
{
        clrscr();


        item product[100];
        FILE *fp=fopen("records.bin","rb");
        FILE *counter=fopen("counter.dat","r");

        int count;
        fscanf(counter,"%d",&count);
        printf("\n\t\tTotal number of items in inventory: %d\n",count);
        fread(&product, sizeof(product), 1, fp);

        int j=0;
        for(int i=0;i<count;i++)
        {
                for(j=i+1;j<count;j++)
                {
                        if(product[i].productNumber>product[j].productNumber)
                        {
                                item temp=product[i];
                                product[i]=product[j];
                                product[j]=temp;
                        }

                }

        }


        printf("\n -------------------------------------------------");
        printf("\n |   Product no   |   Product Name   |   Stock   |" );
        printf("\n -------------------------------------------------");

        for(int i=0;i<count;i++)
        {
                printf("\n|   %10d   |   ",product[i].productNumber);
                printf("%12s   |   ",product[i].productName);
                printf("%5d   |   ",product[i].quantity);
        }

        printf("\n --------------------------------------------------");

        char ch;
        fclose(fp);
        printf("\n\nWould you like to go back to the menu? [Y/N]\n");
        getchar();
        scanf("%c",&ch);

        if(ch=='Y'||ch=='y')
        {
                clrscr();
                load_menu();
        }

        else
        {
        exit(0);
        }

}

