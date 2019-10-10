#include "cadastrofilial.h"
#include <QSqlQuery>
CadastroFilial::CadastroFilial (QObject *parent) : QObject (parent)
{

}

int CadastroFilial::getId() const
{
    return id;
}

QString CadastroFilial::getDescrição() const
{
    return descrição;
}

void CadastroFilial::setDescrição(const QString &value)
{
   QSqlQuery query;
   query.prepare("insert into filial(filial) values ('" + value + "');");
   query.exec();
   //descrição = value;
}
