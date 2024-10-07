// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 9.1.0
// Project name: Vesc_Dashboard

#include "ui.h"

void ui_Loading_screen_init(void)
{
ui_Loading = lv_obj_create(NULL);
lv_obj_remove_flag( ui_Loading, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Loading, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Loading, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image1 = lv_image_create(ui_Loading);
lv_image_set_src(ui_Image1, &ui_img_super73_png);
lv_obj_set_width( ui_Image1, LV_SIZE_CONTENT);  /// 240
lv_obj_set_height( ui_Image1, LV_SIZE_CONTENT);   /// 116
lv_obj_set_x( ui_Image1, 0 );
lv_obj_set_y( ui_Image1, -99 );
lv_obj_set_align( ui_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_remove_flag( ui_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_image_set_scale(ui_Image1,80);

ui_SpeedText = lv_label_create(ui_Loading);
lv_obj_set_width( ui_SpeedText, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_SpeedText, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_SpeedText, 0 );
lv_obj_set_y( ui_SpeedText, -46 );
lv_obj_set_align( ui_SpeedText, LV_ALIGN_CENTER );
lv_label_set_text(ui_SpeedText,"Speed (Km/h)");
lv_obj_set_style_text_color(ui_SpeedText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_SpeedText, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_SpeedText, &ui_font_Super73font15, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SpeedValue = lv_label_create(ui_Loading);
lv_obj_set_width( ui_SpeedValue, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_SpeedValue, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_SpeedValue, LV_ALIGN_CENTER );
lv_label_set_text(ui_SpeedValue,"Sp");
lv_obj_set_style_text_color(ui_SpeedValue, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_SpeedValue, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_SpeedValue, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_SpeedValue, &ui_font_Super73font80, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_CurrentMeterText = lv_label_create(ui_Loading);
lv_obj_set_width( ui_CurrentMeterText, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_CurrentMeterText, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_CurrentMeterText, 90 );
lv_obj_set_y( ui_CurrentMeterText, 45 );
lv_obj_set_align( ui_CurrentMeterText, LV_ALIGN_CENTER );
lv_label_set_text(ui_CurrentMeterText,"Current (A)");
lv_obj_set_style_text_color(ui_CurrentMeterText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_CurrentMeterText, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_CurrentMeterText, &ui_font_Super73font15, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_CurrentMeterValue = lv_label_create(ui_Loading);
lv_obj_set_width( ui_CurrentMeterValue, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_CurrentMeterValue, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_CurrentMeterValue, 90 );
lv_obj_set_y( ui_CurrentMeterValue, 80 );
lv_obj_set_align( ui_CurrentMeterValue, LV_ALIGN_CENTER );
lv_label_set_text(ui_CurrentMeterValue,"Cu");
lv_obj_set_style_text_color(ui_CurrentMeterValue, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_CurrentMeterValue, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_CurrentMeterValue, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_CurrentMeterValue, &ui_font_Super73font50, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_VoltMeterText = lv_label_create(ui_Loading);
lv_obj_set_width( ui_VoltMeterText, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_VoltMeterText, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_VoltMeterText, -90 );
lv_obj_set_y( ui_VoltMeterText, 45 );
lv_obj_set_align( ui_VoltMeterText, LV_ALIGN_CENTER );
lv_label_set_text(ui_VoltMeterText,"Voltage (V)");
lv_obj_set_style_text_color(ui_VoltMeterText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_VoltMeterText, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_VoltMeterText, &ui_font_Super73font15, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_VoltMeterValue = lv_label_create(ui_Loading);
lv_obj_set_width( ui_VoltMeterValue, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_VoltMeterValue, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_VoltMeterValue, -90 );
lv_obj_set_y( ui_VoltMeterValue, 82 );
lv_obj_set_align( ui_VoltMeterValue, LV_ALIGN_CENTER );
lv_label_set_text(ui_VoltMeterValue,"Vo");
lv_obj_set_style_text_color(ui_VoltMeterValue, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_VoltMeterValue, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_VoltMeterValue, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_VoltMeterValue, &ui_font_Super73font50, LV_PART_MAIN| LV_STATE_DEFAULT);

}
