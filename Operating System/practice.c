#include <stdio.h>
#include <stdlib.h>

struct item {
    int ID;
    char name[50];
    float price;
    int quantity;
};

struct gNode {
    struct item gro_item;
    struct gNode* next;
};

struct gLinkedList {
    int count;
    struct gNode* first;
};

struct item* readGroceryList(int n) {
    struct item* items = (struct item*)malloc(n * sizeof(struct item));
    for (int i = 0; i < n; i++) {
        items[i].ID = i + 1;
        printf("\nEnter details for item %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", items[i].name);
        printf("Price: ");
        scanf("%f", &items[i].price);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
    }
    return items;
}

void printGroceryList(struct item* items, int n) {
    for (int i = 0; i < n; i++) {
        printf("Item ID: %d, ", items[i].ID);
        printf("Name: %s, ", items[i].name);
        printf("Price: %f, ", items[i].price);
        printf("Quantity: %d\n", items[i].quantity);
    }
}

struct item findItem(int qVal, struct item* items, int n) {
    struct item* findItemEle = (struct item*)malloc(n * sizeof(struct item));
    int val = -1;
    for (int i = 0; i < n; i++) {
        if (items[i].quantity == qVal) {
            val = i;
            break;
        }
    }
    if (val == -1) {
        printf("No item with quantity = %d", qVal);
        return *findItemEle;
    }
    *findItemEle = items[val];
    return *findItemEle;
}

struct item findMaxPriceItem(struct item* items, int n) {
    int max_price = -1;
    int max_index = -1;
    for (int i = 0; i < n; i++) {
        if (items[i].price > max_price) {
            max_price = items[i].price;
            max_index = i;
        }
    }
    return items[max_index];
}

struct gLinkedList* createGLL(struct item* items, int n) {
    struct gLinkedList* LL = (struct gLinkedList*)malloc(sizeof(struct gLinkedList));
    LL->count = 0;
    LL->first = NULL;

    for (int i = 0; i < n; i++) {
        struct gNode* n1 = (struct gNode*)malloc(sizeof(struct gNode));
        n1->gro_item = items[n-i-1];
        n1->next = NULL;

        if (LL->count == 0) {
            LL->first = n1;
            LL->count++;
        } else {
            struct gNode* temp = LL->first;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = n1;
            LL->count++;
        }
    }

    return LL;
}

void printGLinkedList(struct gLinkedList* head) {
    struct gNode* temp = head->first;
    while (temp != NULL) {
        printf("Item ID: %d, ", temp->gro_item.ID);
        printf("Name: %s, ", temp->gro_item.name);
        printf("Price: %f, ", temp->gro_item.price);
        printf("Quantity: %d\n", temp->gro_item.quantity);
        temp = temp->next;
    }
}

int main() {
    int num_g;
    printf("Enter the number of unique grocery items in the store: ");
    scanf("%d", &num_g);
    struct item* gItems = readGroceryList(num_g);
    printGroceryList(gItems, num_g);

    int qVal;
    printf("\nEnter the quantity of the item you wish to find: ");
    scanf("%d", &qVal);
    struct item fItem = findItem(qVal, gItems, num_g);
    if (fItem.ID == -1) {
        printf("\nItem Not Found!\n");
    } else {
        printf("\nItem with quantity %d is %s\n", qVal, fItem.name);
    }

    struct item maxItem = findMaxPriceItem(gItems, num_g);
    printf("The item with the maximum price is %s\n", maxItem.name);

    struct gLinkedList* gLL = createGLL(gItems, num_g);
    printf("Printing the Linked List created:\n");
    printGLinkedList(gLL);

    free(gItems); // Freeing dynamically allocated memory
    // Free the linked list memory by iterating through the nodes
    struct gNode* current = gLL->first;
    while (current != NULL) {
        struct gNode* next = current->next;
        free(current);
        current = next;
    }
    free(gLL);

    return 0;
}
