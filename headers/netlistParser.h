/*
 * netlistParser.h
 *
 *  Created on: Mar 28, 2018
 *      Author: pawel
 */

#include "main.h"

//, C, L, VCVS, VCCS, CCVS, CCCS
typedef enum {Resistor, Vsource, Isource} element_type;

typedef struct
{
	uint32_t number;
	char name[MAX_ALLIAS_LENGTH];
}numerical_allias;

 typedef struct
{
	uint32_t ID;
	numerical_allias pNode;
	numerical_allias nNode;
	float 			 value;
}primitive_element;

//typedef primitive_element Resistor;
//typedef primitive_element CurrentSource;


/// other structs related to the rest of elements


typedef struct
{
	primitive_element resistors[100];
	primitive_element CurrentSources[100];

	///... and others

}rawData;


void readNetlist(char* fLocation, rawData* dest);

void addElement(char* line, element_type elem);



























//
//typedef struct
//{
//uint32_t ID;
//uint32_t pNode;     //positive node of device
//uint32_t nNode;
//float    value;
//element_type element;
//}primitive_element;
//
//
//
//







/*




#ifndef HEADERS_NETLISTPARSER_H_
#define HEADERS_NETLISTPARSER_H_


#define MAX_ARRAY_SIZE 512
#define MAX_NODE_LENGTH 16
#define MAX_ELEM_NAME_LENGTH 16
#define MAX_NUM_ELEMENTS 512

#define MAX_INTEEGRATION_DIFFERENTIATION_STEPS 4


class SpicyList {

public:

    ;
//    SpicyList();
//    SpicyList::SpicyList(uint32_t sizeofArray);

    enum elemType
    {
    resistor, Vsource, Isource//, C, L, VCVS, VCCS, CCVS, CCCS
    };

    uint32_t            addElement(elemType type, char* pNode, char* nNode); //returns id of element, if fails, return 0

//    Eigen::VectorXf     compute(void); //returns pointer to results, if it fails to compute, returns NULL


private:

   // Eigen::MatrixXf G;
    //Eigen::MatrixXf Gconst;

//    Eigen::VectorXf V;

  //  Eigen::VectorXf I;
  //  Eigen::VectorXf Iconst;

  //  uint32_t nodeNo [MAX_ARRAY_SIZE];
  //  uint32_t currentArraySize;

    typedef struct
    {
    uint32_t pNode;     //positive node of device
    uint32_t nNode;
    float    value;
    uint32_t ID;
    elemType element;
    }primitive_elem;

    typedef primitive_elem resistor_t;
    typedef primitive_elem currentSource_t;

    typedef struct
    {
    primitive_elem ret;
    float prevValue[4];
    }retentive_elem;

    typedef retentive_elem capacitor_t;
    typedef retentive_elem inductor_t;

    struct
    {
    primitive_elem inputTerminal;
    uint32_t pOutNode;
    uint32_t nOutNode;
    }controled_elem;



};




#define MAX_MATRIX_SIZE 512

class SpiceMatrix {

private:

    uint64_t data[MAX_MATRIX_SIZE ][MAX_MATRIX_SIZE ];

    struct
    {
        uint32_t R;
        uint32_t C;
        uint32_t L;
        uint32_t V;
        uint32_t I;
        uint32_t CCCS;
        uint32_t CCVS;
        uint32_t VCVS;
        uint32_t VCCS;
    }DeviceElement;


public:

enum DeviceType
        {
            R, C, L, V, I, CCCS, CCVS,VCVS,VCCS
        }


        addElement()


        fill();

}



uint32_t SpiceParser::parseFile(char* path)
{
char tmpPath[] = "/home/pawel/workspace/codeblocks/PawSPICEcpp/netlist.cir";

std::ifstream fileH(tmpPath);

if(!fileH)
{
        std::cout << "Error opening file. \n";
        return -1;
}
//fileH.getline()

while(!fileH.eof())
{
    char singleLine[100];
    fileH.getline(singleLine, 100, '\n');

    parseLine(singleLine);



    memset(singleLine, 0, 100);
    std::cout << singleLine << std::endl;
}

fileH.close();

return 0;



}
*/


//#endif /* HEADERS_NETLISTPARSER_H_ */
