#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_LOAD_BASE__FP12RS_STACKDATAi
// Address: 0x27a580 - 0x27a610
void ps2__ESM_LOAD_BASE__FP12RS_STACKDATAi_0x27a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_LOAD_BASE__FP12RS_STACKDATAi_0x27a580");
#endif

    switch (ctx->pc) {
        case 0x27a5c4u: goto label_27a5c4;
        case 0x27a5d8u: goto label_27a5d8;
        case 0x27a5e8u: goto label_27a5e8;
        case 0x27a5fcu: goto label_27a5fc;
        default: break;
    }

    ctx->pc = 0x27a580u;

    // 0x27a580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27a584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27a584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27a588: 0x8f8297ec  lw          $v0, -0x6814($gp)
    ctx->pc = 0x27a588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a58c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A58Cu;
    {
        const bool branch_taken_0x27a58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A58Cu;
            // 0x27a590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a58c) {
            ctx->pc = 0x27A59Cu;
            goto label_27a59c;
        }
    }
    ctx->pc = 0x27A594u;
    // 0x27a594: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27A594u;
    {
        const bool branch_taken_0x27a594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A594u;
            // 0x27a598: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a594) {
            ctx->pc = 0x27A608u;
            goto label_27a608;
        }
    }
    ctx->pc = 0x27A59Cu;
label_27a59c:
    // 0x27a59c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27a5a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27a5a4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27A5A4u;
    {
        const bool branch_taken_0x27a5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a5a4) {
            ctx->pc = 0x27A5E0u;
            goto label_27a5e0;
        }
    }
    ctx->pc = 0x27A5ACu;
    // 0x27a5ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A5ACu;
    {
        const bool branch_taken_0x27a5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a5ac) {
            ctx->pc = 0x27A5BCu;
            goto label_27a5bc;
        }
    }
    ctx->pc = 0x27A5B4u;
    // 0x27a5b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27A5B4u;
    {
        const bool branch_taken_0x27a5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A5B4u;
            // 0x27a5b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5b4) {
            ctx->pc = 0x27A604u;
            goto label_27a604;
        }
    }
    ctx->pc = 0x27A5BCu;
label_27a5bc:
    // 0x27a5bc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A5BCu;
    SET_GPR_U32(ctx, 31, 0x27A5C4u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5C4u; }
        if (ctx->pc != 0x27A5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5C4u; }
        if (ctx->pc != 0x27A5C4u) { return; }
    }
    ctx->pc = 0x27A5C4u;
label_27a5c4:
    // 0x27a5c4: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a5c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27a5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5d0: 0xc0b7fe8  jal         func_2DFFA0
    ctx->pc = 0x27A5D0u;
    SET_GPR_U32(ctx, 31, 0x27A5D8u);
    ctx->pc = 0x27A5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A5D0u;
            // 0x27a5d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFFA0u;
    if (runtime->hasFunction(0x2DFFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5D8u; }
        if (ctx->pc != 0x27A5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFiP9mgCMemoryi_0x2dffa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5D8u; }
        if (ctx->pc != 0x27A5D8u) { return; }
    }
    ctx->pc = 0x27A5D8u;
label_27a5d8:
    // 0x27a5d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27A5D8u;
    {
        const bool branch_taken_0x27a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a5d8) {
            ctx->pc = 0x27A604u;
            goto label_27a604;
        }
    }
    ctx->pc = 0x27A5E0u;
label_27a5e0:
    // 0x27a5e0: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27A5E0u;
    SET_GPR_U32(ctx, 31, 0x27A5E8u);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5E8u; }
        if (ctx->pc != 0x27A5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5E8u; }
        if (ctx->pc != 0x27A5E8u) { return; }
    }
    ctx->pc = 0x27A5E8u;
label_27a5e8:
    // 0x27a5e8: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a5ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27a5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a5f4: 0xc0b8040  jal         func_2E0100
    ctx->pc = 0x27A5F4u;
    SET_GPR_U32(ctx, 31, 0x27A5FCu);
    ctx->pc = 0x27A5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A5F4u;
            // 0x27a5f8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0100u;
    if (runtime->hasFunction(0x2E0100u)) {
        auto targetFn = runtime->lookupFunction(0x2E0100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5FCu; }
        if (ctx->pc != 0x27A5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi_0x2e0100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A5FCu; }
        if (ctx->pc != 0x27A5FCu) { return; }
    }
    ctx->pc = 0x27A5FCu;
label_27a5fc:
    // 0x27a5fc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x27A5FCu;
    {
        const bool branch_taken_0x27a5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a5fc) {
            ctx->pc = 0x27A604u;
            goto label_27a604;
        }
    }
    ctx->pc = 0x27A604u;
label_27a604:
    // 0x27a604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27a608:
    // 0x27a608: 0x3e00008  jr          $ra
    ctx->pc = 0x27A608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A608u;
            // 0x27a60c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A610u;
}
