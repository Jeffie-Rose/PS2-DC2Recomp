#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SYNC_CHARA__FP12RS_STACKDATAi
// Address: 0x274410 - 0x274480
void ps2__EOH_SYNC_CHARA__FP12RS_STACKDATAi_0x274410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SYNC_CHARA__FP12RS_STACKDATAi_0x274410");
#endif

    switch (ctx->pc) {
        case 0x274428u: goto label_274428;
        case 0x274434u: goto label_274434;
        case 0x274440u: goto label_274440;
        case 0x274460u: goto label_274460;
        default: break;
    }

    ctx->pc = 0x274410u;

    // 0x274410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x274414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x274418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27441c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27441cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274420: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274420u;
    SET_GPR_U32(ctx, 31, 0x274428u);
    ctx->pc = 0x274424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274420u;
            // 0x274424: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274428u; }
        if (ctx->pc != 0x274428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274428u; }
        if (ctx->pc != 0x274428u) { return; }
    }
    ctx->pc = 0x274428u;
label_274428:
    // 0x274428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27442c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27442Cu;
    SET_GPR_U32(ctx, 31, 0x274434u);
    ctx->pc = 0x274430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27442Cu;
            // 0x274430: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274434u; }
        if (ctx->pc != 0x274434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274434u; }
        if (ctx->pc != 0x274434u) { return; }
    }
    ctx->pc = 0x274434u;
label_274434:
    // 0x274434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x274434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274438: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x274438u;
    SET_GPR_U32(ctx, 31, 0x274440u);
    ctx->pc = 0x27443Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274438u;
            // 0x27443c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274440u; }
        if (ctx->pc != 0x274440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274440u; }
        if (ctx->pc != 0x274440u) { return; }
    }
    ctx->pc = 0x274440u;
label_274440:
    // 0x274440: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274440u;
    {
        const bool branch_taken_0x274440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274440u;
            // 0x274444: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274440) {
            ctx->pc = 0x274468u;
            goto label_274468;
        }
    }
    ctx->pc = 0x274448u;
    // 0x274448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27444c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27444cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274450: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x274450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x274454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274458: 0xc0976a0  jal         func_25DA80
    ctx->pc = 0x274458u;
    SET_GPR_U32(ctx, 31, 0x274460u);
    ctx->pc = 0x27445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274458u;
            // 0x27445c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DA80u;
    if (runtime->hasFunction(0x25DA80u)) {
        auto targetFn = runtime->lookupFunction(0x25DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274460u; }
        if (ctx->pc != 0x274460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiiP11CCharacter2_0x25da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274460u; }
        if (ctx->pc != 0x274460u) { return; }
    }
    ctx->pc = 0x274460u;
label_274460:
    // 0x274460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274460u;
    {
        const bool branch_taken_0x274460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274460u;
            // 0x274464: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274460) {
            ctx->pc = 0x274470u;
            goto label_274470;
        }
    }
    ctx->pc = 0x274468u;
label_274468:
    // 0x274468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27446c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_274470:
    // 0x274470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274478: 0x3e00008  jr          $ra
    ctx->pc = 0x274478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274478u;
            // 0x27447c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274480u;
}
