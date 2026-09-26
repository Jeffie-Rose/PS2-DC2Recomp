#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHARA_DA_ENABLE__FP12RS_STACKDATAi
// Address: 0x26c230 - 0x26c28c
void ps2__CHARA_DA_ENABLE__FP12RS_STACKDATAi_0x26c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHARA_DA_ENABLE__FP12RS_STACKDATAi_0x26c230");
#endif

    switch (ctx->pc) {
        case 0x26c248u: goto label_26c248;
        case 0x26c250u: goto label_26c250;
        case 0x26c268u: goto label_26c268;
        case 0x26c274u: goto label_26c274;
        default: break;
    }

    ctx->pc = 0x26c230u;

    // 0x26c230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26c23c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26c23cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26c240: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C240u;
    SET_GPR_U32(ctx, 31, 0x26C248u);
    ctx->pc = 0x26C244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C240u;
            // 0x26c244: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C248u; }
        if (ctx->pc != 0x26C248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C248u; }
        if (ctx->pc != 0x26C248u) { return; }
    }
    ctx->pc = 0x26C248u;
label_26c248:
    // 0x26c248: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26C248u;
    SET_GPR_U32(ctx, 31, 0x26C250u);
    ctx->pc = 0x26C24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C248u;
            // 0x26c24c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C250u; }
        if (ctx->pc != 0x26C250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C250u; }
        if (ctx->pc != 0x26C250u) { return; }
    }
    ctx->pc = 0x26C250u;
label_26c250:
    // 0x26c250: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C250u;
    {
        const bool branch_taken_0x26c250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C250u;
            // 0x26c254: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c250) {
            ctx->pc = 0x26C260u;
            goto label_26c260;
        }
    }
    ctx->pc = 0x26C258u;
    // 0x26c258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26C258u;
    {
        const bool branch_taken_0x26c258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C258u;
            // 0x26c25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c258) {
            ctx->pc = 0x26C278u;
            goto label_26c278;
        }
    }
    ctx->pc = 0x26C260u;
label_26c260:
    // 0x26c260: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C260u;
    SET_GPR_U32(ctx, 31, 0x26C268u);
    ctx->pc = 0x26C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C260u;
            // 0x26c264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C268u; }
        if (ctx->pc != 0x26C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C268u; }
        if (ctx->pc != 0x26C268u) { return; }
    }
    ctx->pc = 0x26C268u;
label_26c268:
    // 0x26c268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c26c: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x26C26Cu;
    SET_GPR_U32(ctx, 31, 0x26C274u);
    ctx->pc = 0x26C270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C26Cu;
            // 0x26c270: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C274u; }
        if (ctx->pc != 0x26C274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDAnimeEnable__11CCharacter2Fi_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C274u; }
        if (ctx->pc != 0x26C274u) { return; }
    }
    ctx->pc = 0x26C274u;
label_26c274:
    // 0x26c274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c278:
    // 0x26c278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26c278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c27c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26c27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c284: 0x3e00008  jr          $ra
    ctx->pc = 0x26C284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C284u;
            // 0x26c288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C28Cu;
}
