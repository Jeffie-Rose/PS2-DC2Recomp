#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitLadder__FiP6CSceneP15CSceneEventData
// Address: 0x1a66f0 - 0x1a6aa8
void InitLadder__FiP6CSceneP15CSceneEventData_0x1a66f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitLadder__FiP6CSceneP15CSceneEventData_0x1a66f0");
#endif

    switch (ctx->pc) {
        case 0x1a6728u: goto label_1a6728;
        case 0x1a6890u: goto label_1a6890;
        case 0x1a6898u: goto label_1a6898;
        case 0x1a68a0u: goto label_1a68a0;
        case 0x1a68a8u: goto label_1a68a8;
        case 0x1a68dcu: goto label_1a68dc;
        case 0x1a68e8u: goto label_1a68e8;
        case 0x1a68f8u: goto label_1a68f8;
        case 0x1a6914u: goto label_1a6914;
        case 0x1a6924u: goto label_1a6924;
        case 0x1a6934u: goto label_1a6934;
        case 0x1a6944u: goto label_1a6944;
        case 0x1a6974u: goto label_1a6974;
        case 0x1a698cu: goto label_1a698c;
        case 0x1a69a4u: goto label_1a69a4;
        case 0x1a6a30u: goto label_1a6a30;
        case 0x1a6a3cu: goto label_1a6a3c;
        case 0x1a6a58u: goto label_1a6a58;
        case 0x1a6a68u: goto label_1a6a68;
        default: break;
    }

    ctx->pc = 0x1a66f0u;

    // 0x1a66f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a66f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1a66f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a66f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a66f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a66f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a66fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a66fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a6700: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a6700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6704: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a6704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a6708: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a6708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a670c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a6710: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a6710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6714: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a6714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a6718: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a6718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a671c: 0x8ca52e50  lw          $a1, 0x2E50($a1)
    ctx->pc = 0x1a671cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11856)));
    // 0x1a6720: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1A6720u;
    SET_GPR_U32(ctx, 31, 0x1A6728u);
    ctx->pc = 0x1A6724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6720u;
            // 0x1a6724: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6728u; }
        if (ctx->pc != 0x1A6728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6728u; }
        if (ctx->pc != 0x1A6728u) { return; }
    }
    ctx->pc = 0x1A6728u;
label_1a6728:
    // 0x1a6728: 0xaf948b98  sw          $s4, -0x7468($gp)
    ctx->pc = 0x1a6728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937496), GPR_U32(ctx, 20));
    // 0x1a672c: 0x3c0801ea  lui         $t0, 0x1EA
    ctx->pc = 0x1a672cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)490 << 16));
    // 0x1a6730: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1a6730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6734: 0x3c0701ea  lui         $a3, 0x1EA
    ctx->pc = 0x1a6734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)490 << 16));
    // 0x1a6738: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1a6738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a673c: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1a673cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
    // 0x1a6740: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1a6740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6744: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a6744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1a6748: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1a6748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a674c: 0x2508b2f0  addiu       $t0, $t0, -0x4D10
    ctx->pc = 0x1a674cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947568));
    // 0x1a6750: 0x3c0901ea  lui         $t1, 0x1EA
    ctx->pc = 0x1a6750u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)490 << 16));
    // 0x1a6754: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1a6754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
    // 0x1a6758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a675c: 0x24e7b320  addiu       $a3, $a3, -0x4CE0
    ctx->pc = 0x1a675cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947616));
    // 0x1a6760: 0x24c6b330  addiu       $a2, $a2, -0x4CD0
    ctx->pc = 0x1a6760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947632));
    // 0x1a6764: 0x24a5b340  addiu       $a1, $a1, -0x4CC0
    ctx->pc = 0x1a6764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947648));
    // 0x1a6768: 0x2529b350  addiu       $t1, $t1, -0x4CB0
    ctx->pc = 0x1a6768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947664));
    // 0x1a676c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a676cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a6770: 0x2463b3c0  addiu       $v1, $v1, -0x4C40
    ctx->pc = 0x1a6770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947776));
    // 0x1a6774: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a6774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a6778: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x1a6778u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1a677c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a6780: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x1a6780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1a6784: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x1a6784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1a6788: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x1a6788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x1a678c: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x1a678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6790: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x1a6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6794: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1a6794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6798: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1a6798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a679c: 0xe5030010  swc1        $f3, 0x10($t0)
    ctx->pc = 0x1a679cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x1a67a0: 0xe5020014  swc1        $f2, 0x14($t0)
    ctx->pc = 0x1a67a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x1a67a4: 0xe5010018  swc1        $f1, 0x18($t0)
    ctx->pc = 0x1a67a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x1a67a8: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x1a67a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x1a67ac: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x1a67acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a67b0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1a67b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a67b4: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x1a67b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x1a67b8: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x1a67b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x1a67bc: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x1a67bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a67c0: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x1a67c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a67c4: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x1a67c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a67c8: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x1a67c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a67cc: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x1a67ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1a67d0: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x1a67d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1a67d4: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x1a67d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1a67d8: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1a67d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1a67dc: 0xc6430040  lwc1        $f3, 0x40($s2)
    ctx->pc = 0x1a67dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a67e0: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x1a67e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a67e4: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x1a67e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a67e8: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x1a67e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a67ec: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x1a67ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a67f0: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x1a67f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1a67f4: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x1a67f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1a67f8: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1a67f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1a67fc: 0xc6430050  lwc1        $f3, 0x50($s2)
    ctx->pc = 0x1a67fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6800: 0xc6420054  lwc1        $f2, 0x54($s2)
    ctx->pc = 0x1a6800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6804: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x1a6804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6808: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x1a6808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a680c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x1a680cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1a6810: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x1a6810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1a6814: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1a6814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1a6818: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1a6818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1a681c: 0x7a480060  lq          $t0, 0x60($s2)
    ctx->pc = 0x1a681cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1a6820: 0x7a470070  lq          $a3, 0x70($s2)
    ctx->pc = 0x1a6820u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1a6824: 0x7a460080  lq          $a2, 0x80($s2)
    ctx->pc = 0x1a6824u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1a6828: 0x7a450090  lq          $a1, 0x90($s2)
    ctx->pc = 0x1a6828u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1a682c: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x1a682cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x1a6830: 0x7d270010  sq          $a3, 0x10($t1)
    ctx->pc = 0x1a6830u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 7));
    // 0x1a6834: 0x7d260020  sq          $a2, 0x20($t1)
    ctx->pc = 0x1a6834u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 6));
    // 0x1a6838: 0x7d250030  sq          $a1, 0x30($t1)
    ctx->pc = 0x1a6838u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), GPR_VEC(ctx, 5));
    // 0x1a683c: 0x7a4600a0  lq          $a2, 0xA0($s2)
    ctx->pc = 0x1a683cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1a6840: 0x7a4500b0  lq          $a1, 0xB0($s2)
    ctx->pc = 0x1a6840u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x1a6844: 0x7d260040  sq          $a2, 0x40($t1)
    ctx->pc = 0x1a6844u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 64), GPR_VEC(ctx, 6));
    // 0x1a6848: 0x7d250050  sq          $a1, 0x50($t1)
    ctx->pc = 0x1a6848u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 80), GPR_VEC(ctx, 5));
    // 0x1a684c: 0x8e4500c0  lw          $a1, 0xC0($s2)
    ctx->pc = 0x1a684cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x1a6850: 0xac25b3b0  sw          $a1, -0x4C50($at)
    ctx->pc = 0x1a6850u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947760), GPR_U32(ctx, 5));
    // 0x1a6854: 0x8e4500c4  lw          $a1, 0xC4($s2)
    ctx->pc = 0x1a6854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1a6858: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a6858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a685c: 0xac25b3b4  sw          $a1, -0x4C4C($at)
    ctx->pc = 0x1a685cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947764), GPR_U32(ctx, 5));
    // 0x1a6860: 0x8e4500c8  lw          $a1, 0xC8($s2)
    ctx->pc = 0x1a6860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x1a6864: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a6864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a6868: 0xac25b3b8  sw          $a1, -0x4C48($at)
    ctx->pc = 0x1a6868u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947768), GPR_U32(ctx, 5));
    // 0x1a686c: 0x8e4500cc  lw          $a1, 0xCC($s2)
    ctx->pc = 0x1a686cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x1a6870: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a6870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a6874: 0xac25b3bc  sw          $a1, -0x4C44($at)
    ctx->pc = 0x1a6874u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947772), GPR_U32(ctx, 5));
    // 0x1a6878: 0xaf808b9c  sw          $zero, -0x7464($gp)
    ctx->pc = 0x1a6878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 0));
    // 0x1a687c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a687cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a6880: 0x7a4500a0  lq          $a1, 0xA0($s2)
    ctx->pc = 0x1a6880u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1a6884: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1a6884u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1a6888: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1A6888u;
    SET_GPR_U32(ctx, 31, 0x1A6890u);
    ctx->pc = 0x1A688Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6888u;
            // 0x1a688c: 0xac22b3cc  sw          $v0, -0x4C34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294947788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6890u; }
        if (ctx->pc != 0x1A6890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6890u; }
        if (ctx->pc != 0x1A6890u) { return; }
    }
    ctx->pc = 0x1A6890u;
label_1a6890:
    // 0x1a6890: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1A6890u;
    SET_GPR_U32(ctx, 31, 0x1A6898u);
    ctx->pc = 0x1A6894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6890u;
            // 0x1a6894: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6898u; }
        if (ctx->pc != 0x1A6898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6898u; }
        if (ctx->pc != 0x1A6898u) { return; }
    }
    ctx->pc = 0x1A6898u;
label_1a6898:
    // 0x1a6898: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1A6898u;
    SET_GPR_U32(ctx, 31, 0x1A68A0u);
    ctx->pc = 0x1A689Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6898u;
            // 0x1a689c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68A0u; }
        if (ctx->pc != 0x1A68A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68A0u; }
        if (ctx->pc != 0x1A68A0u) { return; }
    }
    ctx->pc = 0x1A68A0u;
label_1a68a0:
    // 0x1a68a0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1A68A0u;
    SET_GPR_U32(ctx, 31, 0x1A68A8u);
    ctx->pc = 0x1A68A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A68A0u;
            // 0x1a68a4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68A8u; }
        if (ctx->pc != 0x1A68A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68A8u; }
        if (ctx->pc != 0x1A68A8u) { return; }
    }
    ctx->pc = 0x1A68A8u;
label_1a68a8:
    // 0x1a68a8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1a68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1a68ac: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1a68acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1a68b0: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1a68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x1a68b4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a68b8: 0x3c02c090  lui         $v0, 0xC090
    ctx->pc = 0x1a68b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49296 << 16));
    // 0x1a68bc: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1a68bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1a68c0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1a68c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x1a68c4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1a68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1a68c8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1a68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1a68cc: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1a68ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1a68d0: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1a68d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1a68d4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1A68D4u;
    SET_GPR_U32(ctx, 31, 0x1A68DCu);
    ctx->pc = 0x1A68D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A68D4u;
            // 0x1a68d8: 0x26450070  addiu       $a1, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68DCu; }
        if (ctx->pc != 0x1A68DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68DCu; }
        if (ctx->pc != 0x1A68DCu) { return; }
    }
    ctx->pc = 0x1A68DCu;
label_1a68dc:
    // 0x1a68dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a68dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a68e0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1A68E0u;
    SET_GPR_U32(ctx, 31, 0x1A68E8u);
    ctx->pc = 0x1A68E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A68E0u;
            // 0x1a68e4: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68E8u; }
        if (ctx->pc != 0x1A68E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68E8u; }
        if (ctx->pc != 0x1A68E8u) { return; }
    }
    ctx->pc = 0x1A68E8u;
label_1a68e8:
    // 0x1a68e8: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x1a68e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1a68ec: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x1a68ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x1a68f0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1A68F0u;
    SET_GPR_U32(ctx, 31, 0x1A68F8u);
    ctx->pc = 0x1A68F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A68F0u;
            // 0x1a68f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68F8u; }
        if (ctx->pc != 0x1A68F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68F8u; }
        if (ctx->pc != 0x1A68F8u) { return; }
    }
    ctx->pc = 0x1A68F8u;
label_1a68f8:
    // 0x1a68f8: 0x7a4300a0  lq          $v1, 0xA0($s2)
    ctx->pc = 0x1a68f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1a68fc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1a68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1a6900: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a6900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a6904: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1a6904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a6908: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a6908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a690c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1A690Cu;
    SET_GPR_U32(ctx, 31, 0x1A6914u);
    ctx->pc = 0x1A6910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A690Cu;
            // 0x1a6910: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6914u; }
        if (ctx->pc != 0x1A6914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6914u; }
        if (ctx->pc != 0x1A6914u) { return; }
    }
    ctx->pc = 0x1A6914u;
label_1a6914:
    // 0x1a6914: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a6914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a6918: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1a6918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a691c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1A691Cu;
    SET_GPR_U32(ctx, 31, 0x1A6924u);
    ctx->pc = 0x1A6920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A691Cu;
            // 0x1a6920: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6924u; }
        if (ctx->pc != 0x1A6924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6924u; }
        if (ctx->pc != 0x1A6924u) { return; }
    }
    ctx->pc = 0x1A6924u;
label_1a6924:
    // 0x1a6924: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1a6924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a6928: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1a6928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a692c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1A692Cu;
    SET_GPR_U32(ctx, 31, 0x1A6934u);
    ctx->pc = 0x1A6930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A692Cu;
            // 0x1a6930: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6934u; }
        if (ctx->pc != 0x1A6934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6934u; }
        if (ctx->pc != 0x1A6934u) { return; }
    }
    ctx->pc = 0x1A6934u;
label_1a6934:
    // 0x1a6934: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1a6934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a6938: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1a6938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a693c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1A693Cu;
    SET_GPR_U32(ctx, 31, 0x1A6944u);
    ctx->pc = 0x1A6940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A693Cu;
            // 0x1a6940: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6944u; }
        if (ctx->pc != 0x1A6944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6944u; }
        if (ctx->pc != 0x1A6944u) { return; }
    }
    ctx->pc = 0x1A6944u;
label_1a6944:
    // 0x1a6944: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1a6944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6948: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a6948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a694c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a694cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a6950: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a6950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1a6954: 0x2484b3f0  addiu       $a0, $a0, -0x4C10
    ctx->pc = 0x1a6954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947824));
    // 0x1a6958: 0x24a5b3c0  addiu       $a1, $a1, -0x4C40
    ctx->pc = 0x1a6958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947776));
    // 0x1a695c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1a695cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a6960: 0xaf828c04  sw          $v0, -0x73FC($gp)
    ctx->pc = 0x1a6960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937604), GPR_U32(ctx, 2));
    // 0x1a6964: 0x8e100580  lw          $s0, 0x580($s0)
    ctx->pc = 0x1a6964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x1a6968: 0x8e520014  lw          $s2, 0x14($s2)
    ctx->pc = 0x1a6968u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a696c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1A696Cu;
    SET_GPR_U32(ctx, 31, 0x1A6974u);
    ctx->pc = 0x1A6970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A696Cu;
            // 0x1a6970: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6974u; }
        if (ctx->pc != 0x1A6974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6974u; }
        if (ctx->pc != 0x1A6974u) { return; }
    }
    ctx->pc = 0x1A6974u;
label_1a6974:
    // 0x1a6974: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a6974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a6978: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a6978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1a697c: 0x2484b3e0  addiu       $a0, $a0, -0x4C20
    ctx->pc = 0x1a697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947808));
    // 0x1a6980: 0x24a5b3c0  addiu       $a1, $a1, -0x4C40
    ctx->pc = 0x1a6980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947776));
    // 0x1a6984: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1A6984u;
    SET_GPR_U32(ctx, 31, 0x1A698Cu);
    ctx->pc = 0x1A6988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6984u;
            // 0x1a6988: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A698Cu; }
        if (ctx->pc != 0x1A698Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A698Cu; }
        if (ctx->pc != 0x1A698Cu) { return; }
    }
    ctx->pc = 0x1A698Cu;
label_1a698c:
    // 0x1a698c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a698cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a6990: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a6990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1a6994: 0x2484b410  addiu       $a0, $a0, -0x4BF0
    ctx->pc = 0x1a6994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947856));
    // 0x1a6998: 0x24a5b3c0  addiu       $a1, $a1, -0x4C40
    ctx->pc = 0x1a6998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947776));
    // 0x1a699c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1A699Cu;
    SET_GPR_U32(ctx, 31, 0x1A69A4u);
    ctx->pc = 0x1A69A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A699Cu;
            // 0x1a69a0: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69A4u; }
        if (ctx->pc != 0x1A69A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A69A4u; }
        if (ctx->pc != 0x1A69A4u) { return; }
    }
    ctx->pc = 0x1A69A4u;
label_1a69a4:
    // 0x1a69a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a69a8: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A69A8u;
    {
        const bool branch_taken_0x1a69a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A69ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A69A8u;
            // 0x1a69ac: 0x3c0301ea  lui         $v1, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69a8) {
            ctx->pc = 0x1A69E8u;
            goto label_1a69e8;
        }
    }
    ctx->pc = 0x1A69B0u;
    // 0x1a69b0: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1a69b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
    // 0x1a69b4: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1a69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x1a69b8: 0x2463b3e0  addiu       $v1, $v1, -0x4C20
    ctx->pc = 0x1a69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947808));
    // 0x1a69bc: 0x2442b3d0  addiu       $v0, $v0, -0x4C30
    ctx->pc = 0x1a69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947792));
    // 0x1a69c0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a69c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a69c4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a69c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a69c8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a69c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1a69cc: 0xc420b3f4  lwc1        $f0, -0x4C0C($at)
    ctx->pc = 0x1a69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a69d0: 0xaf908c08  sw          $s0, -0x73F8($gp)
    ctx->pc = 0x1a69d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937608), GPR_U32(ctx, 16));
    // 0x1a69d4: 0xaf928c0c  sw          $s2, -0x73F4($gp)
    ctx->pc = 0x1a69d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937612), GPR_U32(ctx, 18));
    // 0x1a69d8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a69d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1a69dc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a69dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a69e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A69E0u;
    {
        const bool branch_taken_0x1a69e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A69E0u;
            // 0x1a69e4: 0xe420b3f4  swc1        $f0, -0x4C0C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294947828), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69e0) {
            ctx->pc = 0x1A6A18u;
            goto label_1a6a18;
        }
    }
    ctx->pc = 0x1A69E8u;
label_1a69e8:
    // 0x1a69e8: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1a69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x1a69ec: 0x2463b3f0  addiu       $v1, $v1, -0x4C10
    ctx->pc = 0x1a69ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947824));
    // 0x1a69f0: 0x2442b3d0  addiu       $v0, $v0, -0x4C30
    ctx->pc = 0x1a69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947792));
    // 0x1a69f4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a69f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a69f8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a69f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a69fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a69fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1a6a00: 0xc420b3e4  lwc1        $f0, -0x4C1C($at)
    ctx->pc = 0x1a6a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6a04: 0xaf928c08  sw          $s2, -0x73F8($gp)
    ctx->pc = 0x1a6a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937608), GPR_U32(ctx, 18));
    // 0x1a6a08: 0xaf908c0c  sw          $s0, -0x73F4($gp)
    ctx->pc = 0x1a6a08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937612), GPR_U32(ctx, 16));
    // 0x1a6a0c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1a6a0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1a6a10: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a6a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a6a14: 0xe420b3e4  swc1        $f0, -0x4C1C($at)
    ctx->pc = 0x1a6a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294947812), bits); }
label_1a6a18:
    // 0x1a6a18: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1a6a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1a6a1c: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1a6a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1a6a20: 0x2484b400  addiu       $a0, $a0, -0x4C00
    ctx->pc = 0x1a6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947840));
    // 0x1a6a24: 0x24a5b3f0  addiu       $a1, $a1, -0x4C10
    ctx->pc = 0x1a6a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947824));
    // 0x1a6a28: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1A6A28u;
    SET_GPR_U32(ctx, 31, 0x1A6A30u);
    ctx->pc = 0x1A6A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A28u;
            // 0x1a6a2c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A30u; }
        if (ctx->pc != 0x1A6A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A30u; }
        if (ctx->pc != 0x1A6A30u) { return; }
    }
    ctx->pc = 0x1A6A30u;
label_1a6a30:
    // 0x1a6a30: 0xc7ad00d8  lwc1        $f13, 0xD8($sp)
    ctx->pc = 0x1a6a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a6a34: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x1A6A34u;
    SET_GPR_U32(ctx, 31, 0x1A6A3Cu);
    ctx->pc = 0x1A6A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A34u;
            // 0x1a6a38: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A3Cu; }
        if (ctx->pc != 0x1A6A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A3Cu; }
        if (ctx->pc != 0x1A6A3Cu) { return; }
    }
    ctx->pc = 0x1A6A3Cu;
label_1a6a3c:
    // 0x1a6a3c: 0xe7808bfc  swc1        $f0, -0x7404($gp)
    ctx->pc = 0x1a6a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937596), bits); }
    // 0x1a6a40: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a6a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1a6a44: 0xc7808bfc  lwc1        $f0, -0x7404($gp)
    ctx->pc = 0x1a6a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6a48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a6a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1a6a4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6a50: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x1A6A50u;
    SET_GPR_U32(ctx, 31, 0x1A6A58u);
    ctx->pc = 0x1A6A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A50u;
            // 0x1a6a54: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A58u; }
        if (ctx->pc != 0x1A6A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A58u; }
        if (ctx->pc != 0x1A6A58u) { return; }
    }
    ctx->pc = 0x1A6A58u;
label_1a6a58:
    // 0x1a6a58: 0xe7808bfc  swc1        $f0, -0x7404($gp)
    ctx->pc = 0x1a6a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937596), bits); }
    // 0x1a6a5c: 0x8e652e54  lw          $a1, 0x2E54($s3)
    ctx->pc = 0x1a6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11860)));
    // 0x1a6a60: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1A6A60u;
    SET_GPR_U32(ctx, 31, 0x1A6A68u);
    ctx->pc = 0x1A6A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A60u;
            // 0x1a6a64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A68u; }
        if (ctx->pc != 0x1A6A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A68u; }
        if (ctx->pc != 0x1A6A68u) { return; }
    }
    ctx->pc = 0x1A6A68u;
label_1a6a68:
    // 0x1a6a68: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a6a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a6a6c: 0xaf828bf4  sw          $v0, -0x740C($gp)
    ctx->pc = 0x1a6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937588), GPR_U32(ctx, 2));
    // 0x1a6a70: 0xc420b3f4  lwc1        $f0, -0x4C0C($at)
    ctx->pc = 0x1a6a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6a74: 0xaf808c00  sw          $zero, -0x7400($gp)
    ctx->pc = 0x1a6a74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937600), GPR_U32(ctx, 0));
    // 0x1a6a78: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1a6a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1a6a7c: 0xe420b414  swc1        $f0, -0x4BEC($at)
    ctx->pc = 0x1a6a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294947860), bits); }
    // 0x1a6a80: 0xae602f60  sw          $zero, 0x2F60($s3)
    ctx->pc = 0x1a6a80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12128), GPR_U32(ctx, 0));
    // 0x1a6a84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a6a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a6a88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a6a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a6a8c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a6a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6a90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a6a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6a94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a6a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6a98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a6a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6a9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a6a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6AA0u;
            // 0x1a6aa4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6AA8u;
}
