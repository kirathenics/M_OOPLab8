#include "colorchanger.h"
#include "ui_colorchanger.h"

ColorChanger::ColorChanger(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ColorChanger)
{
    ui->setupUi(this);

    this->setWindowTitle("Color changer");
    this->setGeometry(250, 300, 500, 300);

    QGridLayout *grid_layout = new QGridLayout(this);

    red_label = new QLabel("Red");
    green_label = new QLabel("Green");
    blue_label = new QLabel("Blue");

    red_spinBox = new QSpinBox();
    red_spinBox->setMaximum(255);
    green_spinBox = new QSpinBox();
    green_spinBox->setMaximum(255);
    blue_spinBox = new QSpinBox();
    blue_spinBox->setMaximum(255);

    red_slider = new QSlider(Qt::Horizontal);
    red_slider->setRange(0, 255);
    green_slider = new QSlider(Qt::Horizontal);
    green_slider->setRange(0, 255);
    blue_slider = new QSlider(Qt::Horizontal);
    blue_slider->setRange(0, 255);

    rgbViewer = new QPlainTextEdit();
    rgbViewer->setEnabled(false);

    grid_layout->addWidget(red_label, 0, 0);
    grid_layout->addWidget(green_label, 1, 0);
    grid_layout->addWidget(blue_label, 2, 0);
    grid_layout->addWidget(red_spinBox, 0, 1);
    grid_layout->addWidget(green_spinBox, 1, 1);
    grid_layout->addWidget(blue_spinBox, 2, 1);
    grid_layout->addWidget(red_slider, 0, 2);
    grid_layout->addWidget(green_slider, 1, 2);
    grid_layout->addWidget(blue_slider, 2, 2);
    grid_layout->addWidget(rgbViewer, 0, 3, 3, 3);

    QObject::connect(red_spinBox, SIGNAL(valueChanged(int)), red_slider, SLOT(setValue(int)));
    QObject::connect(green_spinBox, SIGNAL(valueChanged(int)), green_slider, SLOT(setValue(int)));
    QObject::connect(blue_spinBox, SIGNAL(valueChanged(int)), blue_slider, SLOT(setValue(int)));

    QObject::connect(red_slider, SIGNAL(sliderMoved(int)), red_spinBox, SLOT(setValue(int)));
    QObject::connect(green_slider, SIGNAL(sliderMoved(int)), green_spinBox, SLOT(setValue(int)));
    QObject::connect(blue_slider, SIGNAL(sliderMoved(int)), blue_spinBox, SLOT(setValue(int)));

    QObject::connect(red_spinBox, SIGNAL(valueChanged(int)), this, SLOT(setColor()));
    QObject::connect(green_spinBox, SIGNAL(valueChanged(int)), this, SLOT(setColor()));
    QObject::connect(blue_spinBox, SIGNAL(valueChanged(int)), this, SLOT(setColor()));
    setColor();
}

ColorChanger::~ColorChanger()
{
    delete ui;
}

void ColorChanger::setColor()
{
    QColor color(red_spinBox->value(), green_spinBox->value(), blue_spinBox->value());
    QString style = "background: " + color.name();
    rgbViewer->setStyleSheet(style);
}
