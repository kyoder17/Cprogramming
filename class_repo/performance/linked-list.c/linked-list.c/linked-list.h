#pragma once
#ifndef LINKNED_LIST_HEADER
#define LINKNED_LIST_HEADER
typedef struct studentInfo {
	char name[256];
	char initials[256];
	char artist[256];
	char car[256];
	int studentNumber;
	struct studentInfo * next_node;

}node;
//this will print all student info
extern void printAllInfo(struct studentInfo *head);
//this will be the menu
extern int selectPrint();
//this will print specific info base on user selection
extern void printSelectInfo(struct studentInfo *head, int selection);
//for testign purposes
extern void testImput(struct studentInfo *head);
//this will print a specific student
extern void printSpecialStudent(struct studentInfo *head, int selectStud);
//this will be the selection of the specific student to print
extern int selectStudent(struct studentInfo *head);

extern void addStudentEnd(struct studentInfo *head);

extern void removeStudentEnd(struct studentInfo *head);

extern void removeSpecificStudent(struct studentInfo *head);

extern int resetStudentNumber(struct studentInfo *head);
#endif