#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__11CItemSelectFv
// Address: 0x24f470 - 0x24f994
void KeyStep__11CItemSelectFv_0x24f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__11CItemSelectFv_0x24f470");
#endif

    switch (ctx->pc) {
        case 0x24f4bcu: goto label_24f4bc;
        case 0x24f4d8u: goto label_24f4d8;
        case 0x24f4e0u: goto label_24f4e0;
        case 0x24f4f4u: goto label_24f4f4;
        case 0x24f4fcu: goto label_24f4fc;
        case 0x24f508u: goto label_24f508;
        case 0x24f520u: goto label_24f520;
        case 0x24f550u: goto label_24f550;
        case 0x24f568u: goto label_24f568;
        case 0x24f570u: goto label_24f570;
        case 0x24f580u: goto label_24f580;
        case 0x24f594u: goto label_24f594;
        case 0x24f5d0u: goto label_24f5d0;
        case 0x24f5dcu: goto label_24f5dc;
        case 0x24f5f4u: goto label_24f5f4;
        case 0x24f6a0u: goto label_24f6a0;
        case 0x24f6c8u: goto label_24f6c8;
        case 0x24f714u: goto label_24f714;
        case 0x24f728u: goto label_24f728;
        case 0x24f734u: goto label_24f734;
        case 0x24f754u: goto label_24f754;
        case 0x24f780u: goto label_24f780;
        case 0x24f810u: goto label_24f810;
        case 0x24f820u: goto label_24f820;
        case 0x24f830u: goto label_24f830;
        case 0x24f84cu: goto label_24f84c;
        case 0x24f858u: goto label_24f858;
        case 0x24f880u: goto label_24f880;
        case 0x24f894u: goto label_24f894;
        case 0x24f8acu: goto label_24f8ac;
        case 0x24f8f0u: goto label_24f8f0;
        case 0x24f918u: goto label_24f918;
        case 0x24f930u: goto label_24f930;
        case 0x24f948u: goto label_24f948;
        case 0x24f958u: goto label_24f958;
        case 0x24f968u: goto label_24f968;
        case 0x24f970u: goto label_24f970;
        default: break;
    }

    ctx->pc = 0x24f470u;

    // 0x24f470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24f470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24f474: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f478: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24f478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24f47c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24f47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24f480: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24f480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24f484: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24f484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24f488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24f488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24f48c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24f48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24f490: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24f490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f494: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x24f494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f498: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x24F498u;
    {
        const bool branch_taken_0x24f498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F498u;
            // 0x24f49c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f498) {
            ctx->pc = 0x24F5B4u;
            goto label_24f5b4;
        }
    }
    ctx->pc = 0x24F4A0u;
    // 0x24f4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f4a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F4A4u;
    {
        const bool branch_taken_0x24f4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24f4a4) {
            ctx->pc = 0x24F4B4u;
            goto label_24f4b4;
        }
    }
    ctx->pc = 0x24F4ACu;
    // 0x24f4ac: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x24F4ACu;
    {
        const bool branch_taken_0x24f4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F4ACu;
            // 0x24f4b0: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4ac) {
            ctx->pc = 0x24F5C8u;
            goto label_24f5c8;
        }
    }
    ctx->pc = 0x24F4B4u;
label_24f4b4:
    // 0x24f4b4: 0xc05239c  jal         func_148E70
    ctx->pc = 0x24F4B4u;
    SET_GPR_U32(ctx, 31, 0x24F4BCu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F4BCu; }
        if (ctx->pc != 0x24F4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F4BCu; }
        if (ctx->pc != 0x24F4BCu) { return; }
    }
    ctx->pc = 0x24F4BCu;
label_24f4bc:
    // 0x24f4bc: 0x1440011c  bnez        $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x24F4BCu;
    {
        const bool branch_taken_0x24f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f4bc) {
            ctx->pc = 0x24F930u;
            goto label_24f930;
        }
    }
    ctx->pc = 0x24F4C4u;
    // 0x24f4c4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x24f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x24f4c8: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x24f4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x24f4cc: 0x26521ef0  addiu       $s2, $s2, 0x1EF0
    ctx->pc = 0x24f4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
    // 0x24f4d0: 0xc04b950  jal         func_12E540
    ctx->pc = 0x24F4D0u;
    SET_GPR_U32(ctx, 31, 0x24F4D8u);
    ctx->pc = 0x24F4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F4D0u;
            // 0x24f4d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F4D8u; }
        if (ctx->pc != 0x24F4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F4D8u; }
        if (ctx->pc != 0x24F4D8u) { return; }
    }
    ctx->pc = 0x24F4D8u;
label_24f4d8:
    // 0x24f4d8: 0xc05231c  jal         func_148C70
    ctx->pc = 0x24F4D8u;
    SET_GPR_U32(ctx, 31, 0x24F4E0u);
    ctx->pc = 0x24F4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F4D8u;
            // 0x24f4dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F4E0u; }
        if (ctx->pc != 0x24F4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F4E0u; }
        if (ctx->pc != 0x24F4E0u) { return; }
    }
    ctx->pc = 0x24F4E0u;
label_24f4e0:
    // 0x24f4e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24f4e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f4e4: 0x12600026  beqz        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x24F4E4u;
    {
        const bool branch_taken_0x24f4e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f4e4) {
            ctx->pc = 0x24F580u;
            goto label_24f580;
        }
    }
    ctx->pc = 0x24F4ECu;
    // 0x24f4ec: 0xc08cb18  jal         func_232C60
    ctx->pc = 0x24F4ECu;
    SET_GPR_U32(ctx, 31, 0x24F4F4u);
    ctx->pc = 0x24F4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F4ECu;
            // 0x24f4f0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C60u;
    if (runtime->hasFunction(0x232C60u)) {
        auto targetFn = runtime->lookupFunction(0x232C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F4F4u; }
        if (ctx->pc != 0x24F4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainImageDataEnter__Fi_0x232c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F4F4u; }
        if (ctx->pc != 0x24F4F4u) { return; }
    }
    ctx->pc = 0x24F4F4u;
label_24f4f4:
    // 0x24f4f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24F4F4u;
    {
        const bool branch_taken_0x24f4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F4F4u;
            // 0x24f4f8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4f4) {
            ctx->pc = 0x24F524u;
            goto label_24f524;
        }
    }
    ctx->pc = 0x24F4FCu;
label_24f4fc:
    // 0x24f4fc: 0x8e640110  lw          $a0, 0x110($s3)
    ctx->pc = 0x24f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x24f500: 0xc052734  jal         func_149CD0
    ctx->pc = 0x24F500u;
    SET_GPR_U32(ctx, 31, 0x24F508u);
    ctx->pc = 0x24F504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F500u;
            // 0x24f504: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F508u; }
        if (ctx->pc != 0x24F508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F508u; }
        if (ctx->pc != 0x24F508u) { return; }
    }
    ctx->pc = 0x24F508u;
label_24f508:
    // 0x24f508: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x24f508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x24f50c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24f50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24f514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f518: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x24F518u;
    SET_GPR_U32(ctx, 31, 0x24F520u);
    ctx->pc = 0x24F51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F518u;
            // 0x24f51c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F520u; }
        if (ctx->pc != 0x24F520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F520u; }
        if (ctx->pc != 0x24F520u) { return; }
    }
    ctx->pc = 0x24F520u;
label_24f520:
    // 0x24f520: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x24f520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_24f524:
    // 0x24f524: 0x0  nop
    ctx->pc = 0x24f524u;
    // NOP
    // 0x24f528: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24f528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24f52c: 0x24421450  addiu       $v0, $v0, 0x1450
    ctx->pc = 0x24f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5200));
    // 0x24f530: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x24f530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24f534: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24f534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f538: 0x14a0fff0  bnez        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x24F538u;
    {
        const bool branch_taken_0x24f538 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f538) {
            ctx->pc = 0x24F4FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f4fc;
        }
    }
    ctx->pc = 0x24F540u;
    // 0x24f540: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x24f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x24f544: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x24f544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x24f548: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x24F548u;
    SET_GPR_U32(ctx, 31, 0x24F550u);
    ctx->pc = 0x24F54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F548u;
            // 0x24f54c: 0xaf828308  sw          $v0, -0x7CF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F550u; }
        if (ctx->pc != 0x24F550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F550u; }
        if (ctx->pc != 0x24F550u) { return; }
    }
    ctx->pc = 0x24F550u;
label_24f550:
    // 0x24f550: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x24f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x24f554: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x24f554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x24f558: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x24f558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x24f55c: 0x24a5db30  addiu       $a1, $a1, -0x24D0
    ctx->pc = 0x24f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957872));
    // 0x24f560: 0xc08b18c  jal         func_22C630
    ctx->pc = 0x24F560u;
    SET_GPR_U32(ctx, 31, 0x24F568u);
    ctx->pc = 0x24F564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F560u;
            // 0x24f564: 0xaf828308  sw          $v0, -0x7CF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C630u;
    if (runtime->hasFunction(0x22C630u)) {
        auto targetFn = runtime->lookupFunction(0x22C630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F568u; }
        if (ctx->pc != 0x24F568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocPallet__18CMenuPosDataManageFP9mgCMemory_0x22c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F568u; }
        if (ctx->pc != 0x24F568u) { return; }
    }
    ctx->pc = 0x24F568u;
label_24f568:
    // 0x24f568: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x24F568u;
    SET_GPR_U32(ctx, 31, 0x24F570u);
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F570u; }
        if (ctx->pc != 0x24F570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F570u; }
        if (ctx->pc != 0x24F570u) { return; }
    }
    ctx->pc = 0x24F570u;
label_24f570:
    // 0x24f570: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f574: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x24f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x24f578: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x24F578u;
    SET_GPR_U32(ctx, 31, 0x24F580u);
    ctx->pc = 0x24F57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F578u;
            // 0x24f57c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F580u; }
        if (ctx->pc != 0x24F580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F580u; }
        if (ctx->pc != 0x24F580u) { return; }
    }
    ctx->pc = 0x24F580u;
label_24f580:
    // 0x24f580: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24f580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24f584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f588: 0x24a5bbc8  addiu       $a1, $a1, -0x4438
    ctx->pc = 0x24f588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949832));
    // 0x24f58c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x24F58Cu;
    SET_GPR_U32(ctx, 31, 0x24F594u);
    ctx->pc = 0x24F590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F58Cu;
            // 0x24f590: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F594u; }
        if (ctx->pc != 0x24F594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F594u; }
        if (ctx->pc != 0x24F594u) { return; }
    }
    ctx->pc = 0x24F594u;
label_24f594:
    // 0x24f594: 0xae02043c  sw          $v0, 0x43C($s0)
    ctx->pc = 0x24f594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1084), GPR_U32(ctx, 2));
    // 0x24f598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24f598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f59c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24f5a0: 0xa6020402  sh          $v0, 0x402($s0)
    ctx->pc = 0x24f5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f5a4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24f5a8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x24f5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x24f5ac: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x24F5ACu;
    {
        const bool branch_taken_0x24f5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F5ACu;
            // 0x24f5b0: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5ac) {
            ctx->pc = 0x24F930u;
            goto label_24f930;
        }
    }
    ctx->pc = 0x24F5B4u;
label_24f5b4:
    // 0x24f5b4: 0x8e020404  lw          $v0, 0x404($s0)
    ctx->pc = 0x24f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x24f5b8: 0x1c4000dd  bgtz        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x24F5B8u;
    {
        const bool branch_taken_0x24f5b8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x24f5b8) {
            ctx->pc = 0x24F930u;
            goto label_24f930;
        }
    }
    ctx->pc = 0x24F5C0u;
    // 0x24f5c0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x24F5C0u;
    {
        const bool branch_taken_0x24f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F5C0u;
            // 0x24f5c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5c0) {
            ctx->pc = 0x24F930u;
            goto label_24f930;
        }
    }
    ctx->pc = 0x24F5C8u;
label_24f5c8:
    // 0x24f5c8: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x24F5C8u;
    SET_GPR_U32(ctx, 31, 0x24F5D0u);
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F5D0u; }
        if (ctx->pc != 0x24F5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F5D0u; }
        if (ctx->pc != 0x24F5D0u) { return; }
    }
    ctx->pc = 0x24F5D0u;
label_24f5d0:
    // 0x24f5d0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x24f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24f5d4: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x24F5D4u;
    SET_GPR_U32(ctx, 31, 0x24F5DCu);
    ctx->pc = 0x24F5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F5D4u;
            // 0x24f5d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F5DCu; }
        if (ctx->pc != 0x24F5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F5DCu; }
        if (ctx->pc != 0x24F5DCu) { return; }
    }
    ctx->pc = 0x24F5DCu;
label_24f5dc:
    // 0x24f5dc: 0xc6000448  lwc1        $f0, 0x448($s0)
    ctx->pc = 0x24f5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f5e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24f5e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f5e4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x24f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x24f5e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24f5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f5ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24F5ECu;
    SET_GPR_U32(ctx, 31, 0x24F5F4u);
    ctx->pc = 0x24F5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F5ECu;
            // 0x24f5f0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F5F4u; }
        if (ctx->pc != 0x24F5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F5F4u; }
        if (ctx->pc != 0x24F5F4u) { return; }
    }
    ctx->pc = 0x24F5F4u;
label_24f5f4:
    // 0x24f5f4: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x24f5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x24f5f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F5F8u;
    {
        const bool branch_taken_0x24f5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F5F8u;
            // 0x24f5fc: 0x8e140440  lw          $s4, 0x440($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5f8) {
            ctx->pc = 0x24F60Cu;
            goto label_24f60c;
        }
    }
    ctx->pc = 0x24F600u;
    // 0x24f600: 0x2683fffb  addiu       $v1, $s4, -0x5
    ctx->pc = 0x24f600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967291));
    // 0x24f604: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x24F604u;
    {
        const bool branch_taken_0x24f604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F604u;
            // 0x24f608: 0xae030440  sw          $v1, 0x440($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f604) {
            ctx->pc = 0x24F6ACu;
            goto label_24f6ac;
        }
    }
    ctx->pc = 0x24F60Cu;
label_24f60c:
    // 0x24f60c: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x24f60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x24f610: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F610u;
    {
        const bool branch_taken_0x24f610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F610u;
            // 0x24f614: 0x32430008  andi        $v1, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f610) {
            ctx->pc = 0x24F624u;
            goto label_24f624;
        }
    }
    ctx->pc = 0x24F618u;
    // 0x24f618: 0x26830005  addiu       $v1, $s4, 0x5
    ctx->pc = 0x24f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 5));
    // 0x24f61c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x24F61Cu;
    {
        const bool branch_taken_0x24f61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F61Cu;
            // 0x24f620: 0xae030440  sw          $v1, 0x440($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f61c) {
            ctx->pc = 0x24F6ACu;
            goto label_24f6ac;
        }
    }
    ctx->pc = 0x24F624u;
label_24f624:
    // 0x24f624: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24F624u;
    {
        const bool branch_taken_0x24f624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F624u;
            // 0x24f628: 0x32430004  andi        $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f624) {
            ctx->pc = 0x24F668u;
            goto label_24f668;
        }
    }
    ctx->pc = 0x24F62Cu;
    // 0x24f62c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x24f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24f630: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x24f630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24f634: 0x284001a  div         $zero, $s4, $a0
    ctx->pc = 0x24f634u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24f638: 0x0  nop
    ctx->pc = 0x24f638u;
    // NOP
    // 0x24f63c: 0x0  nop
    ctx->pc = 0x24f63cu;
    // NOP
    // 0x24f640: 0x2010  mfhi        $a0
    ctx->pc = 0x24f640u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24f644: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x24F644u;
    {
        const bool branch_taken_0x24f644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24F648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F644u;
            // 0x24f648: 0x26830001  addiu       $v1, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f644) {
            ctx->pc = 0x24F6ACu;
            goto label_24f6ac;
        }
    }
    ctx->pc = 0x24F64Cu;
    // 0x24f64c: 0xae030440  sw          $v1, 0x440($s0)
    ctx->pc = 0x24f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1088), GPR_U32(ctx, 3));
    // 0x24f650: 0x8e030440  lw          $v1, 0x440($s0)
    ctx->pc = 0x24f650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x24f654: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x24f654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24f658: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x24F658u;
    {
        const bool branch_taken_0x24f658 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F658u;
            // 0x24f65c: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f658) {
            ctx->pc = 0x24F6ACu;
            goto label_24f6ac;
        }
    }
    ctx->pc = 0x24F660u;
    // 0x24f660: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24F660u;
    {
        const bool branch_taken_0x24f660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F660u;
            // 0x24f664: 0xae030440  sw          $v1, 0x440($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f660) {
            ctx->pc = 0x24F6ACu;
            goto label_24f6ac;
        }
    }
    ctx->pc = 0x24F668u;
label_24f668:
    // 0x24f668: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24F668u;
    {
        const bool branch_taken_0x24f668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F668u;
            // 0x24f66c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f668) {
            ctx->pc = 0x24F6ACu;
            goto label_24f6ac;
        }
    }
    ctx->pc = 0x24F670u;
    // 0x24f670: 0x283001a  div         $zero, $s4, $v1
    ctx->pc = 0x24f670u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24f674: 0x0  nop
    ctx->pc = 0x24f674u;
    // NOP
    // 0x24f678: 0x0  nop
    ctx->pc = 0x24f678u;
    // NOP
    // 0x24f67c: 0x1810  mfhi        $v1
    ctx->pc = 0x24f67cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24f680: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x24F680u;
    {
        const bool branch_taken_0x24f680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F680u;
            // 0x24f684: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f680) {
            ctx->pc = 0x24F6ACu;
            goto label_24f6ac;
        }
    }
    ctx->pc = 0x24F688u;
    // 0x24f688: 0xae030440  sw          $v1, 0x440($s0)
    ctx->pc = 0x24f688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1088), GPR_U32(ctx, 3));
    // 0x24f68c: 0x8e030440  lw          $v1, 0x440($s0)
    ctx->pc = 0x24f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x24f690: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24F690u;
    {
        const bool branch_taken_0x24f690 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x24f690) {
            ctx->pc = 0x24F6ACu;
            goto label_24f6ac;
        }
    }
    ctx->pc = 0x24F698u;
    // 0x24f698: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F698u;
    {
        const bool branch_taken_0x24f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F698u;
            // 0x24f69c: 0xae000440  sw          $zero, 0x440($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f698) {
            ctx->pc = 0x24F6ACu;
            goto label_24f6ac;
        }
    }
    ctx->pc = 0x24F6A0u;
label_24f6a0:
    // 0x24f6a0: 0x8e030440  lw          $v1, 0x440($s0)
    ctx->pc = 0x24f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x24f6a4: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x24f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x24f6a8: 0xae030440  sw          $v1, 0x440($s0)
    ctx->pc = 0x24f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1088), GPR_U32(ctx, 3));
label_24f6ac:
    // 0x24f6ac: 0x0  nop
    ctx->pc = 0x24f6acu;
    // NOP
    // 0x24f6b0: 0x8e030440  lw          $v1, 0x440($s0)
    ctx->pc = 0x24f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x24f6b4: 0x0  nop
    ctx->pc = 0x24f6b4u;
    // NOP
    // 0x24f6b8: 0x460fff9  bltz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24F6B8u;
    {
        const bool branch_taken_0x24f6b8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x24f6b8) {
            ctx->pc = 0x24F6A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f6a0;
        }
    }
    ctx->pc = 0x24F6C0u;
    // 0x24f6c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F6C0u;
    {
        const bool branch_taken_0x24f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f6c0) {
            ctx->pc = 0x24F6D4u;
            goto label_24f6d4;
        }
    }
    ctx->pc = 0x24F6C8u;
label_24f6c8:
    // 0x24f6c8: 0x8e030440  lw          $v1, 0x440($s0)
    ctx->pc = 0x24f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x24f6cc: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x24f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x24f6d0: 0xae030440  sw          $v1, 0x440($s0)
    ctx->pc = 0x24f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1088), GPR_U32(ctx, 3));
label_24f6d4:
    // 0x24f6d4: 0x0  nop
    ctx->pc = 0x24f6d4u;
    // NOP
    // 0x24f6d8: 0x8e050440  lw          $a1, 0x440($s0)
    ctx->pc = 0x24f6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x24f6dc: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x24f6dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24f6e0: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24F6E0u;
    {
        const bool branch_taken_0x24f6e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f6e0) {
            ctx->pc = 0x24F6C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f6c8;
        }
    }
    ctx->pc = 0x24F6E8u;
    // 0x24f6e8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x24f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x24f6ec: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x24f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x24f6f0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x24f6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x24f6f4: 0x26040444  addiu       $a0, $s0, 0x444
    ctx->pc = 0x24f6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1092));
    // 0x24f6f8: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x24f6f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24f6fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x24f6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f700: 0x0  nop
    ctx->pc = 0x24f700u;
    // NOP
    // 0x24f704: 0x1010  mfhi        $v0
    ctx->pc = 0x24f704u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x24f708: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x24f708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x24f70c: 0xc08ec58  jal         func_23B160
    ctx->pc = 0x24F70Cu;
    SET_GPR_U32(ctx, 31, 0x24F714u);
    ctx->pc = 0x24F710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F70Cu;
            // 0x24f710: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B160u;
    if (runtime->hasFunction(0x23B160u)) {
        auto targetFn = runtime->lookupFunction(0x23B160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F714u; }
        if (ctx->pc != 0x24F714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCheckLine__FPiii_0x23b160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F714u; }
        if (ctx->pc != 0x24F714u) { return; }
    }
    ctx->pc = 0x24F714u;
label_24f714:
    // 0x24f714: 0x8e020440  lw          $v0, 0x440($s0)
    ctx->pc = 0x24f714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x24f718: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F718u;
    {
        const bool branch_taken_0x24f718 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F718u;
            // 0x24f71c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f718) {
            ctx->pc = 0x24F728u;
            goto label_24f728;
        }
    }
    ctx->pc = 0x24F720u;
    // 0x24f720: 0xc094274  jal         func_2509D0
    ctx->pc = 0x24F720u;
    SET_GPR_U32(ctx, 31, 0x24F728u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F728u; }
        if (ctx->pc != 0x24F728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F728u; }
        if (ctx->pc != 0x24F728u) { return; }
    }
    ctx->pc = 0x24F728u;
label_24f728:
    // 0x24f728: 0x8e050440  lw          $a1, 0x440($s0)
    ctx->pc = 0x24f728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x24f72c: 0xc093cec  jal         func_24F3B0
    ctx->pc = 0x24F72Cu;
    SET_GPR_U32(ctx, 31, 0x24F734u);
    ctx->pc = 0x24F730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F72Cu;
            // 0x24f730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24F3B0u;
    if (runtime->hasFunction(0x24F3B0u)) {
        auto targetFn = runtime->lookupFunction(0x24F3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F734u; }
        if (ctx->pc != 0x24F734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetExistThisPosData__11CItemSelectFi_0x24f3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F734u; }
        if (ctx->pc != 0x24F734u) { return; }
    }
    ctx->pc = 0x24F734u;
label_24f734:
    // 0x24f734: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24f734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f738: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x24f738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x24f73c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x24F73Cu;
    {
        const bool branch_taken_0x24f73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F73Cu;
            // 0x24f740: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f73c) {
            ctx->pc = 0x24F89Cu;
            goto label_24f89c;
        }
    }
    ctx->pc = 0x24F744u;
    // 0x24f744: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F744u;
    {
        const bool branch_taken_0x24f744 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F744u;
            // 0x24f748: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f744) {
            ctx->pc = 0x24F75Cu;
            goto label_24f75c;
        }
    }
    ctx->pc = 0x24F74Cu;
    // 0x24f74c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x24F74Cu;
    SET_GPR_U32(ctx, 31, 0x24F754u);
    ctx->pc = 0x24F750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F74Cu;
            // 0x24f750: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F754u; }
        if (ctx->pc != 0x24F754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F754u; }
        if (ctx->pc != 0x24F754u) { return; }
    }
    ctx->pc = 0x24F754u;
label_24f754:
    // 0x24f754: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x24F754u;
    {
        const bool branch_taken_0x24f754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f754) {
            ctx->pc = 0x24F8DCu;
            goto label_24f8dc;
        }
    }
    ctx->pc = 0x24F75Cu;
label_24f75c:
    // 0x24f75c: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x24f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x24f760: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x24f760u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x24f764: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f768: 0xa6020402  sh          $v0, 0x402($s0)
    ctx->pc = 0x24f768u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f76c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f770: 0xac20d638  sw          $zero, -0x29C8($at)
    ctx->pc = 0x24f770u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 0));
    // 0x24f774: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f778: 0xc094274  jal         func_2509D0
    ctx->pc = 0x24F778u;
    SET_GPR_U32(ctx, 31, 0x24F780u);
    ctx->pc = 0x24F77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F778u;
            // 0x24f77c: 0xac20d63c  sw          $zero, -0x29C4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F780u; }
        if (ctx->pc != 0x24F780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F780u; }
        if (ctx->pc != 0x24F780u) { return; }
    }
    ctx->pc = 0x24F780u;
label_24f780:
    // 0x24f780: 0x83829778  lb          $v0, -0x6888($gp)
    ctx->pc = 0x24f780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940536)));
    // 0x24f784: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f788: 0x14440035  bne         $v0, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x24F788u;
    {
        const bool branch_taken_0x24f788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x24F78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F788u;
            // 0x24f78c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f788) {
            ctx->pc = 0x24F860u;
            goto label_24f860;
        }
    }
    ctx->pc = 0x24F790u;
    // 0x24f790: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x24f790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24f794: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f798: 0xac23d62c  sw          $v1, -0x29D4($at)
    ctx->pc = 0x24f798u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 3));
    // 0x24f79c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x24f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24f7a0: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x24f7a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x24f7a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f7a8: 0xac23d630  sw          $v1, -0x29D0($at)
    ctx->pc = 0x24f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 3));
    // 0x24f7ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f7b0: 0xac20d634  sw          $zero, -0x29CC($at)
    ctx->pc = 0x24f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 0));
    // 0x24f7b4: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x24f7b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24f7b8: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x24F7B8u;
    {
        const bool branch_taken_0x24f7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24F7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F7B8u;
            // 0x24f7bc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7b8) {
            ctx->pc = 0x24F8DCu;
            goto label_24f8dc;
        }
    }
    ctx->pc = 0x24F7C0u;
    // 0x24f7c0: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x24f7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x24f7c4: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F7C4u;
    {
        const bool branch_taken_0x24f7c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F7C4u;
            // 0x24f7c8: 0xac24d634  sw          $a0, -0x29CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7c4) {
            ctx->pc = 0x24F7DCu;
            goto label_24f7dc;
        }
    }
    ctx->pc = 0x24F7CCu;
    // 0x24f7cc: 0x96620038  lhu         $v0, 0x38($s3)
    ctx->pc = 0x24f7ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x24f7d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24f7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24f7d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F7D4u;
    {
        const bool branch_taken_0x24f7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F7D4u;
            // 0x24f7d8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7d4) {
            ctx->pc = 0x24F7E8u;
            goto label_24f7e8;
        }
    }
    ctx->pc = 0x24F7DCu;
label_24f7dc:
    // 0x24f7dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f7e0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x24F7E0u;
    {
        const bool branch_taken_0x24f7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F7E0u;
            // 0x24f7e4: 0xac20d634  sw          $zero, -0x29CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7e0) {
            ctx->pc = 0x24F930u;
            goto label_24f930;
        }
    }
    ctx->pc = 0x24F7E8u;
label_24f7e8:
    // 0x24f7e8: 0x96620018  lhu         $v0, 0x18($s3)
    ctx->pc = 0x24f7e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x24f7ec: 0x8c24d630  lw          $a0, -0x29D0($at)
    ctx->pc = 0x24f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
    // 0x24f7f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f7f4: 0xac22d638  sw          $v0, -0x29C8($at)
    ctx->pc = 0x24f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 2));
    // 0x24f7f8: 0x9662001a  lhu         $v0, 0x1A($s3)
    ctx->pc = 0x24f7f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x24f7fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f800: 0xac22d63c  sw          $v0, -0x29C4($at)
    ctx->pc = 0x24f800u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956604), GPR_U32(ctx, 2));
    // 0x24f804: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f808: 0xc065718  jal         func_195C60
    ctx->pc = 0x24F808u;
    SET_GPR_U32(ctx, 31, 0x24F810u);
    ctx->pc = 0x24F80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F808u;
            // 0x24f80c: 0xac20d640  sw          $zero, -0x29C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C60u;
    if (runtime->hasFunction(0x195C60u)) {
        auto targetFn = runtime->lookupFunction(0x195C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F810u; }
        if (ctx->pc != 0x24F810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBreedFishInfoData__Fi_0x195c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F810u; }
        if (ctx->pc != 0x24F810u) { return; }
    }
    ctx->pc = 0x24F810u;
label_24f810:
    // 0x24f810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F810u;
    {
        const bool branch_taken_0x24f810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f810) {
            ctx->pc = 0x24F828u;
            goto label_24f828;
        }
    }
    ctx->pc = 0x24F818u;
    // 0x24f818: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24F818u;
    SET_GPR_U32(ctx, 31, 0x24F820u);
    ctx->pc = 0x24F81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F818u;
            // 0x24f81c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F820u; }
        if (ctx->pc != 0x24F820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F820u; }
        if (ctx->pc != 0x24F820u) { return; }
    }
    ctx->pc = 0x24F820u;
label_24f820:
    // 0x24f820: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f824: 0xac22d640  sw          $v0, -0x29C0($at)
    ctx->pc = 0x24f824u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956608), GPR_U32(ctx, 2));
label_24f828:
    // 0x24f828: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x24F828u;
    SET_GPR_U32(ctx, 31, 0x24F830u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F830u; }
        if (ctx->pc != 0x24F830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F830u; }
        if (ctx->pc != 0x24F830u) { return; }
    }
    ctx->pc = 0x24F830u;
label_24f830:
    // 0x24f830: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x24f830u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x24f834: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x24f834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x24f838: 0x96660018  lhu         $a2, 0x18($s3)
    ctx->pc = 0x24f838u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x24f83c: 0x342151e8  ori         $at, $at, 0x51E8
    ctx->pc = 0x24f83cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20968);
    // 0x24f840: 0x9667001a  lhu         $a3, 0x1A($s3)
    ctx->pc = 0x24f840u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x24f844: 0xc066bd4  jal         func_19AF50
    ctx->pc = 0x24F844u;
    SET_GPR_U32(ctx, 31, 0x24F84Cu);
    ctx->pc = 0x24F848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F844u;
            // 0x24f848: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AF50u;
    if (runtime->hasFunction(0x19AF50u)) {
        auto targetFn = runtime->lookupFunction(0x19AF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F84Cu; }
        if (ctx->pc != 0x24F84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryFish__18CFishingTournamentFiii_0x19af50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F84Cu; }
        if (ctx->pc != 0x24F84Cu) { return; }
    }
    ctx->pc = 0x24F84Cu;
label_24f84c:
    // 0x24f84c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f850: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x24F850u;
    SET_GPR_U32(ctx, 31, 0x24F858u);
    ctx->pc = 0x24F854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F850u;
            // 0x24f854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F858u; }
        if (ctx->pc != 0x24F858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F858u; }
        if (ctx->pc != 0x24F858u) { return; }
    }
    ctx->pc = 0x24F858u;
label_24f858:
    // 0x24f858: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24F858u;
    {
        const bool branch_taken_0x24f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f858) {
            ctx->pc = 0x24F8DCu;
            goto label_24f8dc;
        }
    }
    ctx->pc = 0x24F860u;
label_24f860:
    // 0x24f860: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f864: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x24f864u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
    // 0x24f868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f86c: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x24f86cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x24f870: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24f874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f878: 0xc0943e4  jal         func_250F90
    ctx->pc = 0x24F878u;
    SET_GPR_U32(ctx, 31, 0x24F880u);
    ctx->pc = 0x24F87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F878u;
            // 0x24f87c: 0xac22d630  sw          $v0, -0x29D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250F90u;
    if (runtime->hasFunction(0x250F90u)) {
        auto targetFn = runtime->lookupFunction(0x250F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F880u; }
        if (ctx->pc != 0x24F880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSameAdrressUserData__FP13CGameDataUsedi_0x250f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F880u; }
        if (ctx->pc != 0x24F880u) { return; }
    }
    ctx->pc = 0x24F880u;
label_24f880:
    // 0x24f880: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f888: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x24f888u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
    // 0x24f88c: 0xc093cfc  jal         func_24F3F0
    ctx->pc = 0x24F88Cu;
    SET_GPR_U32(ctx, 31, 0x24F894u);
    ctx->pc = 0x24F890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F88Cu;
            // 0x24f890: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24F3F0u;
    if (runtime->hasFunction(0x24F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x24F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F894u; }
        if (ctx->pc != 0x24F894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckUse__11CItemSelectFP13CGameDataUsed_0x24f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F894u; }
        if (ctx->pc != 0x24F894u) { return; }
    }
    ctx->pc = 0x24F894u;
label_24f894:
    // 0x24f894: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24F894u;
    {
        const bool branch_taken_0x24f894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f894) {
            ctx->pc = 0x24F8DCu;
            goto label_24f8dc;
        }
    }
    ctx->pc = 0x24F89Cu;
label_24f89c:
    // 0x24f89c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24F89Cu;
    {
        const bool branch_taken_0x24f89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F89Cu;
            // 0x24f8a0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f89c) {
            ctx->pc = 0x24F8DCu;
            goto label_24f8dc;
        }
    }
    ctx->pc = 0x24F8A4u;
    // 0x24f8a4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x24F8A4u;
    SET_GPR_U32(ctx, 31, 0x24F8ACu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F8ACu; }
        if (ctx->pc != 0x24F8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F8ACu; }
        if (ctx->pc != 0x24F8ACu) { return; }
    }
    ctx->pc = 0x24F8ACu;
label_24f8ac:
    // 0x24f8ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f8b0: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x24f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x24f8b4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x24f8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x24f8b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f8bc: 0xa6020402  sh          $v0, 0x402($s0)
    ctx->pc = 0x24f8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f8c0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x24f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24f8c4: 0xac23d62c  sw          $v1, -0x29D4($at)
    ctx->pc = 0x24f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 3));
    // 0x24f8c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f8cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f8d0: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x24f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
    // 0x24f8d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f8d8: 0xac20d630  sw          $zero, -0x29D0($at)
    ctx->pc = 0x24f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 0));
label_24f8dc:
    // 0x24f8dc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x24F8DCu;
    {
        const bool branch_taken_0x24f8dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F8DCu;
            // 0x24f8e0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8dc) {
            ctx->pc = 0x24F8F8u;
            goto label_24f8f8;
        }
    }
    ctx->pc = 0x24F8E4u;
    // 0x24f8e4: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x24f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x24f8e8: 0xc0877f0  jal         func_21DFC0
    ctx->pc = 0x24F8E8u;
    SET_GPR_U32(ctx, 31, 0x24F8F0u);
    ctx->pc = 0x24F8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F8E8u;
            // 0x24f8ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DFC0u;
    if (runtime->hasFunction(0x21DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F8F0u; }
        if (ctx->pc != 0x24F8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFP13CGameDataUsed_0x21dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F8F0u; }
        if (ctx->pc != 0x24F8F0u) { return; }
    }
    ctx->pc = 0x24F8F0u;
label_24f8f0:
    // 0x24f8f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24F8F0u;
    {
        const bool branch_taken_0x24f8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F8F0u;
            // 0x24f8f4: 0x86050402  lh          $a1, 0x402($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1026)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8f0) {
            ctx->pc = 0x24F934u;
            goto label_24f934;
        }
    }
    ctx->pc = 0x24F8F8u;
label_24f8f8:
    // 0x24f8f8: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x24f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x24f8fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F8FCu;
    {
        const bool branch_taken_0x24f8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F8FCu;
            // 0x24f900: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8fc) {
            ctx->pc = 0x24F920u;
            goto label_24f920;
        }
    }
    ctx->pc = 0x24F904u;
    // 0x24f904: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f908: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24f908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24f90c: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x24f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x24f910: 0xc0877e4  jal         func_21DF90
    ctx->pc = 0x24F910u;
    SET_GPR_U32(ctx, 31, 0x24F918u);
    ctx->pc = 0x24F914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F910u;
            // 0x24f914: 0x24a5b1c8  addiu       $a1, $a1, -0x4E38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF90u;
    if (runtime->hasFunction(0x21DF90u)) {
        auto targetFn = runtime->lookupFunction(0x21DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F918u; }
        if (ctx->pc != 0x24F918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFPc_0x21df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F918u; }
        if (ctx->pc != 0x24F918u) { return; }
    }
    ctx->pc = 0x24F918u;
label_24f918:
    // 0x24f918: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24F918u;
    {
        const bool branch_taken_0x24f918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f918) {
            ctx->pc = 0x24F930u;
            goto label_24f930;
        }
    }
    ctx->pc = 0x24F920u;
label_24f920:
    // 0x24f920: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24f920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24f924: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x24f924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x24f928: 0xc0877e4  jal         func_21DF90
    ctx->pc = 0x24F928u;
    SET_GPR_U32(ctx, 31, 0x24F930u);
    ctx->pc = 0x24F92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F928u;
            // 0x24f92c: 0x24a5bbd0  addiu       $a1, $a1, -0x4430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF90u;
    if (runtime->hasFunction(0x21DF90u)) {
        auto targetFn = runtime->lookupFunction(0x21DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F930u; }
        if (ctx->pc != 0x24F930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFPc_0x21df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F930u; }
        if (ctx->pc != 0x24F930u) { return; }
    }
    ctx->pc = 0x24F930u;
label_24f930:
    // 0x24f930: 0x86050402  lh          $a1, 0x402($s0)
    ctx->pc = 0x24f930u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1026)));
label_24f934:
    // 0x24f934: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24F934u;
    {
        const bool branch_taken_0x24f934 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x24F938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F934u;
            // 0x24f938: 0x26040404  addiu       $a0, $s0, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f934) {
            ctx->pc = 0x24F950u;
            goto label_24f950;
        }
    }
    ctx->pc = 0x24F93Cu;
    // 0x24f93c: 0x26040404  addiu       $a0, $s0, 0x404
    ctx->pc = 0x24f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1028));
    // 0x24f940: 0xc094558  jal         func_251560
    ctx->pc = 0x24F940u;
    SET_GPR_U32(ctx, 31, 0x24F948u);
    ctx->pc = 0x24F944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F940u;
            // 0x24f944: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F948u; }
        if (ctx->pc != 0x24F948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F948u; }
        if (ctx->pc != 0x24F948u) { return; }
    }
    ctx->pc = 0x24F948u;
label_24f948:
    // 0x24f948: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F948u;
    {
        const bool branch_taken_0x24f948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F948u;
            // 0x24f94c: 0x26040408  addiu       $a0, $s0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f948) {
            ctx->pc = 0x24F95Cu;
            goto label_24f95c;
        }
    }
    ctx->pc = 0x24F950u;
label_24f950:
    // 0x24f950: 0xc094558  jal         func_251560
    ctx->pc = 0x24F950u;
    SET_GPR_U32(ctx, 31, 0x24F958u);
    ctx->pc = 0x24F954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F950u;
            // 0x24f954: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F958u; }
        if (ctx->pc != 0x24F958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F958u; }
        if (ctx->pc != 0x24F958u) { return; }
    }
    ctx->pc = 0x24F958u;
label_24f958:
    // 0x24f958: 0x26040408  addiu       $a0, $s0, 0x408
    ctx->pc = 0x24f958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1032));
label_24f95c:
    // 0x24f95c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x24f95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24f960: 0xc094558  jal         func_251560
    ctx->pc = 0x24F960u;
    SET_GPR_U32(ctx, 31, 0x24F968u);
    ctx->pc = 0x24F964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F960u;
            // 0x24f964: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F968u; }
        if (ctx->pc != 0x24F968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F968u; }
        if (ctx->pc != 0x24F968u) { return; }
    }
    ctx->pc = 0x24F968u;
label_24f968:
    // 0x24f968: 0xc0893d0  jal         func_224F40
    ctx->pc = 0x24F968u;
    SET_GPR_U32(ctx, 31, 0x24F970u);
    ctx->pc = 0x224F40u;
    if (runtime->hasFunction(0x224F40u)) {
        auto targetFn = runtime->lookupFunction(0x224F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F970u; }
        if (ctx->pc != 0x24F970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuWakuStep__Fv_0x224f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F970u; }
        if (ctx->pc != 0x24F970u) { return; }
    }
    ctx->pc = 0x24F970u;
label_24f970:
    // 0x24f970: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24f970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f974: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24f974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24f978: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24f978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24f97c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24f97cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24f980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24f984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f98c: 0x3e00008  jr          $ra
    ctx->pc = 0x24F98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F98Cu;
            // 0x24f990: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24F994u;
}
