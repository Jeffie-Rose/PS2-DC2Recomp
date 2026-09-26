#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLight__13mgRENDER_INFOFPA4_fPA4_f
// Address: 0x1393a0 - 0x1393f4
void GetLight__13mgRENDER_INFOFPA4_fPA4_f_0x1393a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLight__13mgRENDER_INFOFPA4_fPA4_f_0x1393a0");
#endif

    switch (ctx->pc) {
        case 0x1393c0u: goto label_1393c0;
        case 0x1393d0u: goto label_1393d0;
        case 0x1393dcu: goto label_1393dc;
        default: break;
    }

    ctx->pc = 0x1393a0u;

    // 0x1393a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1393a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1393a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1393a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1393a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1393a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1393ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1393acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1393b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1393b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1393b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393b8: 0xc04e494  jal         func_139250
    ctx->pc = 0x1393B8u;
    SET_GPR_U32(ctx, 31, 0x1393C0u);
    ctx->pc = 0x1393BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1393B8u;
            // 0x1393bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393C0u; }
        if (ctx->pc != 0x1393C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393C0u; }
        if (ctx->pc != 0x1393C0u) { return; }
    }
    ctx->pc = 0x1393C0u;
label_1393c0:
    // 0x1393c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1393c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1393c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393c8: 0xc041c60  jal         func_107180
    ctx->pc = 0x1393C8u;
    SET_GPR_U32(ctx, 31, 0x1393D0u);
    ctx->pc = 0x1393CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1393C8u;
            // 0x1393cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393D0u; }
        if (ctx->pc != 0x1393D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393D0u; }
        if (ctx->pc != 0x1393D0u) { return; }
    }
    ctx->pc = 0x1393D0u;
label_1393d0:
    // 0x1393d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1393d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393d4: 0xc041c60  jal         func_107180
    ctx->pc = 0x1393D4u;
    SET_GPR_U32(ctx, 31, 0x1393DCu);
    ctx->pc = 0x1393D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1393D4u;
            // 0x1393d8: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393DCu; }
        if (ctx->pc != 0x1393DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393DCu; }
        if (ctx->pc != 0x1393DCu) { return; }
    }
    ctx->pc = 0x1393DCu;
label_1393dc:
    // 0x1393dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1393dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1393e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1393e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1393e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1393e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1393e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1393e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1393ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1393ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1393F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1393ECu;
            // 0x1393f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1393F4u;
}
