#ifndef CADASTRO_H
#define CADASTRO_H
#include <QtSql/QSqlDatabase>

#include <QWidget>

namespace Ui {
class Cadastro;
}

class Cadastro : public QWidget
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();

private:
    QString dProdutos;
     double dBase;

private slots:
    //  log botões

    void on_btClicked_Filial();
    void on_btClicked_Departamento();
    void on_btClicked_Secao();
    void on_btClicked_Categoria();
    void on_btCiked_Produto();


    void on_btClicked_btLimpar();

    void cliclouPbSalvar();
    // log Caixa de Texto
    void met_Validacao(QString);


    void on_caixaEnter_Filial();
    void on_caixaEnter_Departamento();
    void on_caixaEnter_Secao();
    void on_caixaEnter_Categoria();
    void on_caixaEnter_Produto();
    void on_caixaEnter_Base();



private:
    Ui::Cadastro *ui;
    void configuracaoInicial();
    void setConteiners();
};

#endif // CADASTRO_H
