#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_TARGET_ID__FP12RS_STACKDATAi
// Address: 0x27a950 - 0x27aa08
void ps2__ESM_SET_TARGET_ID__FP12RS_STACKDATAi_0x27a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_TARGET_ID__FP12RS_STACKDATAi_0x27a950");
#endif

    switch (ctx->pc) {
        case 0x27a998u: goto label_27a998;
        case 0x27a9acu: goto label_27a9ac;
        case 0x27a9bcu: goto label_27a9bc;
        case 0x27a9ccu: goto label_27a9cc;
        case 0x27a9d8u: goto label_27a9d8;
        case 0x27a9ecu: goto label_27a9ec;
        default: break;
    }

    ctx->pc = 0x27a950u;

    // 0x27a950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27a954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27a958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27a95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a960: 0x8f8297ec  lw          $v0, -0x6814($gp)
    ctx->pc = 0x27a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a964: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A964u;
    {
        const bool branch_taken_0x27a964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A964u;
            // 0x27a968: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a964) {
            ctx->pc = 0x27A974u;
            goto label_27a974;
        }
    }
    ctx->pc = 0x27A96Cu;
    // 0x27a96c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27A96Cu;
    {
        const bool branch_taken_0x27a96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A96Cu;
            // 0x27a970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a96c) {
            ctx->pc = 0x27A9F4u;
            goto label_27a9f4;
        }
    }
    ctx->pc = 0x27A974u;
label_27a974:
    // 0x27a974: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27A974u;
    {
        const bool branch_taken_0x27a974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A974u;
            // 0x27a978: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a974) {
            ctx->pc = 0x27A9B4u;
            goto label_27a9b4;
        }
    }
    ctx->pc = 0x27A97Cu;
    // 0x27a97c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a980: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A980u;
    {
        const bool branch_taken_0x27a980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a980) {
            ctx->pc = 0x27A990u;
            goto label_27a990;
        }
    }
    ctx->pc = 0x27A988u;
    // 0x27a988: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27A988u;
    {
        const bool branch_taken_0x27a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A988u;
            // 0x27a98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a988) {
            ctx->pc = 0x27A9F4u;
            goto label_27a9f4;
        }
    }
    ctx->pc = 0x27A990u;
label_27a990:
    // 0x27a990: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A990u;
    SET_GPR_U32(ctx, 31, 0x27A998u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A998u; }
        if (ctx->pc != 0x27A998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A998u; }
        if (ctx->pc != 0x27A998u) { return; }
    }
    ctx->pc = 0x27A998u;
label_27a998:
    // 0x27a998: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a99c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27a99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a9a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9a4: 0xc0b891c  jal         func_2E2470
    ctx->pc = 0x27A9A4u;
    SET_GPR_U32(ctx, 31, 0x27A9ACu);
    ctx->pc = 0x27A9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A9A4u;
            // 0x27a9a8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2470u;
    if (runtime->hasFunction(0x2E2470u)) {
        auto targetFn = runtime->lookupFunction(0x2E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9ACu; }
        if (ctx->pc != 0x27A9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9ACu; }
        if (ctx->pc != 0x27A9ACu) { return; }
    }
    ctx->pc = 0x27A9ACu;
label_27a9ac:
    // 0x27a9ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27A9ACu;
    {
        const bool branch_taken_0x27a9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a9ac) {
            ctx->pc = 0x27A9F4u;
            goto label_27a9f4;
        }
    }
    ctx->pc = 0x27A9B4u;
label_27a9b4:
    // 0x27a9b4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A9B4u;
    SET_GPR_U32(ctx, 31, 0x27A9BCu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9BCu; }
        if (ctx->pc != 0x27A9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9BCu; }
        if (ctx->pc != 0x27A9BCu) { return; }
    }
    ctx->pc = 0x27A9BCu;
label_27a9bc:
    // 0x27a9bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9c4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A9C4u;
    SET_GPR_U32(ctx, 31, 0x27A9CCu);
    ctx->pc = 0x27A9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A9C4u;
            // 0x27a9c8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9CCu; }
        if (ctx->pc != 0x27A9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9CCu; }
        if (ctx->pc != 0x27A9CCu) { return; }
    }
    ctx->pc = 0x27A9CCu;
label_27a9cc:
    // 0x27a9cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9d0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A9D0u;
    SET_GPR_U32(ctx, 31, 0x27A9D8u);
    ctx->pc = 0x27A9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A9D0u;
            // 0x27a9d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9D8u; }
        if (ctx->pc != 0x27A9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9D8u; }
        if (ctx->pc != 0x27A9D8u) { return; }
    }
    ctx->pc = 0x27A9D8u;
label_27a9d8:
    // 0x27a9d8: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a9dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27a9e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9e4: 0xc0b891c  jal         func_2E2470
    ctx->pc = 0x27A9E4u;
    SET_GPR_U32(ctx, 31, 0x27A9ECu);
    ctx->pc = 0x27A9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A9E4u;
            // 0x27a9e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2470u;
    if (runtime->hasFunction(0x2E2470u)) {
        auto targetFn = runtime->lookupFunction(0x2E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9ECu; }
        if (ctx->pc != 0x27A9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A9ECu; }
        if (ctx->pc != 0x27A9ECu) { return; }
    }
    ctx->pc = 0x27A9ECu;
label_27a9ec:
    // 0x27a9ec: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x27A9ECu;
    {
        const bool branch_taken_0x27a9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a9ec) {
            ctx->pc = 0x27A9F4u;
            goto label_27a9f4;
        }
    }
    ctx->pc = 0x27A9F4u;
label_27a9f4:
    // 0x27a9f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27a9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a9f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a9fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27aa00: 0x3e00008  jr          $ra
    ctx->pc = 0x27AA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA00u;
            // 0x27aa04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AA08u;
}
