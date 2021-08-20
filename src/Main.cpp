#include "Gui.h"

#include <QString>
#include <QWorkspace>

int main(int argc, char** argv)
{
    QApplication a(argc, argv);

    QString b = QString::fromAscii("test");
 
    return a.exec();
}
