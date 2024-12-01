#include "combobox.h"

#include <stdio.h>
#include <gtk/gtk.h>
#include <glib/gi18n.h>


static void activate_cb(GtkApplication* app) {
    // GtkWidget *window = gtk_application_window_new(app);
    GtkWidget* window = do_combobox(app);

    gtk_widget_set_visible(window, true);
}


int main(int argc, char** argv) {
    printf("Hello, World!\nMy name is John\n");

    GtkApplication* app =
        gtk_application_new("gtk.combobox", G_APPLICATION_DEFAULT_FLAGS);

    g_signal_connect(app, "activate", G_CALLBACK(activate_cb), NULL);

    int exit_status = g_application_run (G_APPLICATION (app), argc, argv);

    g_object_unref (app);

    printf ("g_application_run() exit status : %d", exit_status);

    return exit_status;
}
