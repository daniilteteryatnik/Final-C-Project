/* written by Oliver Alejos */
#include "project.h"

void removeitem()
{
    item product[100];
    int location;

    FILE *fp=fopen("records.bin","rb");
    FILE *counter=fopen("counter.dat","r");

    int count;
    fscanf(counter,"%d",&count);

    fread(&product, sizeof(product), 1, fp);

    printf("\nEnter Product number of item to be deleted: ");
    int productNumber;
    scanf("%d",&productNumber);
        count--;
        printf("Record has been succesfully deleted\n");

        fclose(counter);

        FILE *counterw=fopen("counter.dat","w");
        fprintf(counterw,"%d",count);
        fclose(counterw);
        FILE *fp2=fopen("records1.bin","wb");
        fwrite(&product, sizeof(item), count, fp2);
        remove("records.bin");
        rename("records1.bin","records.bin");
        fclose(fp2);
        load_menu();


        

}
