#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GOTO_SUBGAME__FP12RS_STACKDATAi
// Address: 0x269880 - 0x2698dc
void ps2__GOTO_SUBGAME__FP12RS_STACKDATAi_0x269880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GOTO_SUBGAME__FP12RS_STACKDATAi_0x269880");
#endif

    switch (ctx->pc) {
        case 0x269890u: goto label_269890;
        case 0x2698ccu: goto label_2698cc;
        default: break;
    }

    ctx->pc = 0x269880u;

    // 0x269880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x269880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x269884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x269888: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269888u;
    SET_GPR_U32(ctx, 31, 0x269890u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269890u; }
        if (ctx->pc != 0x269890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269890u; }
        if (ctx->pc != 0x269890u) { return; }
    }
    ctx->pc = 0x269890u;
label_269890:
    // 0x269890: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x269890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x269894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269898: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x269898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x26989c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x26989cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2698a0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2698a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2698a4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2698a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2698a8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2698a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x2698ac: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2698acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2698b0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2698b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2698b4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2698b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2698b8: 0x8c623e68  lw          $v0, 0x3E68($v1)
    ctx->pc = 0x2698b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15976)));
    // 0x2698bc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2698bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2698c0: 0x8c623e6c  lw          $v0, 0x3E6C($v1)
    ctx->pc = 0x2698c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15980)));
    // 0x2698c4: 0xc0c0ff0  jal         func_303FC0
    ctx->pc = 0x2698C4u;
    SET_GPR_U32(ctx, 31, 0x2698CCu);
    ctx->pc = 0x2698C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2698C4u;
            // 0x2698c8: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303FC0u;
    if (runtime->hasFunction(0x303FC0u)) {
        auto targetFn = runtime->lookupFunction(0x303FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2698CCu; }
        if (ctx->pc != 0x2698CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgInitSubGame__FiP11SubGameInfo_0x303fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2698CCu; }
        if (ctx->pc != 0x2698CCu) { return; }
    }
    ctx->pc = 0x2698CCu;
label_2698cc:
    // 0x2698cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2698ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2698d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2698d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2698d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2698D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2698D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2698D4u;
            // 0x2698d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2698DCu;
}
