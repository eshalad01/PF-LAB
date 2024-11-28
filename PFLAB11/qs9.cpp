#include <stdio.h>
#include <string.h>

struct Student {
    int stdid;
    char stdname[50];
};

struct Course {
    int courseID;
    char courseName[50];
    char instructorName[50];
    struct Student students[10];
    int stdcount;
};

struct Department {
    char departmentName[50];
    struct Course courses[10];
    int courseCount;
};

struct University {
    struct Department departments[5];
    int departmentCount;
};

void adddept(struct University *uni) {
    if (uni->departmentCount >= 5) {
        printf("Maximum number of departments reached.\n");
        return;
    }
    
    struct Department newDept;
    getchar();
    printf("Enter Department Name: ");
    fgets(newDept.departmentName, sizeof(newDept.departmentName), stdin);
    newDept.departmentName[strcspn(newDept.departmentName, "\n")] = 0;
    newDept.courseCount = 0;
    uni->departments[uni->departmentCount++] = newDept;
    printf("Department added successfully.\n");
}

void addcourse(struct University *uni) {
    char deptName[50];
    getchar(); 
    printf("Enter Department Name to add course: ");
    fgets(deptName, sizeof(deptName), stdin);
    deptName[strcspn(deptName, "\n")] = 0; 
    
    int deptIndex = -1;
    for (int i = 0; i < uni->departmentCount; i++) {
        if (strcmp(uni->departments[i].departmentName, deptName) == 0) {
            deptIndex = i;
            break;
        }
    }
    
    if (deptIndex == -1) {
        printf("Department not found.\n");
        return;
    }
    
    if (uni->departments[deptIndex].courseCount >= 10) {
        printf("Maximum number of courses reached for this department.\n");
        return;
    }
    
    struct Course newCourse;
    printf("Enter Course ID: ");
    scanf("%d", &newCourse.courseID);
    getchar(); 
    printf("Enter Course Name: ");
    scanf("%s",&newCourse.courseName);
    printf("Enter Instructor Name: ");
	scanf("%s",&newCourse.instructorName);
    newCourse.stdcount = 0;
    
    uni->departments[deptIndex].courses[uni->departments[deptIndex].courseCount++] = newCourse;
    printf("Course added successfully.\n");
}

void addstdincourse(struct University *uni) {
    int courseID;
    char deptName[50];
    getchar(); 
    printf("Enter Department Name: ");
    fgets(deptName, sizeof(deptName), stdin);
    deptName[strcspn(deptName, "\n")] = 0;
    printf("Enter Course ID to enroll students: ");
    scanf("%d", &courseID);
    
    int deptIndex = -1, courseIndex = -1;
    for (int i = 0; i < uni->departmentCount; i++) {
        if (strcmp(uni->departments[i].departmentName, deptName) == 0) {
            deptIndex = i;
            break;
        }
    }
    
    if (deptIndex == -1) {
        printf("Department not found.\n");
        return;
    }
    
    for (int i = 0; i < uni->departments[deptIndex].courseCount; i++) {
        if (uni->departments[deptIndex].courses[i].courseID == courseID) {
            courseIndex = i;
            break;
        }
    }
    
    if (courseIndex == -1) {
        printf("Course not found.\n");
        return;
    }
    
    if (uni->departments[deptIndex].courses[courseIndex].stdcount >=50) {
        printf("Maximum number of students reached for this course.\n");
        return;
    }
    
    struct Student newStudent;
    printf("Enter Student ID: ");
    scanf("%d", &newStudent.stdid);
    getchar(); // consume the newline character
    printf("Enter Student Name: ");
    fgets(newStudent.stdname, sizeof(newStudent.stdname), stdin);
    newStudent.stdname[strcspn(newStudent.stdname, "\n")] = 0; // Remove trailing newline
    
    uni->departments[deptIndex].courses[courseIndex].students[uni->departments[deptIndex].courses[courseIndex].stdcount++] = newStudent;
    printf("Student enrolled successfully.\n");
}

void displayinfo(struct University *uni) {
    for (int i = 0; i < uni->departmentCount; i++) {
        printf("\nDepartment: %s\n", uni->departments[i].departmentName);
        for (int j = 0; j < uni->departments[i].courseCount; j++) {
            printf("\tCourse ID: %d, Name: %s, Instructor: %s\n", 
                   uni->departments[i].courses[j].courseID, 
                   uni->departments[i].courses[j].courseName, 
                   uni->departments[i].courses[j].instructorName);
            for (int k = 0; k < uni->departments[i].courses[j].stdcount; k++) {
                printf("\t\tStudent ID: %d, Name: %s\n", 
                       uni->departments[i].courses[j].students[k].stdid, 
                       uni->departments[i].courses[j].students[k].stdname);
            }
        }
    }
}

int main() {
    struct University uni;
    uni.departmentCount = 0;
    int choice;

    do {
        printf("\nUniversity Management System\n");
        printf("1. Add Department\n");
        printf("2. Add Course\n");
        printf("3. Add a student in Course\n");
        printf("4. Display University Information\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                adddept(&uni); 
                break;
            case 2: 
                addcourse(&uni); 
                break;
            case 3: 
                addstdincourse(&uni); 
                break;
            case 4: 
                displayinfo(&uni); 
                break;
            case 5: 
                printf("Exited\n"); 
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

