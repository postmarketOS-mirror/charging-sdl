#ifndef DRAW_H
#define DRAW_H

#include <SDL2/SDL.h>
#include <math.h>

/**
  draw line draws a line from (x,y) to (x1, y1)
  @parma surf the surface to draw on
  @param c color to be replaced the area
  @param r the replacement color
  @param x the x position to begin flooding
  @param y the y position to begin flooding
*/
int flood_fill(SDL_Surface* surf, Uint32 c, Uint32 r, int x, int y);  

/**
  draw line draws a line from (x,y) to (x1, y1)
  @parma surf the surface to draw on
  @param c color to draw the line
  @param x x position of the starting point
  @param y y position of the starting point
  @param x1 x position of the ending point
  @param y1 y position of the ending point
*/
int draw_line(SDL_Surface* surf, Uint32 c, int x, int y, int x1, int y1);  

/**
  create a battery icon to fit within a specific area
  @param w the width the battery must fit in
  @param h the height the battery must fit in
  @returns returns a battery icon, its surface's width and height are equal to w and h
*/
SDL_Surface* make_battery_icon(int w, int h);    

/**
  create a lightning bolt icon, the icon will fit within w and h without being stretched
  @param w the width the bolt must fit in
  @param h the height the bolt must fit in
  @returns returns a lightning icon, its surface's width and height are equal to w and h
*/
SDL_Surface* make_lightning_icon(int w, int h);

/**
  get the rectangle for the batteries 'body' that fits within specific bounds
  @param w the width the battery must fit in
  @param h the height the battery must fit in
  @returns returns the rectangle for the batteries body
*/
SDL_Rect* make_battery_rect(int w, int h);
#endif