#ifndef ___FORMATIONDEFS_H
#define ___FORMATIONDEFS_H

// -----------------------------------------------------------------------------
// preserve order: index into formationtypeinfo (Formation.c)

#define DELTA_FORMATION     0    // F5
#define BROAD_FORMATION     1    // F6
#define DELTA3D_FORMATION   2    // F7
#define CLAW_FORMATION      3    // F8
#define WALL_FORMATION      4    // F9
#define SPHERE_FORMATION    5    // F10

#define CUSTOM_FORMATION    6    // F11
#define NO_FORMATION        7
#define SAME_FORMATION      8    // for computer player

// -----------------------------------------------------------------------------

#define FIRST_CYCLE_FORMATION  (DELTA_FORMATION)
#define LAST_CYCLE_FORMATION   (SPHERE_FORMATION)

#define PARADE_FORMATION    100

// There was a formation type of "picket" during original evelopment. This
// became the "custom" formation but was overloaded with aspects of the
// "[military] parade" formation. This is an attempt to split that overloading
// and hence why this #define has a value equal to CUSTOM_FORMATION.
#define SPEECH_PARADE_FORMATION  6

#endif
