#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddPoint__17CSWordAfterEffectFPfPf
// Address: 0x2f5d50 - 0x2f5dec
void AddPoint__17CSWordAfterEffectFPfPf_0x2f5d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPoint__17CSWordAfterEffectFPfPf_0x2f5d50");
#endif

    switch (ctx->pc) {
        case 0x2f5d7cu: goto label_2f5d7c;
        case 0x2f5d94u: goto label_2f5d94;
        default: break;
    }

    ctx->pc = 0x2f5d50u;

    // 0x2f5d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f5d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f5d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f5d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f5d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f5d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f5d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5d60: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f5d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d64: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x2f5d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f5d68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d6c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2f5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f5d70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2f5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2f5d74: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2F5D74u;
    SET_GPR_U32(ctx, 31, 0x2F5D7Cu);
    ctx->pc = 0x2F5D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5D74u;
            // 0x2f5d78: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5D7Cu; }
        if (ctx->pc != 0x2F5D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5D7Cu; }
        if (ctx->pc != 0x2F5D7Cu) { return; }
    }
    ctx->pc = 0x2F5D7Cu;
label_2f5d7c:
    // 0x2f5d7c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2f5d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2f5d80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f5d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d84: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f5d88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2f5d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2f5d8c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2F5D8Cu;
    SET_GPR_U32(ctx, 31, 0x2F5D94u);
    ctx->pc = 0x2F5D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5D8Cu;
            // 0x2f5d90: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5D94u; }
        if (ctx->pc != 0x2F5D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5D94u; }
        if (ctx->pc != 0x2F5D94u) { return; }
    }
    ctx->pc = 0x2F5D94u;
label_2f5d94:
    // 0x2f5d94: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2f5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2f5d98: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x2f5d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x2f5d9c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x2f5d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2f5da0: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2f5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2f5da4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2f5da4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f5da8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5DA8u;
    {
        const bool branch_taken_0x2f5da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5DA8u;
            // 0x2f5dac: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5da8) {
            ctx->pc = 0x2F5DB4u;
            goto label_2f5db4;
        }
    }
    ctx->pc = 0x2F5DB0u;
    // 0x2f5db0: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x2f5db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_2f5db4:
    // 0x2f5db4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2f5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2f5db8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f5dbc: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2f5dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x2f5dc0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2f5dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2f5dc4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5DC4u;
    {
        const bool branch_taken_0x2f5dc4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2f5dc4) {
            ctx->pc = 0x2F5DD8u;
            goto label_2f5dd8;
        }
    }
    ctx->pc = 0x2F5DCCu;
    // 0x2f5dcc: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2f5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2f5dd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f5dd4: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2f5dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_2f5dd8:
    // 0x2f5dd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f5dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5ddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f5ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5de4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5DE4u;
            // 0x2f5de8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5DECu;
}
