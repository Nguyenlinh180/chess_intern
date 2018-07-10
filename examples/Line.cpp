/*
 * Line.cpp
 *
 *  Created on: Jul 5, 2018
 *      Author: thanhvv
 */

#include "Line.h"
#include <graphics/Painter.h>

Line::Line(const ilixi::Color& bgColor, Widget* parent) :
		Widget(parent), _bgColor(bgColor) {
	fprintf(stderr, "%s:%s():%d:\n", __FILE__, __FUNCTION__, __LINE__);

}

Line::~Line() {

}

void Line::compose(const ilixi::PaintEvent& event) {
	Painter p(this);
	p.begin(event);
	p.setBrush(_bgColor);
	p.setPen(_bgColor);
	p.fillRectangle(Rectangle(0, 0, width(), height()));
	p.end();
}

void Line::setColor(const ilixi::Color& bgColor) {
	_bgColor = bgColor;
}

