#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_WHP__FP12RS_STACKDATAi
// Address: 0x27ad20 - 0x27ad8c
void ps2__ADD_WHP__FP12RS_STACKDATAi_0x27ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_WHP__FP12RS_STACKDATAi_0x27ad20");
#endif

    switch (ctx->pc) {
        case 0x27ad38u: goto label_27ad38;
        case 0x27ad54u: goto label_27ad54;
        case 0x27ad60u: goto label_27ad60;
        case 0x27ad74u: goto label_27ad74;
        default: break;
    }

    ctx->pc = 0x27ad20u;

    // 0x27ad20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ad24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27ad28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ad28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27ad2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27ad2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad30: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x27AD30u;
    SET_GPR_U32(ctx, 31, 0x27AD38u);
    ctx->pc = 0x27AD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD30u;
            // 0x27ad34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD38u; }
        if (ctx->pc != 0x27AD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD38u; }
        if (ctx->pc != 0x27AD38u) { return; }
    }
    ctx->pc = 0x27AD38u;
label_27ad38:
    // 0x27ad38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AD38u;
    {
        const bool branch_taken_0x27ad38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD38u;
            // 0x27ad3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad38) {
            ctx->pc = 0x27AD48u;
            goto label_27ad48;
        }
    }
    ctx->pc = 0x27AD40u;
    // 0x27ad40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27AD40u;
    {
        const bool branch_taken_0x27ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD40u;
            // 0x27ad44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad40) {
            ctx->pc = 0x27AD78u;
            goto label_27ad78;
        }
    }
    ctx->pc = 0x27AD48u;
label_27ad48:
    // 0x27ad48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ad48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad4c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27AD4Cu;
    SET_GPR_U32(ctx, 31, 0x27AD54u);
    ctx->pc = 0x27AD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD4Cu;
            // 0x27ad50: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD54u; }
        if (ctx->pc != 0x27AD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD54u; }
        if (ctx->pc != 0x27AD54u) { return; }
    }
    ctx->pc = 0x27AD54u;
label_27ad54:
    // 0x27ad54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ad54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad58: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27AD58u;
    SET_GPR_U32(ctx, 31, 0x27AD60u);
    ctx->pc = 0x27AD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD58u;
            // 0x27ad5c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD60u; }
        if (ctx->pc != 0x27AD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD60u; }
        if (ctx->pc != 0x27AD60u) { return; }
    }
    ctx->pc = 0x27AD60u;
label_27ad60:
    // 0x27ad60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ad60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ad64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ad64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ad68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad6c: 0xc067e64  jal         func_19F990
    ctx->pc = 0x27AD6Cu;
    SET_GPR_U32(ctx, 31, 0x27AD74u);
    ctx->pc = 0x27AD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD6Cu;
            // 0x27ad70: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F990u;
    if (runtime->hasFunction(0x19F990u)) {
        auto targetFn = runtime->lookupFunction(0x19F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD74u; }
        if (ctx->pc != 0x27AD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddWhp__16CBattleCharaInfoFif_0x19f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD74u; }
        if (ctx->pc != 0x27AD74u) { return; }
    }
    ctx->pc = 0x27AD74u;
label_27ad74:
    // 0x27ad74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ad78:
    // 0x27ad78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27ad78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ad7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ad7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ad80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ad80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ad84: 0x3e00008  jr          $ra
    ctx->pc = 0x27AD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD84u;
            // 0x27ad88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AD8Cu;
}
