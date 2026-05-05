/* create a menu driven program for singly linked list to perform following operations 
i) create a list 
ii) insertion at beginning
iii) insertion at end
iv)insertion after specific element
v) deletion from beginning 
vi) deletion from end
vii) deletion after specified element
viii) traversing the list
ix)exit(optional) */
// switch case and do while 
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* head = NULL;
void createList(){
    if(head != NULL){
        printf("List already created\n");
        return;
    }
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter 1st value: ");
    scanf("%d",&n1->data);
    printf("Enter 2nd value: ");
    scanf("%d",&n2->data);
    n1->next = n2;
    n2->next = NULL;
    head = n1;
    printf("List created successfully\n");
}
void insertBeg(){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter new value: ");
    scanf("%d",&newNode->data);
    newNode->next = head;
    head = newNode;
    printf("Inserted at beginning\n");
}
void insertEnd(){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter new value: ");
    scanf("%d",&newNode->data);
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        printf("Inserted as first node\n");
        return;
    }
    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    printf("Inserted at end\n");
}
void insertSpecific(){
    int pos;
    printf("Enter position after which to insert: ");
    scanf("%d",&pos);
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    for(int i = 1; i < pos && temp != NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL){
        printf("Invalid position\n");
        return;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter value to insert: ");
    scanf("%d",&newNode->data);
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted successfully\n");
}
void del_beg(){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
    printf("Deleted from beginning\n");
}
void del_end(){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    if(head->next == NULL){
        free(head);
        head = NULL;
        printf("Deleted last node\n");
        return;
    }
    struct Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;

    printf("Deleted from end\n");
}
void del_spec(){
    int pos;
    printf("Enter position after which to delete: ");
    scanf("%d",&pos);
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    for(int i = 1; i < pos && temp != NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL){
        printf("Invalid position\n");
        return;
    }
    struct Node* ptr = temp->next;
    temp->next = ptr->next;
    free(ptr);

    printf("Deleted successfully\n");
}
void traversing(){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    printf("List: ");
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    int choice;
    do{
        printf("\n------ MENU ------\n");
        printf("1. Create list\n");
        printf("2. Insert at beginning\n");
        printf("3. Insert at end\n");
        printf("4. Insert after position\n");
        printf("5. Delete from beginning\n");
        printf("6. Delete from end\n");
        printf("7. Delete after position\n");
        printf("8. Traverse\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
         switch(choice){
            case 1: createList(); 
                    break;
            case 2: insertBeg(); 
                    break;
            case 3: insertEnd(); 
                    break;
            case 4: insertSpecific(); 
                    break;
            case 5: del_beg(); 
                     break;
            case 6: del_end(); 
                    break;
            case 7: del_spec(); 
                    break;
            case 8: traversing(); 
                    break;
            case 9: printf("Exiting...\n"); 
                    break;
            default: printf("Invalid choice\n");
        }

    }while(choice != 9);

    return 0;
}