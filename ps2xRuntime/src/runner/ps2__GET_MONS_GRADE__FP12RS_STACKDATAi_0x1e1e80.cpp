#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MONS_GRADE__FP12RS_STACKDATAi
// Address: 0x1e1e80 - 0x1e1f00
void ps2__GET_MONS_GRADE__FP12RS_STACKDATAi_0x1e1e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MONS_GRADE__FP12RS_STACKDATAi_0x1e1e80");
#endif

    switch (ctx->pc) {
        case 0x1e1ea4u: goto label_1e1ea4;
        case 0x1e1eecu: goto label_1e1eec;
        default: break;
    }

    ctx->pc = 0x1e1e80u;

    // 0x1e1e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1e84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1e8c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1E8Cu;
    {
        const bool branch_taken_0x1e1e8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E8Cu;
            // 0x1e1e90: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e8c) {
            ctx->pc = 0x1E1E9Cu;
            goto label_1e1e9c;
        }
    }
    ctx->pc = 0x1E1E94u;
    // 0x1e1e94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E1E94u;
    {
        const bool branch_taken_0x1e1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E94u;
            // 0x1e1e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e94) {
            ctx->pc = 0x1E1EF0u;
            goto label_1e1ef0;
        }
    }
    ctx->pc = 0x1E1E9Cu;
label_1e1e9c:
    // 0x1e1e9c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E1E9Cu;
    SET_GPR_U32(ctx, 31, 0x1E1EA4u);
    ctx->pc = 0x1E1EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E9Cu;
            // 0x1e1ea0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EA4u; }
        if (ctx->pc != 0x1E1EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EA4u; }
        if (ctx->pc != 0x1E1EA4u) { return; }
    }
    ctx->pc = 0x1E1EA4u;
label_1e1ea4:
    // 0x1e1ea4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e1ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1ea8: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1EA8u;
    {
        const bool branch_taken_0x1e1ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1ea8) {
            ctx->pc = 0x1E1ED4u;
            goto label_1e1ed4;
        }
    }
    ctx->pc = 0x1E1EB0u;
    // 0x1e1eb0: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e1eb4: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1e1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1e1eb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1ebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e1ec0: 0x8c420484  lw          $v0, 0x484($v0)
    ctx->pc = 0x1e1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1e1ec4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1EC4u;
    {
        const bool branch_taken_0x1e1ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ec4) {
            ctx->pc = 0x1E1EDCu;
            goto label_1e1edc;
        }
    }
    ctx->pc = 0x1E1ECCu;
    // 0x1e1ecc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1ECCu;
    {
        const bool branch_taken_0x1e1ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1ECCu;
            // 0x1e1ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ecc) {
            ctx->pc = 0x1E1EF0u;
            goto label_1e1ef0;
        }
    }
    ctx->pc = 0x1E1ED4u;
label_1e1ed4:
    // 0x1e1ed4: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1ed8: 0x0  nop
    ctx->pc = 0x1e1ed8u;
    // NOP
label_1e1edc:
    // 0x1e1edc: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x1e1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
    // 0x1e1ee0: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x1e1ee0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e1ee4: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E1EE4u;
    SET_GPR_U32(ctx, 31, 0x1E1EECu);
    ctx->pc = 0x1E1EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1EE4u;
            // 0x1e1ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EECu; }
        if (ctx->pc != 0x1E1EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EECu; }
        if (ctx->pc != 0x1E1EECu) { return; }
    }
    ctx->pc = 0x1E1EECu;
label_1e1eec:
    // 0x1e1eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1ef0:
    // 0x1e1ef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1EF8u;
            // 0x1e1efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1F00u;
}
