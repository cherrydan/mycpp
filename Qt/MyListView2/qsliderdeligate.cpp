#include "qsliderdeligate.h"
#include <QApplication>
#include <QStyleOptionProgressBar>



QSliderDeligate::QSliderDeligate(QObject *parent) : QStyledItemDelegate(parent)
{

}


//Создаем редактор в виде слайдера
QWidget *QSliderDeligate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QSlider *editor = new QSlider(parent);
    editor->setOrientation(Qt::Horizontal); //Устанавливаем ориентацию
    editor->setMaximum(500);
    editor->setAutoFillBackground(true);

    return editor;
}

void QSliderDeligate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QSlider *slider = static_cast<QSlider *>(editor);
    slider->setValue(index.data().toInt());
}

void QSliderDeligate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{

    QSlider *slider = static_cast<QSlider *>(editor);
    model->setData(index, slider->value());


}

void QSliderDeligate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}

void QSliderDeligate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{

    int value = index.data().toInt();

    QStyleOptionProgressBar *pb = new QStyleOptionProgressBar; //Создаем прогресс-бар
    pb->minimum = 0; //Минимальное значение 0
    pb->maximum = 500; //Максимальное 500
    pb->rect = option.rect; //Получаем геометрию
    pb->progress = value; //Прописываем значение
    pb->text = QString::number(value); //Отображаем значение
    pb->textVisible = true;

//Кладем прогресс-бар на формуt
    QApplication::style()->drawControl(QStyle::CE_ProgressBar, pb, painter);

}
