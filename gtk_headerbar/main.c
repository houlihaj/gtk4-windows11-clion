#include "headerbar.h"

#include <stdio.h>
#include <gtk/gtk.h>


// static void activate_cb(GtkApplication* app) {
//     GtkWidget* window = gtk_application_window_new(app);
//
//     GtkWidget* header;
//     GtkWidget* button;
//     GtkWidget* box;
//     GtkWidget* content;
//
//     gtk_window_set_title (GTK_WINDOW (window), "Welcome to the Hotel California");
//     g_object_add_weak_pointer (G_OBJECT (window), (gpointer *)&window);
//
//     gtk_window_set_default_size (GTK_WINDOW (window), 600, 400);
//
//     header = gtk_header_bar_new ();
//
//     button = gtk_button_new_from_icon_name ("mail-send-receive-symbolic");
//     gtk_widget_set_tooltip_text (button, "Check out");
//     gtk_header_bar_pack_end (GTK_HEADER_BAR (header), button);
//
//     box = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
//     gtk_widget_add_css_class (box, "linked");
//     button = gtk_button_new_from_icon_name ("go-previous-symbolic");
//     gtk_widget_set_tooltip_text (button, "Back");
//     gtk_box_append (GTK_BOX (box), button);
//     button = gtk_button_new_from_icon_name ("go-next-symbolic");
//     gtk_widget_set_tooltip_text (button, "Forward");
//     gtk_box_append (GTK_BOX (box), button);
//
//     gtk_header_bar_pack_start (GTK_HEADER_BAR (header), box);
//     button = gtk_switch_new ();
//     gtk_accessible_update_property (
//         GTK_ACCESSIBLE (button),
//         GTK_ACCESSIBLE_PROPERTY_LABEL,
//         "Change something",
//         -1
//     );
//     gtk_header_bar_pack_start (GTK_HEADER_BAR (header), button);
//
//     gtk_window_set_titlebar (GTK_WINDOW (window), header);
//
//     content = gtk_text_view_new ();
//     gtk_accessible_update_property (
//         GTK_ACCESSIBLE (content),
//         GTK_ACCESSIBLE_PROPERTY_LABEL,
//         "Content",
//         -1
//     );
//     gtk_window_set_child (GTK_WINDOW (window), content);
//
//     gtk_widget_set_visible(window, true);
// }


static void activate_cb(GtkApplication *app) {
    // GtkWidget *window = gtk_application_window_new(app);
    GtkWidget *window = do_headerbar(app);

    gtk_widget_set_visible(window, true);
}


int main(int argc, char** argv) {
    printf("Hello, World!\nMy name is John\n");
    GtkApplication* app = (
        gtk_application_new("org.app", G_APPLICATION_DEFAULT_FLAGS)
    );
    g_signal_connect(app, "activate", G_CALLBACK(activate_cb), NULL);
    return g_application_run(G_APPLICATION(app), argc, argv);
}
