#include "cadastrofilial.h"
#include "ui_cadastrofilial.h"
#include <QSqlQuery>
CadastroFilial::CadastroFilial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CadastroFilial)
{
    ui->setupUi(this);

}

CadastroFilial::~CadastroFilial()
{
    delete ui;
}
