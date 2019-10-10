#ifndef CADASTRODEPARTAMENTO_H
#define CADASTRODEPARTAMENTO_H

#include <QWidget>

namespace Ui {
class CadastroDepartamento;
}

class CadastroDepartamento : public QWidget
{
    Q_OBJECT

public:
    explicit CadastroDepartamento(QWidget *parent = nullptr);
    ~CadastroDepartamento();

private:
    Ui::CadastroDepartamento *ui;
};

#endif // CADASTRODEPARTAMENTO_H
