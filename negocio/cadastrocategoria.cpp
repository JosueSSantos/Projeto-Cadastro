#include "cadastrocategoria.h"
#include "ui_cadastrocategoria.h"

CadastroCategoria::CadastroCategoria(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CadastroCategoria)
{
    ui->setupUi(this);
}

CadastroCategoria::~CadastroCategoria()
{
    delete ui;
}


