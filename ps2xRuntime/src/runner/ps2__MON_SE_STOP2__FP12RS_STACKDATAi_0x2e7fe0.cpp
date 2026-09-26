#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MON_SE_STOP2__FP12RS_STACKDATAi
// Address: 0x2e7fe0 - 0x2e803c
void ps2__MON_SE_STOP2__FP12RS_STACKDATAi_0x2e7fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MON_SE_STOP2__FP12RS_STACKDATAi_0x2e7fe0");
#endif

    switch (ctx->pc) {
        case 0x2e7ff4u: goto label_2e7ff4;
        case 0x2e8000u: goto label_2e8000;
        case 0x2e8018u: goto label_2e8018;
        case 0x2e8028u: goto label_2e8028;
        default: break;
    }

    ctx->pc = 0x2e7fe0u;

    // 0x2e7fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7fec: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7FECu;
    SET_GPR_U32(ctx, 31, 0x2E7FF4u);
    ctx->pc = 0x2E7FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7FECu;
            // 0x2e7ff0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7FF4u; }
        if (ctx->pc != 0x2E7FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7FF4u; }
        if (ctx->pc != 0x2E7FF4u) { return; }
    }
    ctx->pc = 0x2E7FF4u;
label_2e7ff4:
    // 0x2e7ff4: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e7ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e7ff8: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2E7FF8u;
    SET_GPR_U32(ctx, 31, 0x2E8000u);
    ctx->pc = 0x2E7FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7FF8u;
            // 0x2e7ffc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8000u; }
        if (ctx->pc != 0x2E8000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8000u; }
        if (ctx->pc != 0x2E8000u) { return; }
    }
    ctx->pc = 0x2E8000u;
label_2e8000:
    // 0x2e8000: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8000u;
    {
        const bool branch_taken_0x2e8000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8000u;
            // 0x2e8004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8000) {
            ctx->pc = 0x2E8010u;
            goto label_2e8010;
        }
    }
    ctx->pc = 0x2E8008u;
    // 0x2e8008: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8008u;
    {
        const bool branch_taken_0x2e8008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E800Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8008u;
            // 0x2e800c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8008) {
            ctx->pc = 0x2E802Cu;
            goto label_2e802c;
        }
    }
    ctx->pc = 0x2E8010u;
label_2e8010:
    // 0x2e8010: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8010u;
    SET_GPR_U32(ctx, 31, 0x2E8018u);
    ctx->pc = 0x2E8014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8010u;
            // 0x2e8014: 0x8c500588  lw          $s0, 0x588($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8018u; }
        if (ctx->pc != 0x2E8018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8018u; }
        if (ctx->pc != 0x2E8018u) { return; }
    }
    ctx->pc = 0x2E8018u;
label_2e8018:
    // 0x2e8018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e801c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e801cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8020: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x2E8020u;
    SET_GPR_U32(ctx, 31, 0x2E8028u);
    ctx->pc = 0x2E8024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8020u;
            // 0x2e8024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8028u; }
        if (ctx->pc != 0x2E8028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8028u; }
        if (ctx->pc != 0x2E8028u) { return; }
    }
    ctx->pc = 0x2E8028u;
label_2e8028:
    // 0x2e8028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e802c:
    // 0x2e802c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e802cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8034: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8034u;
            // 0x2e8038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E803Cu;
}
