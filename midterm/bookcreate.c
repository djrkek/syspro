#include <stdio.h>
   #include <string.h>
  
   #define MAX_PRODUCTS 100
  
  
   struct Product {
     int id;
     char name[50];
      char jtype[50];
     int date;
      int stock;
  };
 
 
  struct Product products[MAX_PRODUCTS];
  int productCount = 0;
 
 
  void registerProduct(int id, char *name, char *jtype, int date, int stock) {
      if (productCount < MAX_PRODUCTS) {
          products[productCount].id = id;
          strcpy(products[productCount].name, name);
          strcpy(products[productCount].jtype, jtype);
          products[productCount].date = date;
          products[productCount].stock = stock;
          productCount++;
         printf("register.\n");
     } else {
         printf("no.\n");
      }
  }
 
 
  void deleteProduct(int id) {
    int found = 0;
      for (int i = 0; i < productCount; i++) {
          if (products[i].id == id) {
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
 
  int main() {
      while (1) {
          int option, id, date, stock;
          char name[50], type[50];
 
          printf("0 register, 1 delete\n");
          printf("input : ");
          scanf("%d", &option);
 
          if (option == 0) {
             scanf("%d %s %s %d %d", &id, name, type, & date, &stock);
            registerProduct(id, name, type, date, stock);
          } else if (option == 1) {
              scanf("%d", &id);
              deleteProduct(id);
         } else {
             printf("option. \n");
         }
     }

     return 0;
  }
