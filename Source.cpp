#include <allegro5/allegro.h>
#include <stdio.h>

int main() {

	ALLEGRO_DISPLAY *gamewindow = NULL;

	al_init();
	gamewindow = al_create_display(640, 480);
	al_set_window_position(gamewindow, 200, 200);
	while (1) {
		al_clear_to_color(al_map_rgb(rand(), rand(), rand()));
		al_flip_display();
	}
	al_destroy_display(gamewindow);
}
