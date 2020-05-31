#include <stdlib.h>
#include <gtk/gtk.h>

void my_close_app(GtkWidget *window, gpointer data)
{
    gtk_main_quit();
}

// Обратный вызов позволяет приложению отменить событие close/destroy.
// (Для отмены возвращает TRUE.)
gboolean my_delete_event(GtkWidget *widget, GdkEvent *event, gpointer data)
{
    printf("In delete_event\n");

    return FALSE;
}

int main(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *label1, *label2, *label3;
    GtkWidget *hbox, *vbox;

    gtk_init(&argc, &argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    //Установка заголовков и размеров окна
    gtk_window_set_title(GTK_WINDOW(window), "The Window Title");
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_default_size(GTK_WINDOW(window), 600, 300);
    //Обработка уничтожения объектов
    g_signal_connect(G_OBJECT(window), "destroy",
                     G_CALLBACK(my_close_app), NULL);

    g_signal_connect(G_OBJECT(window), "delete_event",
                     G_CALLBACK(my_delete_event), NULL);
    //создание меток
    label1 = gtk_label_new("Label 1");
    label2 = gtk_label_new("Label 2");
    label3 = gtk_label_new("Label 3");
    //создание контейнеров
    hbox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5);
    vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    //размещение меток в контейнерах
    gtk_box_pack_start(GTK_BOX(vbox), label1, TRUE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox), label2, TRUE, FALSE, 5);

    gtk_box_pack_start(GTK_BOX(hbox), vbox, TRUE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox), label3, TRUE, FALSE, 5);
    //добавление контейнера в окно
    gtk_container_add(GTK_CONTAINER(window), hbox);
    //всё показываем
    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}
