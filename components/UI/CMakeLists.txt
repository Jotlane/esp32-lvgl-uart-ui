idf_component_register(SRCS "ui_Screen1.c"
            "ui.c"
            "ui_comp_hook.c"
            "ui_helpers.c"
            "ui_img_background_png.c"
            "ui_img_on_png.c"
            "ui_img_off_png.c"
    INCLUDE_DIRS "."
    PRIV_REQUIRES lvgl-3)
