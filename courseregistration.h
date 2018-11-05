#ifndef COURSEREGISTRATION_H
#define COURSEREGISTRATION_H

#include <QWidget>
#include <QTableWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QStatusBar>
#include "level.h"
#include <QAbstractItemModel>
#include <QHash>
#include <QString>
#include "course.h"
#include <vector>

class RegisterDialog;
class Assessment;


class CourseRegistration : public QWidget
{
    Q_OBJECT

public:
    CourseRegistration(QWidget *parent = 0);
   // ~CourseRegistration();


private slots:
    void saveButtonClicked();
    void selectLevelComboChanged();
    void okButtonClicked();
    void cancelButtonClicked();


private:

    void createTable();
    void formatLayout();
    std::vector<Course> getTableData();
    void saveFile(QString filename);
    void loadFile(QString filename);

    QLabel *selectSemesterLabel;
    QLabel *comboBoxLabel;
    QTableWidget *courseReg;
    QComboBox *selectSemesterComboBox;
    QComboBox *selectLevelComboBox;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *registerButton;
    QPushButton *saveButton;
    QStatusBar *saveStatus;
    QAbstractItemModel *table;

    Level level100;
    Level level200;
    Level level300;
    Level level400;
    Level level500;
    friend class RegisterDialog;
    friend class Assessment;
    static QHash<QString, Level> *levels;
    std::vector<QString>l;



};

#endif // COURSEREGISTRATION_H
