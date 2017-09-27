/*
    PrimeTV2 : a visualizer for phylogenetic reconciled trees.
    Copyright (C) 2011  <Jose Fernandez Navarro> <jc.fernandez.navarro@gmail.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    
    Author : Jose Fernandez Navarro  -  jc.fernandez.navarro@gmail.com
*/

#ifndef CANVAS_H
#define CANVAS_H

class Canvas
{


public:

    //constructor, parent object passed as parameter
  Canvas();
    
    //save the canvas in a file
  bool saveCanvas();
    
    //save the canvas in a pdf
  bool saveCanvasPDF();
    
    //prin the canvas
    bool print();
    
    //destructor
    ~Canvas();

    virtual void paint();
    
    virtual void setPixmap();

    void setSize(unsigned _sizeW,unsigned _sizeH);

protected:

    virtual void boundingRect() const;
    
public:

    void rotateRightCentered();
    
    void rotateLeftCentered();
    
    void invert();

    void setVisible(bool);

};

#endif // CANVAS_H
