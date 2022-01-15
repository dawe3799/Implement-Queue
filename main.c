/*
*		PROG 72365 - Assignment-01
*		Written by Demmy Awe
*		Implementing Queue in C programming
*		Revision History
*		1.0 	February 23/2021
		1.1		February 24/2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "queue.h"
#define AGELIMIT 100
#define PATDIGIT 9

typedef int boolean;
#define true 1
#define false 0

int main(int argc, char *argv[])
{
	//initializing the queue
	QUEUE *queue;

	//initializing patient
	PATIENT patient;	
	
	unsigned long patientID;
	int patientAge;
	queue = malloc(sizeof(QUEUE));	

	InitQueue(queue);	
	
	int num;
	num = atoi(argv[1]);
	srand(time(0));

	if (argc <2 )
	{
		fprintf(stderr, "Must contain non zero\n");
		return(0);
	}
	
	for (int i = 0; i < num; i++)
	{
		patientAge = rand() % 100;
		patientID = rand() % 10000000 + 154956678;
		patient.PatientAge = patientAge;
		patient.patientNum = patientID;
		Enqueue(queue, patient);			
	}

	//To display the queue
	DisplayQueue(queue->head);
	
	//To try out the Is Empty Function
	/*if (IsQueueEmpty(queue) == true)
	{
		printf("The queue is empty: %d\n", true);
	}		
	else
	{
		printf("The queue is full: %d\n", false);
	}*/
		
	



	//To test the Dequeue function
	/*for (int i = 0; i < num; i++)
	{
		NODE* value = Dequeue(queue);
		printf("Patient Age is %d - Patient ID is: %lu\n", value->patient.PatientAge, value->patient.patientNum);		
	}*/

	printf("Press any key to end program ...");
	getchar();  // Keep console open until user presses enter 
	return(0);
	
	free(queue);
	return 0;
}