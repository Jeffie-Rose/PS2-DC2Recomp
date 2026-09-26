#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ES_SET_TARGET_ID__FP12RS_STACKDATAi
// Address: 0x2e89a0 - 0x2e8a40
void ps2__ES_SET_TARGET_ID__FP12RS_STACKDATAi_0x2e89a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ES_SET_TARGET_ID__FP12RS_STACKDATAi_0x2e89a0");
#endif

    switch (ctx->pc) {
        case 0x2e89d0u: goto label_2e89d0;
        case 0x2e89e8u: goto label_2e89e8;
        case 0x2e89f8u: goto label_2e89f8;
        case 0x2e8a04u: goto label_2e8a04;
        case 0x2e8a1cu: goto label_2e8a1c;
        default: break;
    }

    ctx->pc = 0x2e89a0u;

    // 0x2e89a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e89a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e89a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e89a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e89a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e89ac: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E89ACu;
    {
        const bool branch_taken_0x2e89ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E89B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89ACu;
            // 0x2e89b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89ac) {
            ctx->pc = 0x2E89F0u;
            goto label_2e89f0;
        }
    }
    ctx->pc = 0x2E89B4u;
    // 0x2e89b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e89b8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E89B8u;
    {
        const bool branch_taken_0x2e89b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e89b8) {
            ctx->pc = 0x2E89C8u;
            goto label_2e89c8;
        }
    }
    ctx->pc = 0x2E89C0u;
    // 0x2e89c0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E89C0u;
    {
        const bool branch_taken_0x2e89c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E89C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89C0u;
            // 0x2e89c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89c0) {
            ctx->pc = 0x2E8A24u;
            goto label_2e8a24;
        }
    }
    ctx->pc = 0x2E89C8u;
label_2e89c8:
    // 0x2e89c8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E89C8u;
    SET_GPR_U32(ctx, 31, 0x2E89D0u);
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89D0u; }
        if (ctx->pc != 0x2E89D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89D0u; }
        if (ctx->pc != 0x2E89D0u) { return; }
    }
    ctx->pc = 0x2E89D0u;
label_2e89d0:
    // 0x2e89d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e89d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e89d4: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e89d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e89d8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e89dc: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e89dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e89e0: 0xc0b891c  jal         func_2E2470
    ctx->pc = 0x2E89E0u;
    SET_GPR_U32(ctx, 31, 0x2E89E8u);
    ctx->pc = 0x2E89E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89E0u;
            // 0x2e89e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2470u;
    if (runtime->hasFunction(0x2E2470u)) {
        auto targetFn = runtime->lookupFunction(0x2E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89E8u; }
        if (ctx->pc != 0x2E89E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89E8u; }
        if (ctx->pc != 0x2E89E8u) { return; }
    }
    ctx->pc = 0x2E89E8u;
label_2e89e8:
    // 0x2e89e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E89E8u;
    {
        const bool branch_taken_0x2e89e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E89ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89E8u;
            // 0x2e89ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e89e8) {
            ctx->pc = 0x2E8A30u;
            goto label_2e8a30;
        }
    }
    ctx->pc = 0x2E89F0u;
label_2e89f0:
    // 0x2e89f0: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E89F0u;
    SET_GPR_U32(ctx, 31, 0x2E89F8u);
    ctx->pc = 0x2E89F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89F0u;
            // 0x2e89f4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89F8u; }
        if (ctx->pc != 0x2E89F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E89F8u; }
        if (ctx->pc != 0x2E89F8u) { return; }
    }
    ctx->pc = 0x2E89F8u;
label_2e89f8:
    // 0x2e89f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e89f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e89fc: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E89FCu;
    SET_GPR_U32(ctx, 31, 0x2E8A04u);
    ctx->pc = 0x2E8A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E89FCu;
            // 0x2e8a00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8A04u; }
        if (ctx->pc != 0x2E8A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8A04u; }
        if (ctx->pc != 0x2E8A04u) { return; }
    }
    ctx->pc = 0x2E8A04u;
label_2e8a04:
    // 0x2e8a04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e8a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a08: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e8a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e8a0c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8a10: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e8a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e8a14: 0xc0b891c  jal         func_2E2470
    ctx->pc = 0x2E8A14u;
    SET_GPR_U32(ctx, 31, 0x2E8A1Cu);
    ctx->pc = 0x2E8A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A14u;
            // 0x2e8a18: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2470u;
    if (runtime->hasFunction(0x2E2470u)) {
        auto targetFn = runtime->lookupFunction(0x2E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8A1Cu; }
        if (ctx->pc != 0x2E8A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8A1Cu; }
        if (ctx->pc != 0x2E8A1Cu) { return; }
    }
    ctx->pc = 0x2E8A1Cu;
label_2e8a1c:
    // 0x2e8a1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8A1Cu;
    {
        const bool branch_taken_0x2e8a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8a1c) {
            ctx->pc = 0x2E8A2Cu;
            goto label_2e8a2c;
        }
    }
    ctx->pc = 0x2E8A24u;
label_2e8a24:
    // 0x2e8a24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8A24u;
    {
        const bool branch_taken_0x2e8a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A24u;
            // 0x2e8a28: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a24) {
            ctx->pc = 0x2E8A34u;
            goto label_2e8a34;
        }
    }
    ctx->pc = 0x2E8A2Cu;
label_2e8a2c:
    // 0x2e8a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8a30:
    // 0x2e8a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8a34:
    // 0x2e8a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8a38: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8A38u;
            // 0x2e8a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8A40u;
}
