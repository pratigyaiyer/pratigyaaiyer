#include<stdio.h>
#include<string.h>
struct product{
	int id;
	char name[30];
	float prize;
};
int main() {
    // Allocating memory for a single Book structure
    struct product *prdptr = (struct product *) malloc(sizeof(struct product));
    
    if (prdptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assigning values
    printf("Enter product id: ");
    scanf(" %d", prdptr->id );  // Accepts multi-word input
    
    printf("Enter name:  ");
    scanf("%s", &prdptr->name);
    
    printf("Enter prize : ");
    scanf("%f", &prdptr->prize);

    // Displaying values
    printf("\n Details:\n");
    printf("id: %d\n", prdptr->id);
    printf("name: %s\n", prdptr->name);
    printf("Price: %f\n", prdptr->prize);

    // Free allocated memory
    free(prdptr);

    return 0;
}

