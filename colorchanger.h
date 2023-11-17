#ifndef COLORCHANGER_H
#define COLORCHANGER_H

#include <QWidget>
#include <QApplication>
#include <QObject>
#include <QGridLayout>
#include <QLabel>
#include <QSpinBox>
#include <QSlider>
#include <QPlainTextEdit>

namespace Ui {
class ColorChanger;
}

class ColorChanger : public QWidget
{
    Q_OBJECT

public:
    explicit ColorChanger(QWidget *parent = nullptr);
    ~ColorChanger();

private:
    Ui::ColorChanger *ui;
    QLabel *red_label, *green_label, *blue_label;
    QSpinBox *red_spinBox, *green_spinBox, *blue_spinBox;
    QSlider *red_slider, *green_slider, *blue_slider;
    QPlainTextEdit *rgbViewer;

public slots:
    void setColor();
};

#endif // COLORCHANGER_H
