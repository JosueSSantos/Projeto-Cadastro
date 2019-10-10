#ifndef CADASTROSECAO_H
#define CADASTROSECAO_H

#include <QWidget>

namespace Ui {
class CadastroSecao;
}

class CadastroSecao : public QWidget
{
    Q_OBJECT

public:
    explicit CadastroSecao(QWidget *parent = nullptr);
    ~CadastroSecao();

private:
    Ui::CadastroSecao *ui;
};

#endif // CADASTROSECAO_H
