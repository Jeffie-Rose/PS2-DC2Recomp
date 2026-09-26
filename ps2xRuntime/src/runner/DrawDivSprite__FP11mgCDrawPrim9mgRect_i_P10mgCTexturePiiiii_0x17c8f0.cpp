#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDivSprite__FP11mgCDrawPrim9mgRect<i>P10mgCTexturePiiiii
// Address: 0x17c8f0 - 0x17cb20
void DrawDivSprite__FP11mgCDrawPrim9mgRect_i_P10mgCTexturePiiiii_0x17c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDivSprite__FP11mgCDrawPrim9mgRect_i_P10mgCTexturePiiiii_0x17c8f0");
#endif

    switch (ctx->pc) {
        case 0x17c96cu: goto label_17c96c;
        case 0x17c978u: goto label_17c978;
        case 0x17c984u: goto label_17c984;
        case 0x17c99cu: goto label_17c99c;
        case 0x17c9a4u: goto label_17c9a4;
        case 0x17c9bcu: goto label_17c9bc;
        case 0x17c9f0u: goto label_17c9f0;
        case 0x17ca14u: goto label_17ca14;
        case 0x17ca94u: goto label_17ca94;
        case 0x17cae8u: goto label_17cae8;
        case 0x17caf0u: goto label_17caf0;
        default: break;
    }

    ctx->pc = 0x17c8f0u;

    // 0x17c8f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x17c8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x17c8f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17c8f8: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x17c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17c8fc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17c8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17c900: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17c900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17c904: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17c904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17c908: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x17c908u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c90c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17c90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17c910: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17c910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17c914: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17c914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17c918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17c91c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17c91cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c924: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x17c924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c92c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17c92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c930: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x17c930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c934: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x17c934u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x17c938: 0x8f858798  lw          $a1, -0x7868($gp)
    ctx->pc = 0x17c938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x17c93c: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x17c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x17c940: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x17c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x17c944: 0x8fb600b8  lw          $s6, 0xB8($sp)
    ctx->pc = 0x17c944u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x17c948: 0x8fbe00b4  lw          $fp, 0xB4($sp)
    ctx->pc = 0x17c948u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x17c94c: 0x8fb000bc  lw          $s0, 0xBC($sp)
    ctx->pc = 0x17c94cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17c950: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x17c950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17c954: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17c954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17c958: 0x105a821  addu        $s5, $t0, $a1
    ctx->pc = 0x17c958u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17c95c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c960: 0x123a021  addu        $s4, $t1, $v1
    ctx->pc = 0x17c960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x17c964: 0xc04d1b4  jal         func_1346D0
    ctx->pc = 0x17C964u;
    SET_GPR_U32(ctx, 31, 0x17C96Cu);
    ctx->pc = 0x17C968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C964u;
            // 0x17c968: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1346D0u;
    if (runtime->hasFunction(0x1346D0u)) {
        auto targetFn = runtime->lookupFunction(0x1346D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C96Cu; }
        if (ctx->pc != 0x17C96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin2__11mgCDrawPrimFv_0x1346d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C96Cu; }
        if (ctx->pc != 0x17C96Cu) { return; }
    }
    ctx->pc = 0x17C96Cu;
label_17c96c:
    // 0x17c96c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17c96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c970: 0xc04d218  jal         func_134860
    ctx->pc = 0x17C970u;
    SET_GPR_U32(ctx, 31, 0x17C978u);
    ctx->pc = 0x17C974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C970u;
            // 0x17c974: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134860u;
    if (runtime->hasFunction(0x134860u)) {
        auto targetFn = runtime->lookupFunction(0x134860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C978u; }
        if (ctx->pc != 0x17C978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFi_0x134860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C978u; }
        if (ctx->pc != 0x17C978u) { return; }
    }
    ctx->pc = 0x17C978u;
label_17c978:
    // 0x17c978: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17c978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c97c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x17C97Cu;
    SET_GPR_U32(ctx, 31, 0x17C984u);
    ctx->pc = 0x17C980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C97Cu;
            // 0x17c980: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C984u; }
        if (ctx->pc != 0x17C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C984u; }
        if (ctx->pc != 0x17C984u) { return; }
    }
    ctx->pc = 0x17C984u;
label_17c984:
    // 0x17c984: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x17c984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17c988: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x17c988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17c98c: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x17c98cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c990: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x17c990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17c994: 0xc04d320  jal         func_134C80
    ctx->pc = 0x17C994u;
    SET_GPR_U32(ctx, 31, 0x17C99Cu);
    ctx->pc = 0x17C998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C994u;
            // 0x17c998: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C99Cu; }
        if (ctx->pc != 0x17C99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C99Cu; }
        if (ctx->pc != 0x17C99Cu) { return; }
    }
    ctx->pc = 0x17C99Cu;
label_17c99c:
    // 0x17c99c: 0xc04d250  jal         func_134940
    ctx->pc = 0x17C99Cu;
    SET_GPR_U32(ctx, 31, 0x17C9A4u);
    ctx->pc = 0x17C9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C99Cu;
            // 0x17c9a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C9A4u; }
        if (ctx->pc != 0x17C9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C9A4u; }
        if (ctx->pc != 0x17C9A4u) { return; }
    }
    ctx->pc = 0x17C9A4u;
label_17c9a4:
    // 0x17c9a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17c9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17c9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17c9ac: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x17c9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x17c9b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17c9b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9b4: 0xc04d224  jal         func_134890
    ctx->pc = 0x17C9B4u;
    SET_GPR_U32(ctx, 31, 0x17C9BCu);
    ctx->pc = 0x17C9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C9B4u;
            // 0x17c9b8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134890u;
    if (runtime->hasFunction(0x134890u)) {
        auto targetFn = runtime->lookupFunction(0x134890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C9BCu; }
        if (ctx->pc != 0x17C9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFiUiUii_0x134890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C9BCu; }
        if (ctx->pc != 0x17C9BCu) { return; }
    }
    ctx->pc = 0x17C9BCu;
label_17c9bc:
    // 0x17c9bc: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x17c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17c9c0: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x17c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17c9c4: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x17c9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x17c9c8: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x17c9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x17c9cc: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x17c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17c9d0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x17c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17c9d4: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x17c9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x17c9d8: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x17c9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x17c9dc: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x17c9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17c9e0: 0xafb200d8  sw          $s2, 0xD8($sp)
    ctx->pc = 0x17c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 18));
    // 0x17c9e4: 0x236082a  slt         $at, $s1, $s6
    ctx->pc = 0x17c9e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x17c9e8: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x17C9E8u;
    {
        const bool branch_taken_0x17c9e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C9E8u;
            // 0x17c9ec: 0xafb200c8  sw          $s2, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9e8) {
            ctx->pc = 0x17CADCu;
            goto label_17cadc;
        }
    }
    ctx->pc = 0x17C9F0u;
label_17c9f0:
    // 0x17c9f0: 0x26320200  addiu       $s2, $s1, 0x200
    ctx->pc = 0x17c9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x17c9f4: 0x2d2082a  slt         $at, $s6, $s2
    ctx->pc = 0x17c9f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x17c9f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C9F8u;
    {
        const bool branch_taken_0x17c9f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c9f8) {
            ctx->pc = 0x17CA04u;
            goto label_17ca04;
        }
    }
    ctx->pc = 0x17CA00u;
    // 0x17ca00: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x17ca00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17ca04:
    // 0x17ca04: 0x0  nop
    ctx->pc = 0x17ca04u;
    // NOP
    // 0x17ca08: 0x3d0082a  slt         $at, $fp, $s0
    ctx->pc = 0x17ca08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x17ca0c: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x17CA0Cu;
    {
        const bool branch_taken_0x17ca0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CA0Cu;
            // 0x17ca10: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca0c) {
            ctx->pc = 0x17CAD0u;
            goto label_17cad0;
        }
    }
    ctx->pc = 0x17CA14u;
label_17ca14:
    // 0x17ca14: 0x0  nop
    ctx->pc = 0x17ca14u;
    // NOP
    // 0x17ca18: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17ca1c: 0x1029821  addu        $s3, $t0, $v0
    ctx->pc = 0x17ca1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17ca20: 0x213082a  slt         $at, $s0, $s3
    ctx->pc = 0x17ca20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x17ca24: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CA24u;
    {
        const bool branch_taken_0x17ca24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ca24) {
            ctx->pc = 0x17CA30u;
            goto label_17ca30;
        }
    }
    ctx->pc = 0x17CA2Cu;
    // 0x17ca2c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x17ca2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ca30:
    // 0x17ca30: 0xafb100c0  sw          $s1, 0xC0($sp)
    ctx->pc = 0x17ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 17));
    // 0x17ca34: 0xafb100e0  sw          $s1, 0xE0($sp)
    ctx->pc = 0x17ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 17));
    // 0x17ca38: 0x27a300c4  addiu       $v1, $sp, 0xC4
    ctx->pc = 0x17ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x17ca3c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x17ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x17ca40: 0x27a600d4  addiu       $a2, $sp, 0xD4
    ctx->pc = 0x17ca40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x17ca44: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ca48: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17ca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca4c: 0xafa800e4  sw          $t0, 0xE4($sp)
    ctx->pc = 0x17ca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 8));
    // 0x17ca50: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17ca54: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x17ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17ca58: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x17ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x17ca5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ca60: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x17ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17ca64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17ca68: 0xafb200d0  sw          $s2, 0xD0($sp)
    ctx->pc = 0x17ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 18));
    // 0x17ca6c: 0xafb200f0  sw          $s2, 0xF0($sp)
    ctx->pc = 0x17ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 18));
    // 0x17ca70: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x17ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
    // 0x17ca74: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17ca78: 0xafb300f4  sw          $s3, 0xF4($sp)
    ctx->pc = 0x17ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 19));
    // 0x17ca7c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x17ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17ca80: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x17ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x17ca84: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17ca88: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x17ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17ca8c: 0xc04d2c0  jal         func_134B00
    ctx->pc = 0x17CA8Cu;
    SET_GPR_U32(ctx, 31, 0x17CA94u);
    ctx->pc = 0x17CA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CA8Cu;
            // 0x17ca90: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B00u;
    if (runtime->hasFunction(0x134B00u)) {
        auto targetFn = runtime->lookupFunction(0x134B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CA94u; }
        if (ctx->pc != 0x17CA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DirectData__11mgCDrawPrimFi_0x134b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CA94u; }
        if (ctx->pc != 0x17CA94u) { return; }
    }
    ctx->pc = 0x17CA94u;
label_17ca94:
    // 0x17ca94: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x17ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17ca98: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x17ca98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17ca9c: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x17ca9cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17caa0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x17caa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17caa4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17caa8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x17caa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17caac: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x17caacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x17cab0: 0x270182a  slt         $v1, $s3, $s0
    ctx->pc = 0x17cab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x17cab4: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x17cab4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17cab8: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x17cab8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x17cabc: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x17cabcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17cac0: 0x7c450020  sq          $a1, 0x20($v0)
    ctx->pc = 0x17cac0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 5));
    // 0x17cac4: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x17cac4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cac8: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x17CAC8u;
    {
        const bool branch_taken_0x17cac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CAC8u;
            // 0x17cacc: 0x7c440030  sq          $a0, 0x30($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cac8) {
            ctx->pc = 0x17CA14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17ca14;
        }
    }
    ctx->pc = 0x17CAD0u;
label_17cad0:
    // 0x17cad0: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x17cad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x17cad4: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x17CAD4u;
    {
        const bool branch_taken_0x17cad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CAD4u;
            // 0x17cad8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cad4) {
            ctx->pc = 0x17C9F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c9f0;
        }
    }
    ctx->pc = 0x17CADCu;
label_17cadc:
    // 0x17cadc: 0x0  nop
    ctx->pc = 0x17cadcu;
    // NOP
    // 0x17cae0: 0xc04d250  jal         func_134940
    ctx->pc = 0x17CAE0u;
    SET_GPR_U32(ctx, 31, 0x17CAE8u);
    ctx->pc = 0x17CAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CAE0u;
            // 0x17cae4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CAE8u; }
        if (ctx->pc != 0x17CAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CAE8u; }
        if (ctx->pc != 0x17CAE8u) { return; }
    }
    ctx->pc = 0x17CAE8u;
label_17cae8:
    // 0x17cae8: 0xc04d288  jal         func_134A20
    ctx->pc = 0x17CAE8u;
    SET_GPR_U32(ctx, 31, 0x17CAF0u);
    ctx->pc = 0x17CAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CAE8u;
            // 0x17caec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A20u;
    if (runtime->hasFunction(0x134A20u)) {
        auto targetFn = runtime->lookupFunction(0x134A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CAF0u; }
        if (ctx->pc != 0x17CAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End2__11mgCDrawPrimFv_0x134a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CAF0u; }
        if (ctx->pc != 0x17CAF0u) { return; }
    }
    ctx->pc = 0x17CAF0u;
label_17caf0:
    // 0x17caf0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17caf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17caf4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17caf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17caf8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17caf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17cafc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17cafcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17cb00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17cb00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17cb04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17cb04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cb08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17cb08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cb0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17cb0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cb10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17cb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17cb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cb18: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CB18u;
            // 0x17cb1c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CB20u;
}
