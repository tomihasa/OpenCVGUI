//
// Created by damiles on 17/11/16.
//

#ifndef OPENCVGUI_OGUIUTILS_H
#define OPENCVGUI_OGUIUTILS_H

#include "common.h"
#include "OGUIWindow.h"

using namespace OpenCVGUI;

CV_OGUI_EXPORTS void drawParagraph(void* vvg, const char* text, float x, float y, float width, float height, float mx, float my);
CV_OGUI_EXPORTS bool drawBasicButton(void *context, OGUIWindow* window, const char* title, int x, int y, int width, int height, int mouse_x, int mouse_y, const char* typography="sans", double font_size=20.0f );
CV_OGUI_EXPORTS void drawHeader(void* vvg, string title, int x, int y, int w);
CV_OGUI_EXPORTS void drawLabel(void *context, const char* text, int x, int y, const char* typography="sans", double font_size=16.0f, int r=255, int g=255, int b=255, int a=255 );
#endif //OPENCVGUI_OGUIUTILS_H
