#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DataAssignMDT__15mgCVisualFixMDTFP10MDT_HEADERP9mgCMemoryP17mgCTextureManager
// Address: 0x13f360 - 0x13f4e0
void DataAssignMDT__15mgCVisualFixMDTFP10MDT_HEADERP9mgCMemoryP17mgCTextureManager_0x13f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataAssignMDT__15mgCVisualFixMDTFP10MDT_HEADERP9mgCMemoryP17mgCTextureManager_0x13f360");
#endif

    switch (ctx->pc) {
        case 0x13f360u: goto label_13f360;
        case 0x13f364u: goto label_13f364;
        case 0x13f368u: goto label_13f368;
        case 0x13f36cu: goto label_13f36c;
        case 0x13f370u: goto label_13f370;
        case 0x13f374u: goto label_13f374;
        case 0x13f378u: goto label_13f378;
        case 0x13f37cu: goto label_13f37c;
        case 0x13f380u: goto label_13f380;
        case 0x13f384u: goto label_13f384;
        case 0x13f388u: goto label_13f388;
        case 0x13f38cu: goto label_13f38c;
        case 0x13f390u: goto label_13f390;
        case 0x13f394u: goto label_13f394;
        case 0x13f398u: goto label_13f398;
        case 0x13f39cu: goto label_13f39c;
        case 0x13f3a0u: goto label_13f3a0;
        case 0x13f3a4u: goto label_13f3a4;
        case 0x13f3a8u: goto label_13f3a8;
        case 0x13f3acu: goto label_13f3ac;
        case 0x13f3b0u: goto label_13f3b0;
        case 0x13f3b4u: goto label_13f3b4;
        case 0x13f3b8u: goto label_13f3b8;
        case 0x13f3bcu: goto label_13f3bc;
        case 0x13f3c0u: goto label_13f3c0;
        case 0x13f3c4u: goto label_13f3c4;
        case 0x13f3c8u: goto label_13f3c8;
        case 0x13f3ccu: goto label_13f3cc;
        case 0x13f3d0u: goto label_13f3d0;
        case 0x13f3d4u: goto label_13f3d4;
        case 0x13f3d8u: goto label_13f3d8;
        case 0x13f3dcu: goto label_13f3dc;
        case 0x13f3e0u: goto label_13f3e0;
        case 0x13f3e4u: goto label_13f3e4;
        case 0x13f3e8u: goto label_13f3e8;
        case 0x13f3ecu: goto label_13f3ec;
        case 0x13f3f0u: goto label_13f3f0;
        case 0x13f3f4u: goto label_13f3f4;
        case 0x13f3f8u: goto label_13f3f8;
        case 0x13f3fcu: goto label_13f3fc;
        case 0x13f400u: goto label_13f400;
        case 0x13f404u: goto label_13f404;
        case 0x13f408u: goto label_13f408;
        case 0x13f40cu: goto label_13f40c;
        case 0x13f410u: goto label_13f410;
        case 0x13f414u: goto label_13f414;
        case 0x13f418u: goto label_13f418;
        case 0x13f41cu: goto label_13f41c;
        case 0x13f420u: goto label_13f420;
        case 0x13f424u: goto label_13f424;
        case 0x13f428u: goto label_13f428;
        case 0x13f42cu: goto label_13f42c;
        case 0x13f430u: goto label_13f430;
        case 0x13f434u: goto label_13f434;
        case 0x13f438u: goto label_13f438;
        case 0x13f43cu: goto label_13f43c;
        case 0x13f440u: goto label_13f440;
        case 0x13f444u: goto label_13f444;
        case 0x13f448u: goto label_13f448;
        case 0x13f44cu: goto label_13f44c;
        case 0x13f450u: goto label_13f450;
        case 0x13f454u: goto label_13f454;
        case 0x13f458u: goto label_13f458;
        case 0x13f45cu: goto label_13f45c;
        case 0x13f460u: goto label_13f460;
        case 0x13f464u: goto label_13f464;
        case 0x13f468u: goto label_13f468;
        case 0x13f46cu: goto label_13f46c;
        case 0x13f470u: goto label_13f470;
        case 0x13f474u: goto label_13f474;
        case 0x13f478u: goto label_13f478;
        case 0x13f47cu: goto label_13f47c;
        case 0x13f480u: goto label_13f480;
        case 0x13f484u: goto label_13f484;
        case 0x13f488u: goto label_13f488;
        case 0x13f48cu: goto label_13f48c;
        case 0x13f490u: goto label_13f490;
        case 0x13f494u: goto label_13f494;
        case 0x13f498u: goto label_13f498;
        case 0x13f49cu: goto label_13f49c;
        case 0x13f4a0u: goto label_13f4a0;
        case 0x13f4a4u: goto label_13f4a4;
        case 0x13f4a8u: goto label_13f4a8;
        case 0x13f4acu: goto label_13f4ac;
        case 0x13f4b0u: goto label_13f4b0;
        case 0x13f4b4u: goto label_13f4b4;
        case 0x13f4b8u: goto label_13f4b8;
        case 0x13f4bcu: goto label_13f4bc;
        case 0x13f4c0u: goto label_13f4c0;
        case 0x13f4c4u: goto label_13f4c4;
        case 0x13f4c8u: goto label_13f4c8;
        case 0x13f4ccu: goto label_13f4cc;
        case 0x13f4d0u: goto label_13f4d0;
        case 0x13f4d4u: goto label_13f4d4;
        case 0x13f4d8u: goto label_13f4d8;
        case 0x13f4dcu: goto label_13f4dc;
        default: break;
    }

    ctx->pc = 0x13f360u;

label_13f360:
    // 0x13f360: 0x3c01fffb  lui         $at, 0xFFFB
    ctx->pc = 0x13f360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65531 << 16));
label_13f364:
    // 0x13f364: 0x34214f50  ori         $at, $at, 0x4F50
    ctx->pc = 0x13f364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20304);
label_13f368:
    // 0x13f368: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x13f368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_13f36c:
    // 0x13f36c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13f36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_13f370:
    // 0x13f370: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x13f370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_13f374:
    // 0x13f374: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13f374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13f378:
    // 0x13f378: 0x3421b080  ori         $at, $at, 0xB080
    ctx->pc = 0x13f378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45184);
label_13f37c:
    // 0x13f37c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13f380:
    // 0x13f380: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13f380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f384:
    // 0x13f384: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13f388:
    // 0x13f388: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13f388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13f38c:
    // 0x13f38c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13f390:
    // 0x13f390: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x13f390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_13f394:
    // 0x13f394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13f398:
    // 0x13f398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13f39c:
    // 0x13f39c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13f39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13f3a0:
    // 0x13f3a0: 0xc04e640  jal         func_139900
label_13f3a4:
    if (ctx->pc == 0x13F3A4u) {
        ctx->pc = 0x13F3A4u;
            // 0x13f3a4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F3A8u;
        goto label_13f3a8;
    }
    ctx->pc = 0x13F3A0u;
    SET_GPR_U32(ctx, 31, 0x13F3A8u);
    ctx->pc = 0x13F3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3A0u;
            // 0x13f3a4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F3A8u; }
        if (ctx->pc != 0x13F3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F3A8u; }
        if (ctx->pc != 0x13F3A8u) { return; }
    }
    ctx->pc = 0x13F3A8u;
label_13f3a8:
    // 0x13f3a8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x13f3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_13f3ac:
    // 0x13f3ac: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x13f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13f3b0:
    // 0x13f3b0: 0x3421b080  ori         $at, $at, 0xB080
    ctx->pc = 0x13f3b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45184);
label_13f3b4:
    // 0x13f3b4: 0x24064b00  addiu       $a2, $zero, 0x4B00
    ctx->pc = 0x13f3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19200));
label_13f3b8:
    // 0x13f3b8: 0xc04e79c  jal         func_139E70
label_13f3bc:
    if (ctx->pc == 0x13F3BCu) {
        ctx->pc = 0x13F3BCu;
            // 0x13f3bc: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x13F3C0u;
        goto label_13f3c0;
    }
    ctx->pc = 0x13F3B8u;
    SET_GPR_U32(ctx, 31, 0x13F3C0u);
    ctx->pc = 0x13F3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3B8u;
            // 0x13f3bc: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F3C0u; }
        if (ctx->pc != 0x13F3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F3C0u; }
        if (ctx->pc != 0x13F3C0u) { return; }
    }
    ctx->pc = 0x13F3C0u;
label_13f3c0:
    // 0x13f3c0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_13f3c4:
    if (ctx->pc == 0x13F3C4u) {
        ctx->pc = 0x13F3C4u;
            // 0x13f3c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F3C8u;
        goto label_13f3c8;
    }
    ctx->pc = 0x13F3C0u;
    {
        const bool branch_taken_0x13f3c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3C0u;
            // 0x13f3c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3c0) {
            ctx->pc = 0x13F3D0u;
            goto label_13f3d0;
        }
    }
    ctx->pc = 0x13F3C8u;
label_13f3c8:
    // 0x13f3c8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x13f3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_13f3cc:
    // 0x13f3cc: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x13f3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_13f3d0:
    // 0x13f3d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13f3d4:
    // 0x13f3d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13f3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13f3d8:
    // 0x13f3d8: 0xc04fb88  jal         func_13EE20
label_13f3dc:
    if (ctx->pc == 0x13F3DCu) {
        ctx->pc = 0x13F3DCu;
            // 0x13f3dc: 0xaeb00008  sw          $s0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x13F3E0u;
        goto label_13f3e0;
    }
    ctx->pc = 0x13F3D8u;
    SET_GPR_U32(ctx, 31, 0x13F3E0u);
    ctx->pc = 0x13F3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3D8u;
            // 0x13f3dc: 0xaeb00008  sw          $s0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EE20u;
    if (runtime->hasFunction(0x13EE20u)) {
        auto targetFn = runtime->lookupFunction(0x13EE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F3E0u; }
        if (ctx->pc != 0x13F3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyMDTDataPointer__12mgCVisualMDTFP10MDT_HEADERP9mgCMemory_0x13ee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F3E0u; }
        if (ctx->pc != 0x13F3E0u) { return; }
    }
    ctx->pc = 0x13F3E0u;
label_13f3e0:
    // 0x13f3e0: 0xaea00048  sw          $zero, 0x48($s5)
    ctx->pc = 0x13f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 0));
label_13f3e4:
    // 0x13f3e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13f3e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f3e8:
    // 0x13f3e8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x13f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_13f3ec:
    // 0x13f3ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13f3f0:
    // 0x13f3f0: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x13f3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13f3f4:
    // 0x13f3f4: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x13f3f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_13f3f8:
    // 0x13f3f8: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_13f3fc:
    if (ctx->pc == 0x13F3FCu) {
        ctx->pc = 0x13F3FCu;
            // 0x13f3fc: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x13F400u;
        goto label_13f400;
    }
    ctx->pc = 0x13F3F8u;
    {
        const bool branch_taken_0x13f3f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3F8u;
            // 0x13f3fc: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3f8) {
            ctx->pc = 0x13F4B0u;
            goto label_13f4b0;
        }
    }
    ctx->pc = 0x13F400u;
label_13f400:
    // 0x13f400: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x13f400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
label_13f404:
    // 0x13f404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13f408:
    // 0x13f408: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x13f408u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_13f40c:
    // 0x13f40c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13f40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13f410:
    // 0x13f410: 0xac20b0a4  sw          $zero, -0x4F5C($at)
    ctx->pc = 0x13f410u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946980), GPR_U32(ctx, 0));
label_13f414:
    // 0x13f414: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13f414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13f418:
    // 0x13f418: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x13f418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
label_13f41c:
    // 0x13f41c: 0x27a8007c  addiu       $t0, $sp, 0x7C
    ctx->pc = 0x13f41cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_13f420:
    // 0x13f420: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x13f420u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_13f424:
    // 0x13f424: 0xac20b09c  sw          $zero, -0x4F64($at)
    ctx->pc = 0x13f424u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946972), GPR_U32(ctx, 0));
label_13f428:
    // 0x13f428: 0x8eb9001c  lw          $t9, 0x1C($s5)
    ctx->pc = 0x13f428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_13f42c:
    // 0x13f42c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x13f42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_13f430:
    // 0x13f430: 0x3421b080  ori         $at, $at, 0xB080
    ctx->pc = 0x13f430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45184);
label_13f434:
    // 0x13f434: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x13f434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_13f438:
    // 0x13f438: 0x320f809  jalr        $t9
label_13f43c:
    if (ctx->pc == 0x13F43Cu) {
        ctx->pc = 0x13F43Cu;
            // 0x13f43c: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x13F440u;
        goto label_13f440;
    }
    ctx->pc = 0x13F438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F440u);
        ctx->pc = 0x13F43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F438u;
            // 0x13f43c: 0x3a13821  addu        $a3, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13F440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F440u; }
            if (ctx->pc != 0x13F440u) { return; }
        }
        }
    }
    ctx->pc = 0x13F440u;
label_13f440:
    // 0x13f440: 0x8eb9001c  lw          $t9, 0x1C($s5)
    ctx->pc = 0x13f440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_13f444:
    // 0x13f444: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13f444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f448:
    // 0x13f448: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x13f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_13f44c:
    // 0x13f44c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13f450:
    // 0x13f450: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x13f450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_13f454:
    // 0x13f454: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x13f454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_13f458:
    // 0x13f458: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x13f458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_13f45c:
    // 0x13f45c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_13f460:
    // 0x13f460: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x13f460u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13f464:
    // 0x13f464: 0x320f809  jalr        $t9
label_13f468:
    if (ctx->pc == 0x13F468u) {
        ctx->pc = 0x13F468u;
            // 0x13f468: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F46Cu;
        goto label_13f46c;
    }
    ctx->pc = 0x13F464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F46Cu);
        ctx->pc = 0x13F468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F464u;
            // 0x13f468: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13F46Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F46Cu; }
            if (ctx->pc != 0x13F46Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13F46Cu;
label_13f46c:
    // 0x13f46c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x13f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_13f470:
    // 0x13f470: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x13f470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_13f474:
    // 0x13f474: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x13f474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_13f478:
    // 0x13f478: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f47c:
    // 0x13f47c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13f47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13f480:
    // 0x13f480: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x13f480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
label_13f484:
    // 0x13f484: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x13f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_13f488:
    // 0x13f488: 0xac530024  sw          $s3, 0x24($v0)
    ctx->pc = 0x13f488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 19));
label_13f48c:
    // 0x13f48c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x13f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_13f490:
    // 0x13f490: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x13f490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_13f494:
    // 0x13f494: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x13f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_13f498:
    // 0x13f498: 0xc04e748  jal         func_139D20
label_13f49c:
    if (ctx->pc == 0x13F49Cu) {
        ctx->pc = 0x13F49Cu;
            // 0x13f49c: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x13F4A0u;
        goto label_13f4a0;
    }
    ctx->pc = 0x13F498u;
    SET_GPR_U32(ctx, 31, 0x13F4A0u);
    ctx->pc = 0x13F49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F498u;
            // 0x13f49c: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F4A0u; }
        if (ctx->pc != 0x13F4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F4A0u; }
        if (ctx->pc != 0x13F4A0u) { return; }
    }
    ctx->pc = 0x13F4A0u;
label_13f4a0:
    // 0x13f4a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13f4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13f4a4:
    // 0x13f4a4: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x13f4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_13f4a8:
    // 0x13f4a8: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_13f4ac:
    if (ctx->pc == 0x13F4ACu) {
        ctx->pc = 0x13F4ACu;
            // 0x13f4ac: 0x3c010005  lui         $at, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
        ctx->pc = 0x13F4B0u;
        goto label_13f4b0;
    }
    ctx->pc = 0x13F4A8u;
    {
        const bool branch_taken_0x13f4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F4A8u;
            // 0x13f4ac: 0x3c010005  lui         $at, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4a8) {
            ctx->pc = 0x13F404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f404;
        }
    }
    ctx->pc = 0x13F4B0u;
label_13f4b0:
    // 0x13f4b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13f4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_13f4b4:
    // 0x13f4b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13f4b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13f4b8:
    // 0x13f4b8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x13f4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_13f4bc:
    // 0x13f4bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13f4bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13f4c0:
    // 0x13f4c0: 0x3421b0b0  ori         $at, $at, 0xB0B0
    ctx->pc = 0x13f4c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45232);
label_13f4c4:
    // 0x13f4c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13f4c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13f4c8:
    // 0x13f4c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f4cc:
    // 0x13f4cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f4ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13f4d0:
    // 0x13f4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f4d4:
    // 0x13f4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f4d8:
    // 0x13f4d8: 0x3e00008  jr          $ra
label_13f4dc:
    if (ctx->pc == 0x13F4DCu) {
        ctx->pc = 0x13F4DCu;
            // 0x13f4dc: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x13F4E0u;
        goto label_fallthrough_0x13f4d8;
    }
    ctx->pc = 0x13F4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F4D8u;
            // 0x13f4dc: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13f4d8:
    ctx->pc = 0x13F4E0u;
}
