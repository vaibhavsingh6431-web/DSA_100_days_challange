/* structure of student type- 
sapid , name , sem , att,cspa (array of 10 student)
a) function to find eligible student for exams att>=75% 
b) function to find eligible student for placement cgpa >=7.5 
 1.simple structure 
 2.structute pointer possed to function 
 3. function pointer*/
 #include<stdio.h>
struct Student {
    int sap_id;
    char name[20];
    int sem;
    float att;
    float cgpa;
};
int main() {
    struct Student s[10];
    int n = 10;
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter SAP ID: ");
        scanf("%d", &s[i].sap_id);
        printf("Enter semester: ");
        scanf("%d", &s[i].sem);
        printf("Enter attendance: ");
        scanf("%f", &s[i].att);
        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }
    printf("\n----- Student Details -----\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("SAP ID: %d\n", s[i].sap_id);
        printf("Semester: %d\n", s[i].sem);
        printf("Attendance: %.2f\n", s[i].att);
        printf("CGPA: %.2f\n", s[i].cgpa);
    }

    return 0;
}