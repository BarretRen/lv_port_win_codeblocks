#ifndef __PAGE_LOAD_CTROL_H__
#define __PAGE_LOAD_CTROL_H__

#define TAG "ui"
#define LOGI(...) LV_LOG_USER(TAG, ##__VA_ARGS__)
#define LOGW(...) LV_LOG_USER(TAG, ##__VA_ARGS__)
#define LOGE(...) LV_LOG_USER(TAG, ##__VA_ARGS__)
#define LOGD(...) LV_LOG_USER(TAG, ##__VA_ARGS__)


void ui_event_UiPage6_screen(lv_event_t * e);
void hor_page_load_main(void);

#endif
