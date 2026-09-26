#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MENU_BASETEXINFO_Init__FP16MENU_BASETEXINFO
// Address: 0x2257c0 - 0x225800
void MENU_BASETEXINFO_Init__FP16MENU_BASETEXINFO_0x2257c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MENU_BASETEXINFO_Init__FP16MENU_BASETEXINFO_0x2257c0");
#endif

    switch (ctx->pc) {
        case 0x2257ecu: goto label_2257ec;
        default: break;
    }

    ctx->pc = 0x2257c0u;

    // 0x2257c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2257c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2257c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2257c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2257c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2257cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2257ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2257d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2257d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2257d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257d8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2257d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2257dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2257dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257e0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2257e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2257e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2257E4u;
    SET_GPR_U32(ctx, 31, 0x2257ECu);
    ctx->pc = 0x2257E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2257E4u;
            // 0x2257e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2257ECu; }
        if (ctx->pc != 0x2257ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2257ECu; }
        if (ctx->pc != 0x2257ECu) { return; }
    }
    ctx->pc = 0x2257ECu;
label_2257ec:
    // 0x2257ec: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x2257ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x2257f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2257f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2257f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2257f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2257f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2257F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2257FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2257F8u;
            // 0x2257fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225800u;
}
