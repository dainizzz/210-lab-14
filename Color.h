#ifndef COLOR_H
#define COLOR_H

class Color {
public:
	int getRed() const {return red;}
	int getGreen() const {return green;}
	int getBlue() const {return blue;}
	void setRed(int red) {this->red = red;}
	void setGreen(int green) {this->green = green;}
	void setBlue(int blue) {this->blue = blue;}
	void print();

private:
	int red;
	int green;
	int blue;
};

#endif
