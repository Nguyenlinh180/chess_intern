/*
 * Line.h
 *
 *  Created on: Jul 5, 2018
 *      Author: thanhvv
 */

#ifndef LINE_H_
#define LINE_H_

#include <ilixiGUI.h>
using namespace ilixi;

class Line: public ilixi::Widget {
public:
	Line(const ilixi::Color& bgColor = "ffffff", Widget* parent = 0);
	virtual ~Line();
	void setColor(const ilixi::Color& bgColor);
	virtual void compose(const PaintEvent& event);
private:
	ilixi::Color _bgColor;
};

#endif /* LINE_H_ */
