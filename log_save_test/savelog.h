#ifndef SAVELOG_H
#define SAVELOG_H

#include <QObject>
#include <fstream>
#include <string>
#include <iostream>

class SaveLog :public QObject
{
    Q_OBJECT
public:
    SaveLog();
    Q_INVOKABLE void writeLog(QString date , QString comment);
    Q_INVOKABLE void openFile(QString fileUrl);
    Q_INVOKABLE void closeFile();
private:
    std::ofstream writing_file;

};


#endif // SAVELOG_H
