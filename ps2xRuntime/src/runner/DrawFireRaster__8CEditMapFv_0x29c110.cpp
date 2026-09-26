#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFireRaster__8CEditMapFv
// Address: 0x29c110 - 0x29c1c0
void DrawFireRaster__8CEditMapFv_0x29c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFireRaster__8CEditMapFv_0x29c110");
#endif

    switch (ctx->pc) {
        case 0x29c12cu: goto label_29c12c;
        case 0x29c13cu: goto label_29c13c;
        case 0x29c144u: goto label_29c144;
        case 0x29c150u: goto label_29c150;
        case 0x29c178u: goto label_29c178;
        case 0x29c18cu: goto label_29c18c;
        default: break;
    }

    ctx->pc = 0x29c110u;

    // 0x29c110: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x29c114: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29c118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29c11c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29c120: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29c120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c124: 0xc0579c8  jal         func_15E720
    ctx->pc = 0x29C124u;
    SET_GPR_U32(ctx, 31, 0x29C12Cu);
    ctx->pc = 0x29C128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C124u;
            // 0x29c128: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E720u;
    if (runtime->hasFunction(0x15E720u)) {
        auto targetFn = runtime->lookupFunction(0x15E720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C12Cu; }
        if (ctx->pc != 0x29C12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFireRaster__4CMapFv_0x15e720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C12Cu; }
        if (ctx->pc != 0x29C12Cu) { return; }
    }
    ctx->pc = 0x29C12Cu;
label_29c12c:
    // 0x29c12c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29c12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c130: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x29c130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x29c134: 0xc0575cc  jal         func_15D730
    ctx->pc = 0x29C134u;
    SET_GPR_U32(ctx, 31, 0x29C13Cu);
    ctx->pc = 0x29C138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C134u;
            // 0x29c138: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C13Cu; }
        if (ctx->pc != 0x29C13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C13Cu; }
        if (ctx->pc != 0x29C13Cu) { return; }
    }
    ctx->pc = 0x29C13Cu;
label_29c13c:
    // 0x29c13c: 0xc04c050  jal         func_130140
    ctx->pc = 0x29C13Cu;
    SET_GPR_U32(ctx, 31, 0x29C144u);
    ctx->pc = 0x29C140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C13Cu;
            // 0x29c140: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C144u; }
        if (ctx->pc != 0x29C144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C144u; }
        if (ctx->pc != 0x29C144u) { return; }
    }
    ctx->pc = 0x29C144u;
label_29c144:
    // 0x29c144: 0x8e500d44  lw          $s0, 0xD44($s2)
    ctx->pc = 0x29c144u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3396)));
    // 0x29c148: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x29C148u;
    {
        const bool branch_taken_0x29c148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C148u;
            // 0x29c14c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c148) {
            ctx->pc = 0x29C198u;
            goto label_29c198;
        }
    }
    ctx->pc = 0x29C150u;
label_29c150:
    // 0x29c150: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x29c150u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x29c154: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x29c154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x29c158: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x29c158u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29c15c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x29C15Cu;
    {
        const bool branch_taken_0x29c15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c15c) {
            ctx->pc = 0x29C18Cu;
            goto label_29c18c;
        }
    }
    ctx->pc = 0x29C164u;
    // 0x29c164: 0x8e030310  lw          $v1, 0x310($s0)
    ctx->pc = 0x29c164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x29c168: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C168u;
    {
        const bool branch_taken_0x29c168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C168u;
            // 0x29c16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c168) {
            ctx->pc = 0x29C18Cu;
            goto label_29c18c;
        }
    }
    ctx->pc = 0x29C170u;
    // 0x29c170: 0xc059cc0  jal         func_167300
    ctx->pc = 0x29C170u;
    SET_GPR_U32(ctx, 31, 0x29C178u);
    ctx->pc = 0x29C174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C170u;
            // 0x29c174: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C178u; }
        if (ctx->pc != 0x29C178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C178u; }
        if (ctx->pc != 0x29C178u) { return; }
    }
    ctx->pc = 0x29C178u;
label_29c178:
    // 0x29c178: 0x8e470cfc  lw          $a3, 0xCFC($s2)
    ctx->pc = 0x29c178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3324)));
    // 0x29c17c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29c180: 0x260502b0  addiu       $a1, $s0, 0x2B0
    ctx->pc = 0x29c180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x29c184: 0xc0a7a9c  jal         func_29EA70
    ctx->pc = 0x29C184u;
    SET_GPR_U32(ctx, 31, 0x29C18Cu);
    ctx->pc = 0x29C188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C184u;
            // 0x29c188: 0x27a60088  addiu       $a2, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA70u;
    if (runtime->hasFunction(0x29EA70u)) {
        auto targetFn = runtime->lookupFunction(0x29EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C18Cu; }
        if (ctx->pc != 0x29C18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFireRaster__FPA4_fP14CFuncPointMngrP15CFuncPointCheckP11CFireRaster_0x29ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C18Cu; }
        if (ctx->pc != 0x29C18Cu) { return; }
    }
    ctx->pc = 0x29C18Cu;
label_29c18c:
    // 0x29c18c: 0x0  nop
    ctx->pc = 0x29c18cu;
    // NOP
    // 0x29c190: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29c190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29c194: 0x26100330  addiu       $s0, $s0, 0x330
    ctx->pc = 0x29c194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_29c198:
    // 0x29c198: 0x8e430d40  lw          $v1, 0xD40($s2)
    ctx->pc = 0x29c198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3392)));
    // 0x29c19c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x29c19cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29c1a0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x29C1A0u;
    {
        const bool branch_taken_0x29c1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c1a0) {
            ctx->pc = 0x29C150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c150;
        }
    }
    ctx->pc = 0x29C1A8u;
    // 0x29c1a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29c1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c1ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c1acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c1b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c1b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c1b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x29C1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1B8u;
            // 0x29c1bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C1C0u;
}
