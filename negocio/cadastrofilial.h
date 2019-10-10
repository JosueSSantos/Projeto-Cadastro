#ifndef CADASTROFILIAL_H
#define CADASTROFILIAL_H

#include <QWidget>

namespace Ui {
class CadastroFilial;
}

class CadastroFilial : public QWidget
{
    Q_OBJECT

public:
    explicit CadastroFilial(QWidget *parent = nullptr);
    ~CadastroFilial();

    QString getDescricao() const;
    void setDescricao(const QString &value);

private:
    QString Descricao;

    Ui::CadastroFilial *ui;
};

#endif // CADASTROFILIAL_H

QString CadastroFilial::getDescricao() const
{
return Descricao;
}

void CadastroFilial::setDescricao(const QString &value)
{
Descricao = value;
}
