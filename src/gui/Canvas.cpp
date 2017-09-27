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


#include "Canvas.h"

Canvas::Canvas( )
{

}

//destroys the cairo object if it exists
Canvas::~Canvas()
{
}

bool Canvas::saveCanvas()
{
  return true;
}

// This function creates the printer object to capture the filename
// and then print the Cairo Canvas on the pdf page that will
// have the same size
bool Canvas::saveCanvasPDF()
{
  return true;
}

// This function launches a printing dialog to select the printing device
// and then send the canvas to the printer to be printed out
bool Canvas::print()
{
        return true;
}

void Canvas::boundingRect() const
{
  return;
}

void Canvas::paint ( )
{

}

void Canvas::setPixmap()
{

}

void Canvas::rotateLeftCentered()
{
}

void Canvas::rotateRightCentered()
{
}

void Canvas::invert()
{
}

void Canvas::setSize ( unsigned sizeW, unsigned sizeH )
{
}

void Canvas::setVisible ( bool status)
{
    setVisible(status);
}

