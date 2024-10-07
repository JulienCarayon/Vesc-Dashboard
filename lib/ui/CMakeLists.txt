SET(SOURCES ui_Loading.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_img_super73_png.c
    fonts/ui_font_Super73font15.c
    fonts/ui_font_Super73font25.c
    fonts/ui_font_Super73font30.c
    fonts/ui_font_Super73font40.c
    fonts/ui_font_Super73font50.c
    fonts/ui_font_Super73font80.c)

add_library(ui ${SOURCES})
