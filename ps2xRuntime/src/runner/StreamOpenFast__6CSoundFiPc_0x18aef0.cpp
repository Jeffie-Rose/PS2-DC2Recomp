#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StreamOpenFast__6CSoundFiPc
// Address: 0x18aef0 - 0x18af44
void StreamOpenFast__6CSoundFiPc_0x18aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StreamOpenFast__6CSoundFiPc_0x18aef0");
#endif

    switch (ctx->pc) {
        case 0x18af0cu: goto label_18af0c;
        case 0x18af18u: goto label_18af18;
        case 0x18af24u: goto label_18af24;
        default: break;
    }

    ctx->pc = 0x18aef0u;

    // 0x18aef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18aef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18aef8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18aefc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18aefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18af00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18af00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af04: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x18AF04u;
    SET_GPR_U32(ctx, 31, 0x18AF0Cu);
    ctx->pc = 0x18AF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF04u;
            // 0x18af08: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF0Cu; }
        if (ctx->pc != 0x18AF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF0Cu; }
        if (ctx->pc != 0x18AF0Cu) { return; }
    }
    ctx->pc = 0x18AF0Cu;
label_18af0c:
    // 0x18af0c: 0x36040080  ori         $a0, $s0, 0x80
    ctx->pc = 0x18af0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)128);
    // 0x18af10: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18AF10u;
    SET_GPR_U32(ctx, 31, 0x18AF18u);
    ctx->pc = 0x18AF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF10u;
            // 0x18af14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF18u; }
        if (ctx->pc != 0x18AF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF18u; }
        if (ctx->pc != 0x18AF18u) { return; }
    }
    ctx->pc = 0x18AF18u;
label_18af18:
    // 0x18af18: 0x36048020  ori         $a0, $s0, 0x8020
    ctx->pc = 0x18af18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32800);
    // 0x18af1c: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x18AF1Cu;
    SET_GPR_U32(ctx, 31, 0x18AF24u);
    ctx->pc = 0x18AF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF1Cu;
            // 0x18af20: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (runtime->hasFunction(0x28AE20u)) {
        auto targetFn = runtime->lookupFunction(0x28AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF24u; }
        if (ctx->pc != 0x18AF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezBgm__Fii_0x28ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF24u; }
        if (ctx->pc != 0x18AF24u) { return; }
    }
    ctx->pc = 0x18AF24u;
label_18af24:
    // 0x18af24: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x18af24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18af28: 0x27838a78  addiu       $v1, $gp, -0x7588
    ctx->pc = 0x18af28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937208));
    // 0x18af2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18af30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18af34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18af34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18af38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18af38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18af3c: 0x3e00008  jr          $ra
    ctx->pc = 0x18AF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF3Cu;
            // 0x18af40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AF44u;
}
