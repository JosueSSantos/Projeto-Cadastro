#ifndef RELATORIOS_H
#define RELATORIOS_H

#include <QWidget>

namespace Ui {
class Relatorios;
}

class Relatorios : public QWidget
{
    Q_OBJECT

public:
    explicit Relatorios(QWidget *parent = nullptr);
    ~Relatorios();
private slots:

    void on_btClicked_Cadastro();
    void on_btClicked_Relatorio();
    void montarTw();



private:
    Ui::Relatorios *ui;
    void configuracaoRelatorio();
    void setConteiners();
};

#endif // RELATORIOS_H
