#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SYNC_SPRITE__FP12RS_STACKDATAi
// Address: 0x2748f0 - 0x274950
void ps2__EOH_SYNC_SPRITE__FP12RS_STACKDATAi_0x2748f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SYNC_SPRITE__FP12RS_STACKDATAi_0x2748f0");
#endif

    switch (ctx->pc) {
        case 0x274904u: goto label_274904;
        case 0x274910u: goto label_274910;
        case 0x274918u: goto label_274918;
        case 0x274934u: goto label_274934;
        default: break;
    }

    ctx->pc = 0x2748f0u;

    // 0x2748f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2748f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2748f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2748f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2748f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2748f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2748fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2748FCu;
    SET_GPR_U32(ctx, 31, 0x274904u);
    ctx->pc = 0x274900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2748FCu;
            // 0x274900: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274904u; }
        if (ctx->pc != 0x274904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274904u; }
        if (ctx->pc != 0x274904u) { return; }
    }
    ctx->pc = 0x274904u;
label_274904:
    // 0x274904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274908: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274908u;
    SET_GPR_U32(ctx, 31, 0x274910u);
    ctx->pc = 0x27490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274908u;
            // 0x27490c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274910u; }
        if (ctx->pc != 0x274910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274910u; }
        if (ctx->pc != 0x274910u) { return; }
    }
    ctx->pc = 0x274910u;
label_274910:
    // 0x274910: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x274910u;
    SET_GPR_U32(ctx, 31, 0x274918u);
    ctx->pc = 0x274914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274910u;
            // 0x274914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (runtime->hasFunction(0x26ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274918u; }
        if (ctx->pc != 0x274918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventSprite__Fi_0x26ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274918u; }
        if (ctx->pc != 0x274918u) { return; }
    }
    ctx->pc = 0x274918u;
label_274918:
    // 0x274918: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274918u;
    {
        const bool branch_taken_0x274918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27491Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274918u;
            // 0x27491c: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274918) {
            ctx->pc = 0x27493Cu;
            goto label_27493c;
        }
    }
    ctx->pc = 0x274920u;
    // 0x274920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274924: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x274924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x274928: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x274928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27492c: 0xc0976b0  jal         func_25DAC0
    ctx->pc = 0x27492Cu;
    SET_GPR_U32(ctx, 31, 0x274934u);
    ctx->pc = 0x274930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27492Cu;
            // 0x274930: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DAC0u;
    if (runtime->hasFunction(0x25DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x25DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274934u; }
        if (ctx->pc != 0x274934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiP13CEventSprite2_0x25dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274934u; }
        if (ctx->pc != 0x274934u) { return; }
    }
    ctx->pc = 0x274934u;
label_274934:
    // 0x274934: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274934u;
    {
        const bool branch_taken_0x274934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274934u;
            // 0x274938: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274934) {
            ctx->pc = 0x274944u;
            goto label_274944;
        }
    }
    ctx->pc = 0x27493Cu;
label_27493c:
    // 0x27493c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27493cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_274944:
    // 0x274944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274948: 0x3e00008  jr          $ra
    ctx->pc = 0x274948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274948u;
            // 0x27494c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274950u;
}
