#include "cadastro.h"
#include "ui_cadastro.h"
#include "qdebug.h"
#include "cadastrofilial.h"
#include <QMessageBox>
Cadastro::Cadastro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);
    configuracaoInicial();
     QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
        db.setHostName("localhost");
        db.setDatabaseName("dani");
        db.setUserName("postgres");
        db.setPassword("87831107");
        db.setPort(5432);

        if (db.open()){
            qDebug() << "deu certo abrir o banco";
            db.close();
        } else {
            qDebug() << "não abriu o banco";
        }
}

Cadastro::~Cadastro()
{
    delete ui;
}

void Cadastro::cliclouPbSalvar()
{
//    dBase = ui-> caixa_Base ->text().toDouble();
//    dProdutos = ui->caixa_Prod->text();


    qDebug() << "log/Clique -> Botão salvar";

}
    //Log's Botões
void Cadastro::on_btClicked_Filial()
    {
        qDebug() << "log/Clique -> Botão pesquisa Filial ";
    }
void Cadastro :: on_btClicked_Departamento()
    {
        qDebug() << "log/Clique -> Botão pesquisa Departamento ";
    }

void Cadastro::on_btClicked_Secao()
    {
        qDebug() << "log/Clique -> Botão pesquisa Seção ";
    }

void Cadastro::on_btClicked_Categoria()
    {
        qDebug() << "log/Clique - > Botão pesquisa Categoria";

    }

void Cadastro::on_btCiked_Produto()
    {
        qDebug() << "log/Clique -> Botão pesquisa Produto ";
    }


void Cadastro::on_btClicked_btLimpar()
    {
        qDebug() << "log/Clique -> Botão Limpar";
    }

    //Log's Caixas de Dialogos
void Cadastro::on_caixaEnter_Filial()
    {
    if(ui->caixa_Filial->text().isEmpty())
    {
        QMessageBox::about(this, "Alerta!", "Por favor, preencha todos os campos!");
    }else {QString a = ui->caixa_Filial->text().toUpper();
        CadastroFilial* cadastroFilial = new CadastroFilial;
        cadastroFilial->setDescrição(a);

    }
    qDebug()<< "log/Clique -> Caixa de texto Filial";
    }

void Cadastro::on_caixaEnter_Departamento()
    {
        qDebug() << "log/Clique -> Caixa de Texto Departamento";
    }

void Cadastro::on_caixaEnter_Secao()
    {
        qDebug() << "log/Clique -> Caixa de Texto Seção";
    }

void Cadastro::on_caixaEnter_Categoria()
    {
        qDebug() << "log/Clique -> Caixa de Texto Categoria";
    }

void Cadastro::on_caixaEnter_Produto()
    {
        qDebug() << "log/Clique -> Caixa de Texto Produto";
    }

void Cadastro::on_caixaEnter_Base()
    {
     ui->caixa_Base->setInputMask("000,00");
        qDebug() << "log/Clique -> Caixa de Texto Base";
    }

void Cadastro::configuracaoInicial()
    {
        setConteiners();
    }
void Cadastro:: setConteiners()
{

    //Log's Botões;
     connect(ui -> bt_Filial ,SIGNAL(clicked()),this,SLOT(on_btClicked_Filial()));
     connect(ui -> bt_Dep,SIGNAL(clicked()),this,SLOT(on_btClicked_Departamento()));
     connect(ui -> bt_Secao,SIGNAL(clicked()),this,SLOT(on_btClicked_Secao()));
     connect(ui -> bt_Categ,SIGNAL(clicked()),this,SLOT(on_btClicked_Categoria()));
     connect(ui -> bt_Produto,SIGNAL(clicked()),this,SLOT(on_btCiked_Produto()));

     // log's Salvar/Limpar
     connect(ui -> bt_Limpar,SIGNAL(clicked()),this,SLOT(on_btClicked_btLimpar()));



     //connect(btui -> bt_Salvar,SIGNAL(clicked()),this,SLOT(on_clicked_btSalvar()));

     connect(ui -> bt_Salvar,SIGNAL(clicked()),this,SLOT(cliclouPbSalvar()));


     //Log's caixas
     connect(ui -> caixa_Filial,SIGNAL(returnPressed()),this,SLOT(on_caixaEnter_Filial()));
     connect(ui -> caixa_Depart,SIGNAL(returnPressed()),this,SLOT(on_caixaEnter_Departamento()));
     connect(ui -> caixa_Secao,SIGNAL(returnPressed()),this,SLOT(on_caixaEnter_Secao()));
     connect(ui -> caixa_Categoria,SIGNAL(returnPressed()),this,SLOT(on_caixaEnter_Categoria()));
     connect(ui -> caixa_Produto,SIGNAL(returnPressed()),this,SLOT(on_caixaEnter_Produto()));
     connect(ui -> caixa_Base,SIGNAL(returnPressed()),this,SLOT(on_caixaEnter_Base()));


}

