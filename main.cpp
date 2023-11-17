#include "colorchanger.h"
#include "fileviewer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ColorChanger w1;
    w1.show();

    FileViewer w2;
    w2.show();
    return a.exec();
}
