#ifndef FILEVIEWER_H
#define FILEVIEWER_H

#include <QWidget>
#include <QApplication>
#include <QObject>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QFileDialog>

namespace Ui {
class FileViewer;
}

class FileViewer : public QWidget
{
    Q_OBJECT

public:
    explicit FileViewer(QWidget *parent = nullptr);
    ~FileViewer();

private:
    Ui::FileViewer *ui;
    QPushButton *buttonOpenFile;
    QTextEdit *textBox;

public slots:
    void openFile();
};

#endif // FILEVIEWER_H
