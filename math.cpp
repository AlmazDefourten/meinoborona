#include "classes.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
int _mathObrabotchik(unsigned long int a)
{

    unsigned long long int i;
    while (a != 0)
    {
    a = a - a/2;
    i = i + 1;
    if (i > 184467440)
        return 0;
    }
    return i;
}
