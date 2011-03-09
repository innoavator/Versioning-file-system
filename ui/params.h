#ifndef TIMELINE_PARAMS_H
#define TIMELINE_PARAMS_H

// Size and position
#define TIMELINE_DEFAULT_HEIGHT (20)
#define TIMELINE_DEFAULT_WIDTH (600)
#define EDITOR_DEFAULT_HEIGHT (600)
#define EDITOR_DEFAULT_WIDTH TIMELINE_DEFAULT_WIDTH

#define MAXIMIZED 1

#define BRANCH_SEPARATION (50.0)
#define MARGIN (20.0)

// Direction of spread of the timeline tree
#define TOP_TO_BOTTOM (1)
#define BOTTOM_TO_TOP (2)

#define TREE_WIDTH_DIRECTION TOP_TO_BOTTOM

// Text
#define TEXT_COLOR (Qt::black)

// Points
#define POINT_DEFAULT_RADIUS (5.0)
#define POINT_DEFAULT_OUTLINE_WIDTH (1.0)
#define POINT_HEAD_OUTLINE_WIDTH (3.0)

#define POINT_DEFAULT_OUTLINE_COLOR (Qt::darkBlue)
#define POINT_HEAD_OUTLINE_COLOR (QColor(200, 0, 0, 255))

#define POINT_DEFAULT_BG_COLOR (Qt::blue)
#define POINT_SELECTED_BG_COLOR (Qt::red)
#define POINT_HOVER_BG_COLOR (QColor(POINT_DEFAULT_BG_COLOR).lighter())
#define POINT_HOVER_SELECTED_BG_COLOR (QColor(POINT_SELECTED_BG_COLOR).lighter())

#define POINT_CURRENT_DEFAULT_BG_COLOR (Qt::green)
#define POINT_CURRENT_HOVER_BG_COLOR (QColor(POINT_CURRENT_DEFAULT_BG_COLOR).lighter())
#define POINT_CURRENT_SELECTED_BG_COLOR (QColor(POINT_CURRENT_DEFAULT_BG_COLOR).darker())
#define POINT_CURRENT_HOVER_SELECTED_BG_COLOR (QColor(POINT_CURRENT_DEFAULT_BG_COLOR).darker())

// Lines
#define LINE_DEFAULT_COLOR (Qt::black)
#define LINE_DEFAULT_WIDTH (1.0)
#define LINE_DEFAULT_Z_VALUE (-1)

// Ticks
#define TICK_DEFAULT_COLOR (Qt::black)
#define TICK_DEFAULT_Z_VALUE (-2)
#define TICK_DEFAULT_WIDTH (2.0)
#define TICK_DEFAULT_HEIGHT (8.0)

// Axis
#define AXIS_DEFAULT_COLOR (Qt::black)
#define AXIS_DEFAULT_WIDTH (2.0)
#define AXIS_DEFAULT_TICK_SEPARATION (100.0)
#define AXIS_DEFAULT_Z_VALUE (-3)

// Objects
#define OBJECTS_DIR "files/"

#endif
