
/*
* queue.h: header file for the queue functions
*/

//struct for the patient
typedef struct Patient
{
    unsigned long patientNum;
    int PatientAge;
}PATIENT;

//Struct for the nodepointer in the queue
typedef struct node
{
    PATIENT patient;
    struct node* pNext;
}NODE;

//Strut for the queue
typedef struct queue
{
    int count;
    NODE* head;
    NODE* tail;

}QUEUE;

//Initializes the queue
void InitQueue(QUEUE* q);

//checks if the queue is empty
int IsQueueEmpty(QUEUE* q);

//Adds patient to the queue
void Enqueue(QUEUE* q, PATIENT pat);

//Removes from the queue
NODE* Dequeue(QUEUE* q);

//Displays the patients in the queue
void DisplayQueue(NODE* fromHead);