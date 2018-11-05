#ifndef STUDENTREGISTRATION_H
#define STUDENTREGISTRATION_H

#include <QWidget>
#include <vector>
#include <QHash>
#include <QSet>

class QTableWidget;
class QLabel;
class QLineEdit;
class QPushButton;
class Student;
class QComboBox;
class QAbstractItemModel;


class Assessment;

class StudentRegistration : public QWidget
{
    Q_OBJECT
public:
    StudentRegistration(QWidget* parent = 0);

private slots:
    void enterButtonClicked();
    void okButtonClicked();
    void saveButtonClicked();
    //void currentLevelComboChanged();

private:

    friend class Assessment;
    void saveFile(QString filename);
    void loadfile(QString filename);
    QLabel *enterSessionLabel;
    QLineEdit *sessionLineEdit;
    QLabel *choosCurrentLevelLabel;
    QComboBox *currentLevel;
    QTableWidget *studentReg;
    QPushButton *enterButton;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *saveButton;

    QAbstractItemModel *table;

    QSet<QString>sessions;
    //QSet<QString>levels;


    static QHash<QString,std::vector<Student> > *students;
    static QHash<QString, QString> *levels_map;

    std::vector<Student> getTableData();


};

#endif // STUDENTREGISTRATION_H
