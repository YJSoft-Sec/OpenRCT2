#ifndef _TRACK_PAINT_H
#define _TRACK_PAINT_H

#include "../common.h"

class TileDrawingContext
{
public:
    uint8             ViewRotation;
    uint8             Direction;

    sint32            X;
    sint32            Y;
    sint32            Z;
    rct_map_element * MapElement;

    int sub_98197C(uint32 imageId, sint8 offsetX, sint8 offsetY, sint16 lengthX, sint16 lengthY, sint8 offsetZ, sint32 height);
    int sub_98199C(uint32 imageId, sint8 offsetX, sint8 offsetY, sint16 lengthX, sint16 lengthY, sint8 offsetZ, sint32 height);
    int sub_98199C(uint32 imageId, sint8 offsetX, sint8 offsetY, sint16 lengthX, sint16 lengthY, sint8 offsetZ, sint32 height, uint8 rotation);
    void UpdateTileMaxHeight(sint16 height, uint8 byte_0141E9DA);
};

class RideDrawingContext : public TileDrawingContext
{
public:
    uint8            RideIndex;
    rct_ride *       Ride;
    rct_ride_entry * RideEntry;
    uint8            TrackType;
    uint8            TrackSequence;

    void DrawFloor(uint8 floorType, uint32 imageFlags, sint32 z);
    void DrawFence(uint8 fenceType, sint32 z);
    void DrawFenceChecked(uint8 fenceType, sint32 z);
    void DrawFencesChecked(uint8 fenceDirections, uint8 fenceType, sint32 z);
};

typedef void (*TRACK_PAINT_FUNCTION)(RideDrawingContext * dc);
typedef TRACK_PAINT_FUNCTION (*TRACK_PAINT_FUNCTION_GETTER)(int trackType, int direction);

TRACK_PAINT_FUNCTION get_track_paint_function_topspin(int trackType, int direction);
TRACK_PAINT_FUNCTION get_track_paint_function_shop(int trackType, int direction);
TRACK_PAINT_FUNCTION get_track_paint_function_facility(int trackType, int direction);
TRACK_PAINT_FUNCTION get_track_paint_function_motionsimulator(int trackType, int direction);

#endif
