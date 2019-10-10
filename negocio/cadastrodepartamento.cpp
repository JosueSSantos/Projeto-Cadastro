#include "cadastrodepartamento.h"
#include "ui_cadastrodepartamento.h"

CadastroDepartamento::CadastroDepartamento(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CadastroDepartamento)
{
    ui->setupUi(this);
}

CadastroDepartamento::~CadastroDepartamento()
{
    delete ui;
}
