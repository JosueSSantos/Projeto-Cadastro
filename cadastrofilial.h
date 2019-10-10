#ifndef CADASTROFILIAL_H
#define CADASTROFILIAL_H
#include <QObject>
#include<QSqlQuery>


class CadastroFilial : public QObject
{
    Q_OBJECT
public:
    explicit CadastroFilial(QObject *parent = nullptr);

    //CadastroFilial();
    int getId() const;

    QString getDescrição() const;
    void setDescrição(const QString &value);

private:
    int id;
    QString descrição;
};

#endif // CADASTROFILIAL_H
