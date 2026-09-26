#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMenuScissor__F9mgRect<i>
// Address: 0x220140 - 0x2201c0
void SetMenuScissor__F9mgRect_i__0x220140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMenuScissor__F9mgRect_i__0x220140");
#endif

    switch (ctx->pc) {
        case 0x22015cu: goto label_22015c;
        case 0x22016cu: goto label_22016c;
        case 0x220178u: goto label_220178;
        case 0x2201acu: goto label_2201ac;
        case 0x2201b4u: goto label_2201b4;
        default: break;
    }

    ctx->pc = 0x220140u;

    // 0x220140: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x220140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x220144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220148: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x220148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22014c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x22014cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x220150: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x220150u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x220154: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x220154u;
    SET_GPR_U32(ctx, 31, 0x22015Cu);
    ctx->pc = 0x220158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220154u;
            // 0x220158: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22015Cu; }
        if (ctx->pc != 0x22015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22015Cu; }
        if (ctx->pc != 0x22015Cu) { return; }
    }
    ctx->pc = 0x22015Cu;
label_22015c:
    // 0x22015c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x220160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x220160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220164: 0xc04d104  jal         func_134410
    ctx->pc = 0x220164u;
    SET_GPR_U32(ctx, 31, 0x22016Cu);
    ctx->pc = 0x220168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220164u;
            // 0x220168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22016Cu; }
        if (ctx->pc != 0x22016Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22016Cu; }
        if (ctx->pc != 0x22016Cu) { return; }
    }
    ctx->pc = 0x22016Cu;
label_22016c:
    // 0x22016c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x220170: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x220170u;
    SET_GPR_U32(ctx, 31, 0x220178u);
    ctx->pc = 0x220174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220170u;
            // 0x220174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220178u; }
        if (ctx->pc != 0x220178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220178u; }
        if (ctx->pc != 0x220178u) { return; }
    }
    ctx->pc = 0x220178u;
label_220178:
    // 0x220178: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x220178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22017c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22017cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x220180: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x220180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x220184: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x220184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x220188: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x220188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x22018c: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x22018cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220190: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x220190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x220194: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x220194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x220198: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x220198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22019c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x22019cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2201a0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2201a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2201a4: 0xc04d360  jal         func_134D80
    ctx->pc = 0x2201A4u;
    SET_GPR_U32(ctx, 31, 0x2201ACu);
    ctx->pc = 0x2201A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2201A4u;
            // 0x2201a8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201ACu; }
        if (ctx->pc != 0x2201ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201ACu; }
        if (ctx->pc != 0x2201ACu) { return; }
    }
    ctx->pc = 0x2201ACu;
label_2201ac:
    // 0x2201ac: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2201ACu;
    SET_GPR_U32(ctx, 31, 0x2201B4u);
    ctx->pc = 0x2201B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2201ACu;
            // 0x2201b0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201B4u; }
        if (ctx->pc != 0x2201B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2201B4u; }
        if (ctx->pc != 0x2201B4u) { return; }
    }
    ctx->pc = 0x2201B4u;
label_2201b4:
    // 0x2201b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2201b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2201b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2201B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2201BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2201B8u;
            // 0x2201bc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2201C0u;
}
