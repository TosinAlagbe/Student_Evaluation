#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>
#include "courseregistration.h"
#include "studentregistration.h"
#include "assessment.h"

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDialog(QWidget *parent = 0);
    ~RegisterDialog();

private slots:
    void courseRegClicked();
    void studentRegClicked();
    void updateAssessmentClicked();


private:
    Ui::RegisterDialog *ui;
    CourseRegistration *courseRegg = nullptr;
    StudentRegistration *studentReg = nullptr;
    Assessment *assessment = nullptr;
};

#endif // REGISTERDIALOG_H
