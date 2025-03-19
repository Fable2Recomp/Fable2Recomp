#ifndef UI_H_
#define UI_H_

namespace ui {

bool Init();
void Shutdown();
void Update();
void Render();

extern bool show_demo_window;
extern bool show_metrics;

} // namespace ui

#endif // UI_H_ 