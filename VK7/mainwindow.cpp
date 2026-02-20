#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Kytketään numeronapit n0-n9
    connect(ui->N0, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N1, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N2, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N3, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N4, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N5, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N6, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N7, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N8, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N9, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);

    // Kytketään operaatiot
    connect(ui->add, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);

    // Kytketään enter ja clear
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    QString digit = name.last(1); // eristetään numero nimen lopusta n5->5

    if (state == 1) {
        number1.append(digit);
        ui->num1->setText(number1);
    } else {
        number2.append(digit);
        ui->num2->setText(number2);
    }
}


void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if (name == "add") operand = 0;
    else if (name == "sub") operand = 1;
    else if (name == "mul") operand = 2;
    else if (name == "div") operand = 3;

    state = 2; // state 2 tarkoittaa että siirrytään syöttämään toista lukua
}

// enter ja clear napin käsittelijä
void MainWindow::clearAndEnterClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if (name == "enter") {
        float n1 = number1.toFloat(); // muutetaan floatiksi
        float n2 = number2.toFloat();


        if (operand == 0) result = n1 + n2;
        else if (operand == 1) result = n1 - n2;
        else if (operand == 2) result = n1 * n2;
        else if (operand == 3) result = (n2 != 0) ? n1 / n2 : 0;

        ui->result->display(result); // Tulostetaan tulos
    }
    else if (name == "clear") {
        // Nollataan kaikki kentät ja state takaisin 1
        state = 1;
        number1 = "";
        number2 = "";
        ui->num1->clear();
        ui->num2->clear();
        ui->result->display(0);
    }
}
