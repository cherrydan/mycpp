#ifndef QLISTMODEL_H
#define QLISTMODEL_H

#include <QAbstractListModel>
#include <QSize>
#include <QBrush>
#include <QFont>
#include <QStringList>



class QListModel : public QAbstractListModel {
    Q_OBJECT
public:
    explicit QListModel(QObject *parent = 0);

    //Возвращает кол-во элементов списка
    int rowCount(const QModelIndex &parent = QModelIndex()) const;

    //Возвращает значение элемента списка
    QVariant data(const QModelIndex &index, int role) const;

    //Сохраняет новое значение элемента
    bool setData(const QModelIndex &index, const QVariant &value, int role);

    //Возвращает флаг редактируемости элемента
    Qt::ItemFlags flags(const QModelIndex &index) const;

private:
    QList<int> list;

signals:

public slots:



};

#endif // QLISTMODEL_H

