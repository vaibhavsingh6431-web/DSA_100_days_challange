/*check the structure type array where each statemenet type variable has following fields - sapid, name & cgpa 
the program should print type of those students whose cgpa>=7.5*/
#include<stdio.h>

struct Student{
    int sap_id;
    char name[25];
    float cgpa;
};

int main(){

    int n; 
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input details
    for(int i = 0; i < n; i++){
        printf("\nEnter details of student %d\n", i+1);

        printf("SAP_ID: ");
        scanf("%d", &s[i].sap_id);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    // Display students with CGPA >= 7.5
    printf("\nStudents having CGPA >= 7.5:\n");

    for(int i = 0; i < n; i++){
        if(s[i].cgpa >= 7.5){
            printf("\nSAP_ID: %d\n", s[i].sap_id);
            printf("Name: %s\n", s[i].name);
            printf("CGPA: %.2f\n", s[i].cgpa);
        }
    }

    return 0;
}