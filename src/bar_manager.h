#ifndef BAR_MANAGER_H
#define BAR_MANAGER_H

struct bar_manager
{
  struct bar **bars;
  int bar_count;
  struct bar_item **bar_items;
  int bar_item_count;
  char *position;
  char *display;
  uint32_t height;
  uint32_t padding_left;
  uint32_t padding_right;
  struct rgba_color background_color;
};

int bar_manager_get_item_index_for_name(struct bar_manager* bar_manager, char* name);
struct bar_item* bar_manager_create_item(struct bar_manager* bar_manager);

void bar_manager_script_update(struct bar_manager* bar_manager, bool forced);
void bar_manager_update_components(struct bar_manager* bar_manager, uint32_t did, uint32_t sid);
void bar_manager_set_background_color(struct bar_manager *bar_manager, uint32_t color);
void bar_manager_set_position(struct bar_manager *bar_manager, char *pos);
void bar_manager_set_spaces(struct bar_manager *bar_manager, bool value);
void bar_manager_set_spaces_for_all_displays(struct bar_manager *bar_manager, bool value);
void bar_manager_set_height(struct bar_manager *bar_manager, uint32_t height);
void bar_manager_set_padding_left(struct bar_manager *bar_manager, uint32_t padding);
void bar_manager_set_padding_right(struct bar_manager *bar_manager, uint32_t padding);
void bar_manager_set_display(struct bar_manager *bar_manager, char *display);

void bar_manager_display_changed(struct bar_manager *bar_manager);
void bar_manager_refresh(struct bar_manager *bar_manager);
void bar_manager_resize(struct bar_manager *bar_manager);
void bar_manager_begin(struct bar_manager *bar_manager);
void bar_manager_init(struct bar_manager *bar_manager);

#endif
