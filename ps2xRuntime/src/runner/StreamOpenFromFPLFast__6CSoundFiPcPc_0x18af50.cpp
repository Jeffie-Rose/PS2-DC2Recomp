#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StreamOpenFromFPLFast__6CSoundFiPcPc
// Address: 0x18af50 - 0x18afbc
void StreamOpenFromFPLFast__6CSoundFiPcPc_0x18af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StreamOpenFromFPLFast__6CSoundFiPcPc_0x18af50");
#endif

    switch (ctx->pc) {
        case 0x18af74u: goto label_18af74;
        case 0x18af80u: goto label_18af80;
        case 0x18af8cu: goto label_18af8c;
        case 0x18af98u: goto label_18af98;
        default: break;
    }

    ctx->pc = 0x18af50u;

    // 0x18af50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18af50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18af54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18af54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18af58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18af58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18af5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18af5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18af60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18af60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18af64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18af64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af68: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x18af68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af6c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x18AF6Cu;
    SET_GPR_U32(ctx, 31, 0x18AF74u);
    ctx->pc = 0x18AF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF6Cu;
            // 0x18af70: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF74u; }
        if (ctx->pc != 0x18AF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF74u; }
        if (ctx->pc != 0x18AF74u) { return; }
    }
    ctx->pc = 0x18AF74u;
label_18af74:
    // 0x18af74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18af74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af78: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x18AF78u;
    SET_GPR_U32(ctx, 31, 0x18AF80u);
    ctx->pc = 0x18AF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF78u;
            // 0x18af7c: 0x27a40064  addiu       $a0, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF80u; }
        if (ctx->pc != 0x18AF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF80u; }
        if (ctx->pc != 0x18AF80u) { return; }
    }
    ctx->pc = 0x18AF80u;
label_18af80:
    // 0x18af80: 0x36240080  ori         $a0, $s1, 0x80
    ctx->pc = 0x18af80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)128);
    // 0x18af84: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18AF84u;
    SET_GPR_U32(ctx, 31, 0x18AF8Cu);
    ctx->pc = 0x18AF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF84u;
            // 0x18af88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF8Cu; }
        if (ctx->pc != 0x18AF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF8Cu; }
        if (ctx->pc != 0x18AF8Cu) { return; }
    }
    ctx->pc = 0x18AF8Cu;
label_18af8c:
    // 0x18af8c: 0x362480f0  ori         $a0, $s1, 0x80F0
    ctx->pc = 0x18af8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)33008);
    // 0x18af90: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18AF90u;
    SET_GPR_U32(ctx, 31, 0x18AF98u);
    ctx->pc = 0x18AF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF90u;
            // 0x18af94: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF98u; }
        if (ctx->pc != 0x18AF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF98u; }
        if (ctx->pc != 0x18AF98u) { return; }
    }
    ctx->pc = 0x18AF98u;
label_18af98:
    // 0x18af98: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x18af98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x18af9c: 0x27838a78  addiu       $v1, $gp, -0x7588
    ctx->pc = 0x18af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937208));
    // 0x18afa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18afa4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18afa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18afa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18afac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18afacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18afb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18afb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18afb4: 0x3e00008  jr          $ra
    ctx->pc = 0x18AFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFB4u;
            // 0x18afb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AFBCu;
}
