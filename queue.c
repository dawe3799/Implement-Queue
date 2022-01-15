/*
* queue.c: file tha contains all the functions defined in queue.h
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

//this initializes the queue
void InitQueue(QUEUE *q)
{
    q->count = 0;
    q->head = NULL;
    q->tail = NULL;
}

//TO check if the queue is empty or not
int IsQueueEmpty(QUEUE* q)
{
    if (q->head == NULL)
    {
        return 1;
    }
    else 
    {
      	return 0;
    }
}

//To push patients into the queue
void Enqueue(QUEUE* q, PATIENT patients)
{
     NODE* temp;
     temp = malloc(sizeof(NODE));
     temp->patient = patients;
     temp->pNext = NULL;
     if (!IsQueueEmpty(q))
     {
        q->tail->pNext = temp;
        q->tail = temp;
     }
     else
     {
        q->head = q->tail = temp;
     }
     q->count++;  
}

//To Pop out the queue memebers
NODE* Dequeue(QUEUE* q)
{
    NODE* ptemp;  
    if (q->head == NULL)
    {
        return;
    }
    ptemp = q->head;
    q->head = q->head->pNext;  
    return(ptemp);
     //q->count--;   
}

//To display the patients in th queue
void DisplayQueue(NODE* fromHead)
{
    if (fromHead == NULL) {
        printf("NULL\n");
    }
    else
    {
        printf("Patient Age is %d - Patient ID is: %lu\n", fromHead->patient.PatientAge, fromHead->patient.patientNum);   
        DisplayQueue(fromHead->pNext);
    }
}

