#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Name{

    char fname[50];
    char mname[50];
    char lname[50];
};

struct Address{

    char house_no[10];
    char street_name[50];
    char city_name[50];

};

struct DateOfBirth{

    int date;
    int month;
    int year;
};

struct DateOfJoining{

    char date[3];
    char month[30];
    char year[5];
};

struct Employee{

    struct Name name;
    char sex[10];
    struct Address address;
    char pincode[6];
    char country[50];
    char email[50];
    char contact_no[10];
    struct DateOfBirth dateofbirth;
    char occupation[100];
    char designation[100];
    struct DateOfJoining dateofjoining;
    char basic_salary[100];
};
