#include "qlistmodel.h"

QListModel::QListModel(QObject *parent) : QAbstractListModel(parent)
{
    list << 33 << 55 << 77; //Значения в списке по умолчанию
}

int QListModel::rowCount(const QModelIndex &parent) const
{
    return list.count(); //Обращаемся к нашему объекту данных и вызываем метод count
}

QVariant QListModel::data(const QModelIndex &index, int role) const
{
    //сначала проверяем индекс на валидность
    if(!index.isValid()) return QVariant(); //Возвращаем пустой QVariant

    int value = list.at(index.row()); //Сохраняем значение из списка

    switch (role) { //Отрабатываем все возможные варианты role (для чего у нас вызывается метод data
    case Qt::DisplayRole: //Чтобы отобразить
    case Qt::EditRole: //Чтобы редактировать
        return value;
    case Qt::SizeHintRole: //Чтобы установить высоту элемента отображения
        return QSize(0, 30); //Высота 30 пикс.
    case Qt::ToolTipRole: //Чтобы вывести подсказку при наведении курсора на элемент
        return QString::number(value); //выводим в строку значение элемента
    case Qt::TextAlignmentRole: //Чтобы выровнять элемент
        return Qt::AlignCenter; //Устанавливаем выравнивание по центру
    case Qt::FontRole: //Чтобы изменить шрифт
        return QFont("Times New Roman", 14, QFont::Bold); //Устанавливаем шрифт, размер и жирность текста
    case Qt::BackgroundRole: //Чтобы изменять фоновый цвет в зависимости от значения элемента
        if(value < 50) //Если меньше 50
            return QBrush(Qt::green); //Зеленая зона
        else if(value < 100) //Меньше 100
            return QBrush(Qt::yellow); //Желтая зона
        else if(value > 100) return QBrush(Qt::red); //Больше 100 - красная зона



    default:
        return QVariant();

    }
}

bool QListModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if(role == Qt::EditRole) list.replace(index.row(), value.toInt());

}

Qt::ItemFlags QListModel::flags(const QModelIndex &index) const
{

    if(!index.isValid()) return Qt::NoItemFlags;

    return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
}





