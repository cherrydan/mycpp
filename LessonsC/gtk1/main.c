#include <gtk/gtk.h>
/*
Кнопка и обработка её нажатия
*/
//обработчик принимает указатель на виджет и g-указатель на данные
static int count = 1;

void button_clicked(GtkWidget *button, gpointer data) {
printf("%s нажата %d раз(а)\n", (char *)data, count++);
}

int main(int argc, char* argv[])
{

    GtkWidget *window, *button;
    gtk_init(&argc, &argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    button = gtk_button_new_with_label("Hello, world!");
    //создаём контейнер
    gtk_container_add(GTK_CONTAINER(window), button);
    //создаём сигнал и обработчик
    g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(button_clicked), "HelloButton");
    gtk_widget_show(window);
    gtk_widget_show(button);
    gtk_main();
    return 0;
}
