#ifndef DC2_TYPES_H
#define DC2_TYPES_H

// --- 1. PS2 & Core Math Types ---
typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned int        uint32;
typedef unsigned long long  uint64;
typedef signed char         int8;
typedef signed short        int16;
typedef signed int          int32;
typedef signed long long    int64;

struct Vector4 {
    float x;
    float y;
    float z;
    float w;
};

struct Matrix4 {
    float m[4][4];
};

struct RGBA8 {
    uint8 r;
    uint8 g;
    uint8 b;
    uint8 a;
};

// --- 2. Level-5 Main Graphic (mg) Engine Hierarchy ---
struct mgCFrame {
    struct mgCFrame* m_parent;
    struct mgCFrame* m_child;
    struct mgCFrame* m_sibling;
    int32 m_frameId;
    char m_name[32];
    struct Matrix4 m_localMatrix;
    struct Matrix4 m_lwMatrix;     // Local-to-world transformed matrix
    struct Vector4 m_position;
    struct Vector4 m_rotation;
    struct Vector4 m_scale;
    uint32 m_flags;
};

struct mgCSubpart {
    uint32 m_vertexCount;
    struct Vector4* m_positions;
    struct Vector4* m_normals;
    float* m_uvs;
    struct RGBA8* m_colors;
    uint32 m_indexCount;
    uint16* m_indices;
    int32 m_textureIndex;
    uint32 m_materialFlags;
};

struct mgCMesh {
    uint32 m_subpartCount;
    struct mgCSubpart* m_subparts;
    struct Vector4 m_bboxMin;
    struct Vector4 m_bboxMax;
    float m_boundingSphereRadius;
};

struct mgCTexture {
    uint32 m_vramAddress;
    uint16 m_width;
    uint16 m_height;
    uint8  m_psm;          // Pixel Storage Mode (e.g. 0x00=32bit, 0x13=8bit, 0x14=4bit)
    uint8  m_clutPsm;
    uint32 m_clutAddress;
    uint32 m_dataSize;
    void*  m_pixelData;
    void*  m_clutData;
};

// --- 3. Gameplay Entity & Actor Structures ---
struct CActionChara {
    void* vtable;
    struct Vector4 m_position;
    struct Vector4 m_velocity;
    float m_rotationY;
    float m_targetRotationY;
    int32 m_motionState;   // 0=Stand, 1=Walk, 2=Run, 3=Attack
    float m_motionTimer;
    int32 m_currentHp;
    int32 m_maxHp;
    float m_colRadius;
    float m_colHeight;
    struct mgCFrame* m_modelRoot;
};

struct CActiveMonster {
    void* vtable;
    int32 m_monsterId;
    char m_name[32];
    struct Vector4 m_position;
    struct Vector4 m_velocity;
    float m_rotationY;
    int32 m_aiState;       // 0=Idle, 1=Patrol, 2=Seek, 3=Attack, 4=Hurt, 5=Death
    float m_aiTimer;
    int32 m_currentHp;
    int32 m_maxHp;
    int32 m_attackPower;
    float m_aggroRadius;
    float m_attackRadius;
    struct mgCFrame* m_modelRoot;
};

// --- 4. Level-5 Dungeon & Automap Structures ---
struct CAutoMapTile {
    uint16 m_tileType;     // 0=Empty, 1=Room, 2=Corridor, 3=Wall
    uint8  m_explored;     // 0=Unvisited, 1=Visited / Visible on Radar
    uint8  m_flags;        // Door, Key, Chest marker flags
};

struct CAutoMapGen {
    void* vtable;
    uint32 m_gridWidth;
    uint32 m_gridHeight;
    struct CAutoMapTile m_grid[64][64];
    uint32 m_roomCount;
    struct Vector4 m_playerRadarPos;
    float m_playerRadarYaw;
};

#endif // DC2_TYPES_H
