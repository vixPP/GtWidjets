#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //задать имена обеим RadioButton, которые отображаются на форме;

    ui->radioButton->setText("Нет");
    ui->radioButton_2->setText("Да");

    //добавить несколько элементов в выпадающий список, но не больше 10;
    ui->comboBox->addItem("Элемент 1");
    ui->comboBox->addItem("Элемент 2");
    ui->comboBox->addItem("Элемент 3");
    ui->comboBox->addItem("Элемент 4");
    ui->comboBox->addItem("Элемент 5");
    ui->comboBox->addItem("Элемент 6");

    //изменить надпись на кнопке;
    ui->pushButton->setText("Нажмите для увеличения на 10%");
    ui->pushButton->setCheckable(true);

    //установить начальные значения прогресс-бара: минимум 0, максимум 10, текущее 0.
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(10);
    ui->progressBar->setValue(0);

}
 //По каждому нажатию на кнопку прогресс-бар должен увеличиваться на 10%. При увеличении более чем на 100% прогресс-бар должен сбрасываться на 0.
void MainWindow::on_pushButton_clicked()
{
    int currentValue = ui->progressBar->value();
        int newValue = currentValue + 1; // 10% от 10

        if (newValue > 10) {
            ui->progressBar->setValue(0); // Сбрасываем прогресс-бар
        } else {
            ui->progressBar->setValue(newValue);
        }
}

MainWindow::~MainWindow()
{
    delete ui;
}
