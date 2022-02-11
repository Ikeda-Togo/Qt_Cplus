#include "savelog.h"

SaveLog::SaveLog()
{

}
void SaveLog::writeLog(QString date, QString comment)
{
    writing_file << date.toStdString() << " " << comment.toStdString() << std::endl;
}
void SaveLog::openFile(QString fileUrl)
{
    std::cout<< "File path : " << fileUrl.toStdString().substr(8)<<std::endl;
    writing_file.open(fileUrl.toStdString().substr(8), std::ios::out);
    if (!writing_file)
    {
        std::cout << "Error: file is not open" << std::endl;
    } else{
        std::cout << "File is open!" << std::endl;
    }
}
void SaveLog::closeFile()
{
    writing_file.close();
}


