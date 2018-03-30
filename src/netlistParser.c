/*
 * netlistParser.c
 *
 *  Created on: Mar 28, 2018
 *      Author: pawel
 */

#include "netlistParser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void readNetlist(char* fLocation, rawData* dest)
{

FILE * fp;
const char tmpfLocation[] = "/home/pawel/workspace/eclipse/SPICY/netlist.cir";
ssize_t read;
size_t	len = 0;
char * line = NULL;

fp = fopen(/*fLocation*/tmpfLocation, "r");
if (fp == NULL)
	exit(EXIT_FAILURE);

//loop for each line
while ((read = getline(&line, &len, fp)) != -1)
{

	switch (*line)
	{
	case 'r':
	case 'R':
		addElement(line, Resistor);
		break;

	case 'i':
	case 'I':
		addElement(line, Isource);
		break;

	case 'v':
	case 'V':
	case 'c':
	case 'C':
	case 'l':
	case 'L':
//	case '' all controlled sources
		printf("not implemented yet xd\n");
		break;

	default:
		printf("there is a problem with a line: %s\n", line);
		break;
	}

free(line);
}//end of while


}






void addElement(char* line, element_type elem)
{
	char* token = strtok(line, " ");

	switch (elem) {
		case Resistor:
			token
			rawData.??

			break;
		default:
			break;
	}
//loop for each token in line. Token is a valid c string
/*
	char* token = strtok(line, " ");
	while(token != NULL)
	{


		}


		printf("%s",token);
		token = strtok(NULL, " ");

		//


		//
	}
*/
}



//	l















/*
uint32_t addElement(elemType elem, char* pNode, char* nNode)
{
    static uint32_t id =1;

    if(id>MAX_NUM_ELEMENTS)
        return 0;

    switch(elem)
    {
    case resistor:


        break;

    case Vsource:


        break;

    case Isource:


        break;

    default:
        return 0;

    }


    return id++;
}*/
