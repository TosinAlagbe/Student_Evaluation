#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include "academiccalendar.h"

class QDataStream;

class Student
{
public:
    Student(){}
    Student(QString first_name, QString surname,
            QString matric, Session entry_session)
        :fst_nm{first_name}, snme{surname},
          mtrc{matric}, entry_sessn{entry_session}{}

//private:

    QString current_level;

    QString snme;
    QString fst_nm;
   // QString current_lvl;
    QString mtrc;
    Session entry_sessn;
};

QDataStream &operator<<(QDataStream& out, Student student);
QDataStream &operator>>(QDataStream &in, Student& student);

#endif // STUDENT_H
