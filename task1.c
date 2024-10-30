#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i;
    int *x, *y, *z; 
    int a, b;  

    printf("Enter the size of the vectors: ");
    scanf("%d", &n);  

    x = (int*) malloc(n * sizeof(int));  
    y = (int*) malloc(n * sizeof(int));  
    z = (int*) malloc(n * sizeof(int));  

  
    if (x == NULL || y == NULL || z == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }

    printf("Enter scalar a: ");
    scanf("%d", &a);  
    printf("Enter scalar b: ");
    scanf("%d", &b);  

    
    printf("Enter the elements of vector x: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);  
    }

    
    printf("Enter the elements of vector y: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }

    for (i = 0; i < n; i++) {
        z[i] = a * x[i] + b * y[i]; 
    }

    printf("Resultant vector z (ax + by): \n");
    for (i = 0; i < n; i++) {
        printf("%d ", z[i]); 
    }
    printf("\n");  

    
    free(x);
    free(y);
    free(z);

    return 0;
}
