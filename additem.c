/* written by Daniil Teteryatnik */
#include "project.h"


void additem()
{
    item product;
    char ch;
    FILE *fp=fopen("records.bin","ab4");

    FILE *counterr=fopen("counter.dat","r");
    int count;
    fscanf(counterr,"%d",&count);


    printf("%d",count);

    printf("Enter Product no: ");
    scanf("%d",&product.productNumber);
    while (fread(&product,sizeof (item),1,fp))
    {
        count++;
    }

    printf("Enter Product Name: ");
    scanf("%s",product.productName);
    printf("Enter Quantity: ");
    scanf("%d",&product.quantity);

    fclose(counterr);
    count++;

    FILE *counterw=fopen("counter.dat","w");
    fprintf(counterw,"%d",count);
    fclose(counterw);


    fwrite(&product, sizeof(item), 1, fp);
    fclose(fp);



    system("clear");
    load_menu();

}
