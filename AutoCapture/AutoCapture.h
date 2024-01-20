#pragma once

#include <QtWidgets/QWidget>
#include "ui_AutoCapture.h"

class AutoCapture : public QWidget
{
    Q_OBJECT

public:
    AutoCapture(QWidget *parent = nullptr);
    ~AutoCapture();

private:
    Ui::AutoCaptureClass ui;
};
