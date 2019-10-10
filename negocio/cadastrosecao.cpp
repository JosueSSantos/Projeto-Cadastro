#include "cadastrosecao.h"
#include "ui_cadastrosecao.h"

CadastroSecao::CadastroSecao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CadastroSecao)
{
    ui->setupUi(this);
}

CadastroSecao::~CadastroSecao()
{
    delete ui;
}
