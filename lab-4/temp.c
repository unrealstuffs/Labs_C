#include <stdlib.h>

#define NUMBER 7

struct AEROFLOT{
	char destination[30];
	int numReisa;
	char tipSamoleta[10];
};


int main()
{
	struct AEROFLOT aAEROFLOT[NUMBER];
	int i;
	int count=0;
	char tip[10];
	//Заполняем
	for (i = 0; i<NUMBER; i++){
		printf("\nAEROFLOT %i\nEnter destination: ", i+1);
		scanf("%s", aAEROFLOT[i].destination);
		printf("\nAEROFLOT %i\nEnter number of the flight: ", i+1);
		scanf("%d", &(aAEROFLOT[i].numReisa));
		printf("Enter type of airplane: ");
		scanf("%s", aAEROFLOT[i].tipSamoleta);
	};


	printf("Enter type of airplane: ");
	scanf("%s", tip);

	for(i =0; i < NUMBER; i++)
	{
		if(strcmp(aAEROFLOT[i].tipSamoleta,tip)==0)
		{
		printf("Destination - %s. ",aAEROFLOT[i].destination);
		printf("Number of flight - %d\n",aAEROFLOT[i].numReisa);
		count++;
		}
	};
	if(count==0)
	printf("Net reisov!");

	return 0;
}