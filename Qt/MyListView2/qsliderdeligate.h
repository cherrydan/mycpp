#ifndef QSLIDERDELIGATE_H
#define QSLIDERDELIGATE_H


#include <QStyledItemDelegate>
#include <QSlider>
#include <QProgressBar>

class QSliderDeligate : public QStyledItemDelegate {
    Q_OBJECT

public:
    explicit QSliderDeligate(QObject *parent = 0);

    //Создает виджет редактора значения
    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;

    //Передает значение от модели в редактор
    void setEditorData(QWidget *editor, const QModelIndex &index) const;

    //Передает значение от редактора в модель
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;

    //Задает геометрию редактора
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const;

    //Отрисовывает ячейку элемента
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

signals:

public slots:



};


#endif // QSLIDERDELIGATE_H

