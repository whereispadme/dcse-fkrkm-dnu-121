#ifndef STUDENT_H
#define STUDENT_H

#include "headers.h"

class Student
{

protected:
    QString _student_group_name;
    QString _student_lastname;
    QString _student_book_number;

public:
    Student();
    Student(const QString &, const QString &, const QString &);
    ~Student();

    void setStudentGroupName(const QString &);
    void setStudentLastname(const QString &);
    void setStudentBookNumber(const QString &);

    const QString &getStudentGroupName() const;
    const QString &getStudentLastname() const;
    const QString &getStudentBookNumber() const;

};

#endif
