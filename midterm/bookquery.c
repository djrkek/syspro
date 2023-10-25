struct Product {
    int id;
    char name[50];
    char type[50];
    int expirationDate;
    int stock;
};


#define MAX_PRODUCTS 100


struct Product products[MAX_PRODUCTS];
int productCount = 0;


void registerProduct() {
    if (productCount >= MAX_PRODUCTS) {
        printf("no register.\n");
        return;
    }

    struct Product product;
    printf("input : ");
    scanf("%d %s %s %d %d", &product.id, product.name, product.type, &product.expirationDate, &product.stock);

    products[productCount] = product;
    productCount++;

    printf("register. id: %d\n", product.id);
}


void deleteProduct(int idToDelete) {
    int found = 0;
    for (int i = 0; i < productCount; i++) {
        if (products[i].id == idToDelete) {
            found = 1;
            for (int j = i; j < productCount - 1; j++) {
                products[j] = products[j + 1];
            }
            productCount--;
            printf("delete.\n");
            break;
        }
    }

    if (!found) {
        printf("no find.\n");
    }
}

void displayProducts() {
    printf("list:\n");
    for (int i = 0; i < productCount; i++) {
        printf("%d, %s, %s, %d, %d\n",
               products[i].id, products[i].name, products[i].type, products[i].expirationDate, products[i].stock);
    }
}

int main() {
    int choice;

    while (1) {
        printf("0: all , 1: look\n");
        scanf("%d", &choice);

        switch (choice) {
            
            case 0:
                displayProducts();
                break;
            case 1:
                return 0;
            default:
                printf("try.\n");
        }
    }
}
