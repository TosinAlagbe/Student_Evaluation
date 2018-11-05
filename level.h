#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include <QString>
#include <QHash>

class Course;
class QDataStream;

class Level
{
public:
    Level();
    /*
    Level(QString l)
    {
        courses[l][0] = first_sem;
        courses[l][1] = second_sem;
    }
    Level(quint16 level)
    {
        courses[lvls[level]][0] = first_sem;
        courses[lvls[level]][1] = second_sem;
    }*/
    void f()
    {

    }

    void get_level()
    {

    }

    std::vector<QString>lvls{"0","100 Level", "200 Level", "300 Level",
                             "400 Level", "500 Level", "600 Level"};

    QHash<QString, std::vector<std::vector<Course> > > courses;


    std::vector<Course>first_sem;
    std::vector<Course>second_sem;

   // std::unordered_map<QString, Student>students;

};

QDataStream &operator <<(QDataStream& out, Level level);
/*
{

}
*/
QDataStream  &operator >>(QDataStream &in, Level& level);

/*{

}
*/






























#endif // LEVEL_H
