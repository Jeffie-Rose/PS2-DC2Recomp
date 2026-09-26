#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuFormDraw__16CMenuPosDataFormFRi
// Address: 0x22a6d0 - 0x22a72c
void MenuFormDraw__16CMenuPosDataFormFRi_0x22a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuFormDraw__16CMenuPosDataFormFRi_0x22a6d0");
#endif

    switch (ctx->pc) {
        case 0x22a6f4u: goto label_22a6f4;
        case 0x22a700u: goto label_22a700;
        case 0x22a714u: goto label_22a714;
        default: break;
    }

    ctx->pc = 0x22a6d0u;

    // 0x22a6d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a6d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22a6d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a6dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a6e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22a6e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22a6e8: 0xc48c000c  lwc1        $f12, 0xC($a0)
    ctx->pc = 0x22a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22a6ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22A6ECu;
    SET_GPR_U32(ctx, 31, 0x22A6F4u);
    ctx->pc = 0x22A6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A6ECu;
            // 0x22a6f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A6F4u; }
        if (ctx->pc != 0x22A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A6F4u; }
        if (ctx->pc != 0x22A6F4u) { return; }
    }
    ctx->pc = 0x22A6F4u;
label_22a6f4:
    // 0x22a6f4: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x22a6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22a6f8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22A6F8u;
    SET_GPR_U32(ctx, 31, 0x22A700u);
    ctx->pc = 0x22A6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A6F8u;
            // 0x22a6fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A700u; }
        if (ctx->pc != 0x22A700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A700u; }
        if (ctx->pc != 0x22A700u) { return; }
    }
    ctx->pc = 0x22A700u;
label_22a700:
    // 0x22a700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22a704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a708: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22a708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a70c: 0xc08a79c  jal         func_229E70
    ctx->pc = 0x22A70Cu;
    SET_GPR_U32(ctx, 31, 0x22A714u);
    ctx->pc = 0x22A710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A70Cu;
            // 0x22a710: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229E70u;
    if (runtime->hasFunction(0x229E70u)) {
        auto targetFn = runtime->lookupFunction(0x229E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A714u; }
        if (ctx->pc != 0x22A714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormDraw__16CMenuPosDataFormFiiRi_0x229e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A714u; }
        if (ctx->pc != 0x22A714u) { return; }
    }
    ctx->pc = 0x22A714u;
label_22a714:
    // 0x22a714: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22a714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a718: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a71c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a724: 0x3e00008  jr          $ra
    ctx->pc = 0x22A724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A724u;
            // 0x22a728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A72Cu;
}
