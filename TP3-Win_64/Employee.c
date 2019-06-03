#include "Employee.h"

Employee* employee_new()
{
    Employee * myEmployee;
    myEmployee = (Employee*) malloc(sizeof(Employee));

    if (myEmployee!=NULL)
    {
        myEmployee->id = 0;
        strcpy(myEmployee->nombre, " ");
        myEmployee->horasTrabajadas = 0;
        myEmployee->sueldo=0;
    }
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr)
{

}

void employee_delete()
{

}

int employee_setId(Employee* this,int id)
{
    int validation=0;

    if(this!=NULL)
    {
        this->id=id;
        validation=1;
    }

    return validation;
}

int employee_getId(Employee* this,int* id)
{
    int validation=0;

    if(this!=NULL&&id!=NULL)
    {
        id=this->id;
        validation=1;
    }

    return validation;
}

int employee_setNombre(Employee* this,char* nombre)
{
    int validation=0;

    if(this!=NULL)
    {
      strcpy(this->nombre,nombre);
      validation=1;
    }

    return validation;
}

int employee_getNombre(Employee* this,char* nombre)
{
    int validation=0;

    if(this!=NULL&&nombre!=NULL)
    {
        strcpy(nombre,this->nombre);
        validation=1;
    }
    return validation;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int validation=0;

    if(this!=NULL)
    {
        this->horasTrabajadas=horasTrabajadas;
        validation=1;
    }

    return validation;

}

int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
    int validation=0;
    if(this!=NULL&&horasTrabajadas!=NULL)
    {
        horasTrabajadas=this->horasTrabajadas;
        validation=1;
    }

    return validation;
}

int employee_setSueldo(Employee* this,int sueldo)
{
    int validation=0;

    if(this!=NULL)
    {
        this->sueldo=sueldo;
        validation=1;
    }
    return validation;
}

int employee_getSueldo(Employee* this,int* sueldo)
{
    int validation=0;

    if(this!=NULL&&sueldo!=NULL)
        {
            sueldo=this->sueldo;
            validation=1;
        }
    return validation;
}
