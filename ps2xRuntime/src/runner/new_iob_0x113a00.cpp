#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: new_iob
// Address: 0x113a00 - 0x113a88
void new_iob_0x113a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("new_iob_0x113a00");
#endif

    switch (ctx->pc) {
        case 0x113a18u: goto label_113a18;
        case 0x113a20u: goto label_113a20;
        case 0x113a40u: goto label_113a40;
        case 0x113a54u: goto label_113a54;
        case 0x113a70u: goto label_113a70;
        default: break;
    }

    ctx->pc = 0x113a00u;

    // 0x113a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113a04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x113a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x113a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113a0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113a10: 0xc044e68  jal         func_1139A0
    ctx->pc = 0x113A10u;
    SET_GPR_U32(ctx, 31, 0x113A18u);
    ctx->pc = 0x113A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113A10u;
            // 0x113a14: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1139A0u;
    if (runtime->hasFunction(0x1139A0u)) {
        auto targetFn = runtime->lookupFunction(0x1139A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A18u; }
        if (ctx->pc != 0x113A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceFsIobSemaMK_0x1139a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A18u; }
        if (ctx->pc != 0x113A18u) { return; }
    }
    ctx->pc = 0x113A18u;
label_113a18:
    // 0x113a18: 0xc044048  jal         func_110120
    ctx->pc = 0x113A18u;
    SET_GPR_U32(ctx, 31, 0x113A20u);
    ctx->pc = 0x113A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113A18u;
            // 0x113a1c: 0x8e240f28  lw          $a0, 0xF28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3880)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A20u; }
        if (ctx->pc != 0x113A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A20u; }
        if (ctx->pc != 0x113A20u) { return; }
    }
    ctx->pc = 0x113A20u;
label_113a20:
    // 0x113a20: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x113a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x113a24: 0x2470c680  addiu       $s0, $v1, -0x3980
    ctx->pc = 0x113a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952576));
    // 0x113a28: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x113a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x113a2c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x113a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x113a30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x113A30u;
    {
        const bool branch_taken_0x113a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113A30u;
            // 0x113a34: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a30) {
            ctx->pc = 0x113A68u;
            goto label_113a68;
        }
    }
    ctx->pc = 0x113A38u;
    // 0x113a38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x113a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113a3c: 0x0  nop
    ctx->pc = 0x113a3cu;
    // NOP
label_113a40:
    // 0x113a40: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x113A40u;
    {
        const bool branch_taken_0x113a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113a40) {
            ctx->pc = 0x113A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113A40u;
            // 0x113a44: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113A5Cu;
            goto label_113a5c;
        }
    }
    ctx->pc = 0x113A48u;
    // 0x113a48: 0x8e240f28  lw          $a0, 0xF28($s1)
    ctx->pc = 0x113a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3880)));
    // 0x113a4c: 0xc044040  jal         func_110100
    ctx->pc = 0x113A4Cu;
    SET_GPR_U32(ctx, 31, 0x113A54u);
    ctx->pc = 0x113A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113A4Cu;
            // 0x113a50: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A54u; }
        if (ctx->pc != 0x113A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A54u; }
        if (ctx->pc != 0x113A54u) { return; }
    }
    ctx->pc = 0x113A54u;
label_113a54:
    // 0x113a54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x113A54u;
    {
        const bool branch_taken_0x113a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113A54u;
            // 0x113a58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a54) {
            ctx->pc = 0x113A74u;
            goto label_113a74;
        }
    }
    ctx->pc = 0x113A5Cu;
label_113a5c:
    // 0x113a5c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x113a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x113a60: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x113A60u;
    {
        const bool branch_taken_0x113a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113a60) {
            ctx->pc = 0x113A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x113A60u;
            // 0x113a64: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x113A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113a40;
        }
    }
    ctx->pc = 0x113A68u;
label_113a68:
    // 0x113a68: 0xc044040  jal         func_110100
    ctx->pc = 0x113A68u;
    SET_GPR_U32(ctx, 31, 0x113A70u);
    ctx->pc = 0x113A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113A68u;
            // 0x113a6c: 0x8e240f28  lw          $a0, 0xF28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3880)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A70u; }
        if (ctx->pc != 0x113A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113A70u; }
        if (ctx->pc != 0x113A70u) { return; }
    }
    ctx->pc = 0x113A70u;
label_113a70:
    // 0x113a70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x113a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113a74:
    // 0x113a74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113a78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x113a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113a80: 0x3e00008  jr          $ra
    ctx->pc = 0x113A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113A80u;
            // 0x113a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113A88u;
}
