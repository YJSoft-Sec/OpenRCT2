#ifndef _TRACK_PAINT_H
#define _TRACK_PAINT_H

#include "../common.h"

#ifdef __cplusplus

class TileDrawingContext
{
public:
    uint8             ViewRotation;
    uint8             Direction;

    sint32            X;
    sint32            Y;
    sint32            Z;
    rct_map_element * MapElement;

    int draw_98197C(uint32 imageId, sint8 offsetX, sint8 offsetY, sint16 lengthX, sint16 lengthY, sint8 offsetZ, sint32 height);
    int draw_98199C(uint32 imageId, sint8 offsetX, sint8 offsetY, sint16 lengthX, sint16 lengthY, sint8 offsetZ, sint32 height);
    int draw_98199C(uint32 imageId, sint8 offsetX, sint8 offsetY, sint16 lengthX, sint16 lengthY, sint8 offsetZ, sint32 height, uint8 rotation);
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

typedef void (*RideDrawFunction)(RideDrawingContext * dc);

#endif /* __cplusplus */

#ifdef __cplusplus
    extern "C"
    {
#endif

        void viewport_track_paint_setup_2(uint8 rideIndex, uint8 direction, sint32 height, rct_map_element * mapElement);

#ifdef __cplusplus
    }
#endif

typedef void (*TRACK_PAINT_FUNCTION)(uint8 rideIndex, uint8 trackSequence, uint8 direction, int height, rct_map_element* mapElement);
typedef TRACK_PAINT_FUNCTION (*TRACK_PAINT_FUNCTION_GETTER)(int trackType, int direction);

#endif
