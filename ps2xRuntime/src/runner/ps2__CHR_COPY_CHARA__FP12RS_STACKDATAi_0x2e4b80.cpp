#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_COPY_CHARA__FP12RS_STACKDATAi
// Address: 0x2e4b80 - 0x2e4bc4
void ps2__CHR_COPY_CHARA__FP12RS_STACKDATAi_0x2e4b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_COPY_CHARA__FP12RS_STACKDATAi_0x2e4b80");
#endif

    switch (ctx->pc) {
        case 0x2e4ba8u: goto label_2e4ba8;
        case 0x2e4bb8u: goto label_2e4bb8;
        default: break;
    }

    ctx->pc = 0x2e4b80u;

    // 0x2e4b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4b88: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e4b8c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e4b90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4B90u;
    {
        const bool branch_taken_0x2e4b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4B90u;
            // 0x2e4b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b90) {
            ctx->pc = 0x2E4BA0u;
            goto label_2e4ba0;
        }
    }
    ctx->pc = 0x2E4B98u;
    // 0x2e4b98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4B98u;
    {
        const bool branch_taken_0x2e4b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4B98u;
            // 0x2e4b9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b98) {
            ctx->pc = 0x2E4BBCu;
            goto label_2e4bbc;
        }
    }
    ctx->pc = 0x2E4BA0u;
label_2e4ba0:
    // 0x2e4ba0: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E4BA0u;
    SET_GPR_U32(ctx, 31, 0x2E4BA8u);
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4BA8u; }
        if (ctx->pc != 0x2E4BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4BA8u; }
        if (ctx->pc != 0x2E4BA8u) { return; }
    }
    ctx->pc = 0x2E4BA8u;
label_2e4ba8:
    // 0x2e4ba8: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e4ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e4bac: 0x8f859ed0  lw          $a1, -0x6130($gp)
    ctx->pc = 0x2e4bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e4bb0: 0xc0b87e8  jal         func_2E1FA0
    ctx->pc = 0x2E4BB0u;
    SET_GPR_U32(ctx, 31, 0x2E4BB8u);
    ctx->pc = 0x2E4BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4BB0u;
            // 0x2e4bb4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1FA0u;
    if (runtime->hasFunction(0x2E1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2E1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4BB8u; }
        if (ctx->pc != 0x2E4BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignCharacter__16CEffectScriptManFP11_EFF_SCRIPTi_0x2e1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4BB8u; }
        if (ctx->pc != 0x2E4BB8u) { return; }
    }
    ctx->pc = 0x2E4BB8u;
label_2e4bb8:
    // 0x2e4bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4bbc:
    // 0x2e4bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4BBCu;
            // 0x2e4bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4BC4u;
}
