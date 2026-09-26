#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_ARG__FP12RS_STACKDATAi
// Address: 0x279e90 - 0x279f30
void ps2__LOAD_ARG__FP12RS_STACKDATAi_0x279e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_ARG__FP12RS_STACKDATAi_0x279e90");
#endif

    switch (ctx->pc) {
        case 0x279ea8u: goto label_279ea8;
        case 0x279eb4u: goto label_279eb4;
        case 0x279ec0u: goto label_279ec0;
        case 0x279edcu: goto label_279edc;
        case 0x279f18u: goto label_279f18;
        default: break;
    }

    ctx->pc = 0x279e90u;

    // 0x279e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x279e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279ea0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279EA0u;
    SET_GPR_U32(ctx, 31, 0x279EA8u);
    ctx->pc = 0x279EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279EA0u;
            // 0x279ea4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279EA8u; }
        if (ctx->pc != 0x279EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279EA8u; }
        if (ctx->pc != 0x279EA8u) { return; }
    }
    ctx->pc = 0x279EA8u;
label_279ea8:
    // 0x279ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279eac: 0xc097e48  jal         func_25F920
    ctx->pc = 0x279EACu;
    SET_GPR_U32(ctx, 31, 0x279EB4u);
    ctx->pc = 0x279EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279EACu;
            // 0x279eb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279EB4u; }
        if (ctx->pc != 0x279EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279EB4u; }
        if (ctx->pc != 0x279EB4u) { return; }
    }
    ctx->pc = 0x279EB4u;
label_279eb4:
    // 0x279eb4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x279eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x279eb8: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x279EB8u;
    SET_GPR_U32(ctx, 31, 0x279EC0u);
    ctx->pc = 0x279EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279EB8u;
            // 0x279ebc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279EC0u; }
        if (ctx->pc != 0x279EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279EC0u; }
        if (ctx->pc != 0x279EC0u) { return; }
    }
    ctx->pc = 0x279EC0u;
label_279ec0:
    // 0x279ec0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279EC0u;
    {
        const bool branch_taken_0x279ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279EC0u;
            // 0x279ec4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ec0) {
            ctx->pc = 0x279ED0u;
            goto label_279ed0;
        }
    }
    ctx->pc = 0x279EC8u;
    // 0x279ec8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x279EC8u;
    {
        const bool branch_taken_0x279ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279EC8u;
            // 0x279ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ec8) {
            ctx->pc = 0x279F1Cu;
            goto label_279f1c;
        }
    }
    ctx->pc = 0x279ED0u;
label_279ed0:
    // 0x279ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ed4: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x279ED4u;
    SET_GPR_U32(ctx, 31, 0x279EDCu);
    ctx->pc = 0x279ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279ED4u;
            // 0x279ed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279EDCu; }
        if (ctx->pc != 0x279EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279EDCu; }
        if (ctx->pc != 0x279EDCu) { return; }
    }
    ctx->pc = 0x279EDCu;
label_279edc:
    // 0x279edc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279EDCu;
    {
        const bool branch_taken_0x279edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279EDCu;
            // 0x279ee0: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279edc) {
            ctx->pc = 0x279EECu;
            goto label_279eec;
        }
    }
    ctx->pc = 0x279EE4u;
    // 0x279ee4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x279EE4u;
    {
        const bool branch_taken_0x279ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279EE4u;
            // 0x279ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ee4) {
            ctx->pc = 0x279F1Cu;
            goto label_279f1c;
        }
    }
    ctx->pc = 0x279EECu;
label_279eec:
    // 0x279eec: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x279eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x279ef0: 0xac312a3c  sw          $s1, 0x2A3C($at)
    ctx->pc = 0x279ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10812), GPR_U32(ctx, 17));
    // 0x279ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x279ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ef8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x279ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x279efc: 0x24842a30  addiu       $a0, $a0, 0x2A30
    ctx->pc = 0x279efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10800));
    // 0x279f00: 0xac202a30  sw          $zero, 0x2A30($at)
    ctx->pc = 0x279f00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10800), GPR_U32(ctx, 0));
    // 0x279f04: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x279f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x279f08: 0xac202a34  sw          $zero, 0x2A34($at)
    ctx->pc = 0x279f08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10804), GPR_U32(ctx, 0));
    // 0x279f0c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x279f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x279f10: 0xc097e5c  jal         func_25F970
    ctx->pc = 0x279F10u;
    SET_GPR_U32(ctx, 31, 0x279F18u);
    ctx->pc = 0x279F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279F10u;
            // 0x279f14: 0xac202a38  sw          $zero, 0x2A38($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F970u;
    if (runtime->hasFunction(0x25F970u)) {
        auto targetFn = runtime->lookupFunction(0x25F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F18u; }
        if (ctx->pc != 0x279F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildArgData__15CEventScriptArgFPUi_0x25f970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F18u; }
        if (ctx->pc != 0x279F18u) { return; }
    }
    ctx->pc = 0x279F18u;
label_279f18:
    // 0x279f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279f1c:
    // 0x279f1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279f20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279f28: 0x3e00008  jr          $ra
    ctx->pc = 0x279F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279F28u;
            // 0x279f2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279F30u;
}
