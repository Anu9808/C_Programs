#include<stdio.h>
#include<conio.h>
#define SIZE 10

struct node {
	int data[SIZE];
	node *next;
};

 void node(){
     int p,data[SIZE];
			for(p=0; p<SIZE; p++) {
				data[p] = 0;
			}
			next = NULL;
}

void node2(int v[], int n1) {
    int s,data[SIZE];
			for(s = 0; s < n1; s++) {
				data[s] = v[s];
			}
			next = NULL;
}

*start=NULL;

int main() {
	int n,i,j,k,events, sent, receive, sentE, recE, commLines = 0;
	node *temp;
	node *temp1;
	node *proc[SIZE];
	node *newnode;
	node *tempS, *tempR;	//array of processes
	printf("Enter no. of processes: ");
	scanf("%d",&n);
	int vector[n] = {0};	//representation of data

	/----------------INITIALIZATION LOOP-------------------------/
	for(i = 0; i < n; i++) {	//number of processes
		for(v = 0; v < n; v++) {
			vector[v] = 0;
		}

		printf("Enter no. of events in process ",i+1);
		scanf("%d",&events);

		for(j = 1; j <= events; j++) {
			vector[i] = j;
			*newnode = node2(vector,n);
			if(start == NULL) {
				start = newnode;
				temp = start;
			} else {
				temp->next = newnode;
				temp = temp->next;
			}
		}
		proc[i] = start;
		start = NULL;
	}

	/-------------------DATA GATHERING--------------------/
	printf("\nEnter the number of communication lines: ");
	scanf("%d",&commLines);


	for(i = 0; i < commLines; i++) {
		printf("\nEnter the sending process: ");
		scanf("%d",&sent);
		printf("\nEnter the receiving process: ");
		scanf("%d",&receive);
		printf("\nEnter the sending event number: ");
		scanf("%d",&sentE);
		printf("\nEnter the receiving event number: ");
        scanf("%d",&recE);

		tempS = proc[sent - 1];
		tempR = proc[receive - 1];

		for(j = 1; j < sentE; j++)
			tempS = tempS->next;

		for(j = 1; j < recE; j++)
			tempR = tempR->next;

		for(j = 0; j < n; j++) {
			tempR->data[j] = (tempR->data[j] < tempS->data[j]) ? tempS->data[j] : tempR->data[j];
		}
	}

	/-------------------DISPLAYING------------------------/
	printf("\nThe resulting vectors are:\n\n");
	for(k = 0; k < n; k++) {
		printf("Process ",k + 1);

		node *temp1 = proc[k];
		while(temp1) {
			printf("(");
			for(int f = 0; f < n - 1; f++)
				printf("%d,",temp1->data[f]);

			printf("%d",temp1->data[n-1]);
			printf(")");
			temp1 = temp1->next;
		}
		printf("\n");
	}

	return 0;
}
