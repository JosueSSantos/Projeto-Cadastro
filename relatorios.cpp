#include "relatorios.h"
#include "ui_relatorios.h"
#include "qdebug.h"
#include "cadastro.h"
#include <QMessageBox>
#include "QTableWidgetItem"
#include "cadastrobase.h"



Relatorios::Relatorios(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Relatorios)
{
    ui->setupUi(this);
    configuracaoRelatorio();
}

Relatorios::~Relatorios()
{
    delete ui;
}


void Relatorios::on_btClicked_Cadastro()
{
     ui->stCadastro->setCurrentIndex(1);
    qDebug() << "log/Clicou em Botão Cadastro";
}

void Relatorios::on_btClicked_Relatorio()
{

    ui ->stCadastro ->setCurrentIndex(0);
    qDebug() << "log/Clicou em Botão Relatorio";

}

void Relatorios::montarTw()
{
   QList<CadastroBase*>list;

   CadastroBase* card1 = new CadastroBase;
   card1 -> setCategoria(card1 -> categoria());
   card1 -> setProduto("Prod1");
   card1 -> setBase(1);

   list <<card1;
   CadastroBase* card2 = new CadastroBase;
   card2 -> setCategoria(card1 -> categoria());
   card2 -> setProduto("Prod2");
   card2 -> setBase(2);

   list <<card2;
   CadastroBase* card3 = new CadastroBase;
   card3 -> setCategoria(card1 -> categoria());
   card3 -> setProduto("Prod3");
   card3 -> setBase(3);

   list <<card3;
   int linha = 0;
    foreach (CadastroBase* card,list)
        {
        ui -> tableWidget->insertRow(linha);
        QTableWidgetItem* item = new QTableWidgetItem;
        item -> setText(card -> categoria());
        ui -> tableWidget-> setItem(linha,0,item);
        linha++;
        }
    }
void Relatorios ::configuracaoRelatorio()
{
    setConteiners();
    Cadastro* cadatro = new Cadastro();
    ui->stCadastro->addWidget(cadatro);

    montarTw();

}
void Relatorios :: setConteiners()
{

   connect(ui ->pbRelatorios,SIGNAL(clicked()),this,SLOT(on_btClicked_Relatorio()));
   connect(ui -> pbCadastro,SIGNAL(clicked()),this,SLOT(on_btClicked_Cadastro()));
}
