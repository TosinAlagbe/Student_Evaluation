#ifndef ACADEMICCALENDAR_H
#define ACADEMICCALENDAR_H

#include <QString>
#include <sstream>
#include <QTextStream>


class Session
{
public:
    Session()
    {
        year1 = 0;
        year2 = 0;
    }
    Session(QString yr)
        :session{yr}
    {
        QTextStream is(&yr);
        QChar slash;
        is>>year1>>slash>>year2;
    }
    friend Session operator++(Session& s)
    {
        s.year1 = s.year1 + 1;
        s.year2 = s.year2 + 1;
        return s;
    }
    friend Session operator+(quint16 a, const Session& s)
    {
        Session temp;
        temp.year1 = a + s.year1;
        temp.year2 = a + s.year2;
        return temp;
    }
    friend Session operator+(const Session& s, quint16 a)
    {
        Session temp;
        temp.year1 = a + s.year1;
        temp.year2 = a + s.year2;
        return temp;
    }

    QString current_lvl;
    QString session;
    quint16 year1;
    quint16 year2;

};

#endif // ACADEMICCALENDAR_H
