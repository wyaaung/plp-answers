#include <stdlib.h>
#include <cstring>
#include <iostream>
#include "Employee.h"

using namespace std;

int Employee::get_id(){
    return _id;
}

char* Employee::get_name(){
    return _name;
}

char* TemporaryEmployee::get_end_date(){
    return _end_date;
}

int PermanentEmployee::get_office_number(){
    return _office_number;
}

Consultant::Consultant(int id, char *name, char *end_date, char *topic){
    _id = id;
    _name = (char*) malloc((strlen(name)+1) * sizeof(char));
    strcpy(_name, name);
    _end_date = (char*) malloc((strlen(end_date)+1) * sizeof(char));
    strcpy(_end_date, end_date);
    _topic = (char*) malloc((strlen(topic)+1) * sizeof(char));
    strcpy(_topic, topic);
}

void Consultant::consult(){
    cout << "[" << _id << " - " << _name << "] I'm consulting on " << _topic << " until " << _end_date;
}

Consultant::~Consultant(){
    free(_name);
    free(_end_date);
    free(_topic);
}

Manager::Manager(int id, char *name, int office_number){
    _id = id;
    _name = (char*) malloc((strlen(name)+1) * sizeof(char));
    strcpy(_name, name);
    _office_number = office_number;
}

void Manager::take_important_decision(){
    cout << "[" << _id << " - " << _name << "] I'm taking an important decision in office " << _office_number;
}

Manager::~Manager(){
    free(_name);
}

Director::Director(int id, char *name, int office_number){
    _id = id;
    _name = (char*) malloc((strlen(name)+1) * sizeof(char));
    strcpy(_name, name);
    _office_number = office_number;
}

void Director::take_very_important_decision(){
    cout << "[" << _id << " - " << _name << "] I'm taking an very important decision in office " << _office_number;
}

Director::~Director(){
    free(_name);
}
