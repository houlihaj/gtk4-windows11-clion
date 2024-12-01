#include <stdio.h>
#include <gtk/gtk.h>

static void activate_cb(GtkApplication* app) {
    GtkWidget* window = gtk_application_window_new(app);
    gtk_widget_set_visible(window, true);
}

int main(int argc, char** argv) {
    printf("Hello, World!\nMy name is John\n");
    GtkApplication* app =
        gtk_application_new("org.app", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate_cb), NULL);
    return g_application_run(G_APPLICATION(app), argc, argv);
}
