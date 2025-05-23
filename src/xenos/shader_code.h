#pragma once

enum class ControlFlowOpcode : uint32_t
{
    Nop = 0,
    Exec = 1,
    ExecEnd = 2,
    CondExec = 3,
    CondExecEnd = 4,
    CondExecPred = 5,
    CondExecPredEnd = 6,
    LoopStart = 7,
    LoopEnd = 8,
    CondCall = 9,
    Return = 10,
    CondJmp = 11,
    Alloc = 12,
    CondExecPredClean = 13,
    CondExecPredCleanEnd = 14,
    MarkVsFetchDone = 15,
};

struct ControlFlowExecInstruction
{
    uint32_t address : 12;
    uint32_t count : 3;
    uint32_t isYield : 1;
    uint32_t sequence : 12;
    uint32_t vertexCacheHigh : 4;
    uint32_t vertexCacheLow : 2;
    uint32_t : 7;
    uint32_t isPredicateClean : 1;
    uint32_t : 1;
    uint32_t absoluteAddressing : 1;
    ControlFlowOpcode opcode : 4;
};

struct ControlFlowExecPredInstruction
{
    uint32_t address : 12;
    uint32_t count : 3;
    uint32_t isYield : 1;
    uint32_t sequence : 12;
    uint32_t vertexCacheHigh : 4;
    uint32_t vertexCacheLow : 2;
    uint32_t : 7;
    uint32_t isPredicateClean : 1;
    uint32_t condition : 1;
    uint32_t absoluteAddressing : 1;
    ControlFlowOpcode opcode : 4;
};

struct ControlFlowCondExecInstruction
{
    uint32_t address : 12;
    uint32_t count : 3;
    uint32_t isYield : 1;
    uint32_t sequence : 12;
    uint32_t vertexCacheHigh : 4;
    uint32_t vertexCacheLow : 2;
    uint32_t boolAddress : 8;
    uint32_t condition : 1;
    uint32_t absoluteAddressing : 1;
    ControlFlowOpcode opcode : 4;
};

struct ControlFlowCondExecPredInstruction
{
    uint32_t address : 12;
    uint32_t count : 3;
    uint32_t isYield : 1;
    uint32_t sequence : 12;
    uint32_t vertexCacheHigh : 4;
    uint32_t vertexCacheLow : 2;
    uint32_t : 7;
    uint32_t isPredicateClean : 1;
    uint32_t condition : 1;
    uint32_t absoluteAddressing : 1;
    ControlFlowOpcode opcode : 4;
};

struct ControlFlowLoopStartInstruction
{
    uint32_t address : 13;
    uint32_t isRepeat : 1;
    uint32_t : 2;
    uint32_t loopId : 5;
    uint32_t : 11;
    uint32_t : 11;
    uint32_t absoluteAddressing : 1;
    ControlFlowOpcode opcode : 4;
};

struct ControlFlowLoopEndInstruction
{
    uint32_t address : 13;
    uint32_t : 3;
    uint32_t loopId : 5;
    uint32_t isPredicatedBreak : 1;
    uint32_t : 10;
    uint32_t : 10;
    uint32_t condition : 1;
    uint32_t absoluteAddressing : 1;
    ControlFlowOpcode opcode : 4;
};

struct ControlFlowCondCallInstruction
{
    uint32_t address : 13;
    uint32_t isUnconditional : 1;
    uint32_t isPredicated : 1;
    uint32_t : 17;
    uint32_t : 2;
    uint32_t boolAddress : 8;
    uint32_t condition : 1;
    uint32_t absoluteAddressing : 1;
    ControlFlowOpcode opcode : 4;
};

struct ControlFlowReturnInstruction
{
    uint32_t : 32;
    uint32_t : 11;
    uint32_t absoluteAddressing : 1;
    ControlFlowOpcode opcode : 4;
};

struct ControlFlowCondJmpInstruction
{
    uint32_t address : 13;
    uint32_t isUnconditional : 1;
    uint32_t isPredicated : 1;
    uint32_t : 17;
    uint32_t : 1;
    uint32_t direction : 1;
    uint32_t boolAddress : 8;
    uint32_t condition : 1;
    uint32_t absoluteAddressing : 1;
    ControlFlowOpcode opcode : 4;
};

struct ControlFlowAllocInstruction
{
    uint32_t size : 3;
    uint32_t : 29;
    uint32_t : 8;
    uint32_t isUnserialized : 1;
    uint32_t allocType : 2;
    uint32_t : 1;
    ControlFlowOpcode opcode : 4;
};

union ControlFlowInstruction
{
    ControlFlowExecInstruction exec;
    ControlFlowCondExecInstruction condExec;
    ControlFlowCondExecPredInstruction condExecPred;
    ControlFlowLoopStartInstruction loopStart;
    ControlFlowLoopEndInstruction loopEnd;
    ControlFlowCondCallInstruction condCall;
    ControlFlowReturnInstruction ret;
    ControlFlowCondJmpInstruction condJmp;
    ControlFlowAllocInstruction alloc;

    struct
    {
        uint32_t : 32;
        uint32_t : 12;
        ControlFlowOpcode opcode : 4;
    };
};

enum class FetchOpcode : uint32_t
{
    VertexFetch = 0,
    TextureFetch = 1,
    GetTextureBorderColorFrac = 16,
    GetTextureComputedLod = 17,
    GetTextureGradients = 18,
    GetTextureWeights = 19,
    SetTextureLod = 24,
    SetTextureGradientsHorz = 25,
    SetTextureGradientsVert = 26
};

enum class FetchDestinationSwizzle : uint32_t
{
    X = 0,
    Y = 1,
    Z = 2,
    W = 3,
    Zero = 4,
    One = 5,
    Keep = 7
};

struct VertexFetchInstruction
{
    struct 
    {
        FetchOpcode opcode : 5;
        uint32_t srcRegister : 6;
        uint32_t srcRegisterAm : 1;
        uint32_t dstRegister : 6;
        uint32_t dstRegisterAam : 1;
        uint32_t mustBeOne : 1;
        uint32_t constIndex : 5;
        uint32_t constIndexSelect : 2;
        uint32_t prefetchCount : 3;
        uint32_t srcSwizzle : 2;
    };
    struct 
    {
        uint32_t dstSwizzle : 12;
        uint32_t formatCompAll : 1;
        uint32_t numFormatAll : 1;
        uint32_t signedRfModeAll : 1;
        uint32_t isIndexRounded : 1;
        uint32_t format : 6;
        uint32_t reserved2 : 2;
        int32_t expAdjust : 6;
        uint32_t isMiniFetch : 1;
        uint32_t isPredicated : 1;
    };
    struct 
    {
        uint32_t stride : 8;
        int32_t offset : 23;
        uint32_t predicateCondition : 1;
    };
};

enum class TextureDimension : uint32_t
{
    Texture1D,
    Texture2D,
    Texture3D,
    TextureCube
};

struct TextureFetchInstruction
{
    struct 
    {
        FetchOpcode opcode : 5;
        uint32_t srcRegister : 6;
        uint32_t srcRegisterAm : 1;
        uint32_t dstRegister : 6;
        uint32_t dstRegisterAm : 1;
        uint32_t fetchValidOnly : 1;
        uint32_t constIndex : 5;
        uint32_t texCoordDenorm : 1;
        uint32_t srcSwizzle : 6;
    };
    struct 
    {
        uint32_t dstSwizzle : 12;
        uint32_t magFilter : 2;
        uint32_t minFilter : 2;
        uint32_t mipFilter : 2;
        uint32_t anisoFilter : 3;
        uint32_t arbitraryFilter : 3;
        uint32_t volMagFilter : 2;
        uint32_t volMinFilter : 2;
        uint32_t useCompLod : 1;
        uint32_t useRegLod : 1;
        uint32_t : 1;
        uint32_t isPredicated : 1;
    };
    struct 
    {
        uint32_t useRegGradients : 1;
        uint32_t sampleLocation : 1;
        int32_t lodBias : 7;
        uint32_t : 5;
        TextureDimension dimension : 2;
        int32_t offsetX : 5;
        int32_t offsetY : 5;
        int32_t offsetZ : 5;
        uint32_t predCondition : 1;
    };
};

union FetchInstruction
{
    VertexFetchInstruction vertexFetch;
    TextureFetchInstruction textureFetch;

    struct
    {
        FetchOpcode opcode : 5;
        uint32_t : 27;
        uint32_t : 32;
    };
};

enum class AluScalarOpcode : uint32_t
{
    Adds = 0,
    AddsPrev = 1,
    Muls = 2,
    MulsPrev = 3,
    MulsPrev2 = 4,
    Maxs = 5,
    Mins = 6,
    Seqs = 7,
    Sgts = 8,
    Sges = 9,
    Snes = 10,
    Frcs = 11,
    Truncs = 12,
    Floors = 13,
    Exp = 14,
    Logc = 15,
    Log = 16,
    Rcpc = 17,
    Rcpf = 18,
    Rcp = 19,
    Rsqc = 20,
    Rsqf = 21,
    Rsq = 22,
    MaxAs = 23,
    MaxAsf = 24,
    Subs = 25,
    SubsPrev = 26,
    SetpEq = 27,
    SetpNe = 28,
    SetpGt = 29,
    SetpGe = 30,
    SetpInv = 31,
    SetpPop = 32,
    SetpClr = 33,
    SetpRstr = 34,
    KillsEq = 35,
    KillsGt = 36,
    KillsGe = 37,
    KillsNe = 38,
    KillsOne = 39,
    Sqrt = 40,
    Mulsc0 = 42,
    Mulsc1 = 43,
    Addsc0 = 44,
    Addsc1 = 45,
    Subsc0 = 46,
    Subsc1 = 47,
    Sin = 48,
    Cos = 49,
    RetainPrev = 50
};

enum class AluVectorOpcode : uint32_t
{
    Add = 0,
    Mul = 1,
    Max = 2,
    Min = 3,
    Seq = 4,
    Sgt = 5,
    Sge = 6,
    Sne = 7,
    Frc = 8,
    Trunc = 9,
    Floor = 10,
    Mad = 11,
    CndEq = 12,
    CndGe = 13,
    CndGt = 14,
    Dp4 = 15,
    Dp3 = 16,
    Dp2Add = 17,
    Cube = 18,
    Max4 = 19,
    SetpEqPush = 20,
    SetpNePush = 21,
    SetpGtPush = 22,
    SetpGePush = 23,
    KillEq = 24,
    KillGt = 25,
    KillGe = 26,
    KillNe = 27,
    Dst = 28,
    MaxA = 29
};

enum class ExportRegister : uint32_t
{
    VSInterpolator0 = 0,
    VSInterpolator1,
    VSInterpolator2,
    VSInterpolator3,
    VSInterpolator4,
    VSInterpolator5,
    VSInterpolator6,
    VSInterpolator7,
    VSInterpolator8,
    VSInterpolator9,
    VSInterpolator10,
    VSInterpolator11,
    VSInterpolator12,
    VSInterpolator13,
    VSInterpolator14,
    VSInterpolator15,
    VSPosition = 62,
    VSPointSizeEdgeFlagKillVertex = 63,
    PSColor0 = 0,
    PSColor1,
    PSColor2,
    PSColor3,
    PSDepth = 61,
    ExportAddress = 32,
    ExportData0 = 33,
    ExportData1,
    ExportData2,
    ExportData3,
    ExportData4,
};

struct AluInstruction
{
    struct 
    {
        uint32_t vectorDest : 6;
        uint32_t vectorDestRelative : 1;
        uint32_t absConstants : 1;
        uint32_t scalarDest : 6;
        uint32_t scalarDestRelative : 1;
        uint32_t exportData : 1;
        uint32_t vectorWriteMask : 4;
        uint32_t scalarWriteMask : 4;
        uint32_t vectorSaturate : 1;
        uint32_t scalarSaturate : 1;
        AluScalarOpcode scalarOpcode : 6;
    };
    struct 
    {
        uint32_t src3Swizzle : 8;
        uint32_t src2Swizzle : 8;
        uint32_t src1Swizzle : 8;
        uint32_t src3Negate : 1;
        uint32_t src2Negate : 1;
        uint32_t src1Negate : 1;
        uint32_t predicateCondition : 1;
        uint32_t isPredicated : 1;
        uint32_t constAddressRegisterRelative : 1;
        uint32_t const1Relative : 1;
        uint32_t const0Relative : 1;
    };
    struct 
    {
        uint32_t src3Register : 8;
        uint32_t src2Register : 8;
        uint32_t src1Register : 8;
        AluVectorOpcode vectorOpcode : 5;
        uint32_t src3Select : 1;
        uint32_t src2Select : 1;
        uint32_t src1Select : 1;
    };
};