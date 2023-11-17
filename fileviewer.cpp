#include "fileviewer.h"
#include "ui_fileviewer.h"

FileViewer::FileViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FileViewer)
{
    ui->setupUi(this);

    this->setWindowTitle("File viewer");
    this->resize(500, 700);

    QVBoxLayout *vertical_layout = new QVBoxLayout(this);

    textBox = new QTextEdit();
    vertical_layout->addWidget(textBox);

    buttonOpenFile = new QPushButton("Открыть файл");
    vertical_layout->addWidget(buttonOpenFile);

    QObject::connect(buttonOpenFile, SIGNAL(clicked()), this, SLOT(openFile()));
}

FileViewer::~FileViewer()
{
    delete ui;
}

void FileViewer::openFile()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Выберите файл", "", "Текстовый файл (*.txt)");

    if (!filePath.isEmpty())
    {
        QFile file(filePath);

        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream stream(&file);
            QString fileContent = stream.readAll();

            textBox->setText(fileContent);

            file.close();
        }
        else
        {
            QMessageBox::critical(this, "Ошибка", "Не удалось открыть файл.");
        }
    }
}
