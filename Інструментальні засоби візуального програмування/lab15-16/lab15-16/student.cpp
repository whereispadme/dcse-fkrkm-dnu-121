#include "student.h"

Student::Student()
{
    _student_group_name = "";
    _student_lastname = "";
    _student_book_number = "";
}

Student::Student(const QString &student_group_name, const QString &student_lastname, const QString &student_book_number)
{
    _student_group_name = student_group_name;
    _student_lastname = student_lastname;
    _student_book_number = student_book_number;
}

Student::~Student()
{
}

void Student::setStudentGroupName(const QString &student_group_name)
{
    _student_group_name = student_group_name;
}

void Student::setStudentLastname(const QString &student_lastname)
{
    _student_lastname = student_lastname;
}

void Student::setStudentBookNumber(const QString &student_book_number)
{
    _student_book_number = student_book_number;
}

const QString &Student::getStudentGroupName() const
{
    return this->_student_group_name;
}

const QString &Student::getStudentLastname() const
{
    return this->_student_lastname;
}

const QString &Student::getStudentBookNumber() const
{
    return this->_student_book_number;
}
