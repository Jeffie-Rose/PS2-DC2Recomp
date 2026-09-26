#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ACTIVE_MONS_LIFEI__FP12RS_STACKDATAi
// Address: 0x1e1b30 - 0x1e1bf8
void ps2__SET_ACTIVE_MONS_LIFEI__FP12RS_STACKDATAi_0x1e1b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ACTIVE_MONS_LIFEI__FP12RS_STACKDATAi_0x1e1b30");
#endif

    switch (ctx->pc) {
        case 0x1e1b54u: goto label_1e1b54;
        case 0x1e1b60u: goto label_1e1b60;
        default: break;
    }

    ctx->pc = 0x1e1b30u;

    // 0x1e1b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1b34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1b3c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1B3Cu;
    {
        const bool branch_taken_0x1e1b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B3Cu;
            // 0x1e1b40: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b3c) {
            ctx->pc = 0x1E1B4Cu;
            goto label_1e1b4c;
        }
    }
    ctx->pc = 0x1E1B44u;
    // 0x1e1b44: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1E1B44u;
    {
        const bool branch_taken_0x1e1b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B44u;
            // 0x1e1b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b44) {
            ctx->pc = 0x1E1BE8u;
            goto label_1e1be8;
        }
    }
    ctx->pc = 0x1E1B4Cu;
label_1e1b4c:
    // 0x1e1b4c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E1B4Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B54u);
    ctx->pc = 0x1E1B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B4Cu;
            // 0x1e1b50: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B54u; }
        if (ctx->pc != 0x1E1B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B54u; }
        if (ctx->pc != 0x1E1B54u) { return; }
    }
    ctx->pc = 0x1E1B54u;
label_1e1b54:
    // 0x1e1b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b58: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E1B58u;
    SET_GPR_U32(ctx, 31, 0x1E1B60u);
    ctx->pc = 0x1E1B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B58u;
            // 0x1e1b5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B60u; }
        if (ctx->pc != 0x1E1B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B60u; }
        if (ctx->pc != 0x1E1B60u) { return; }
    }
    ctx->pc = 0x1E1B60u;
label_1e1b60:
    // 0x1e1b60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1b64: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1B64u;
    {
        const bool branch_taken_0x1e1b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1b64) {
            ctx->pc = 0x1E1B90u;
            goto label_1e1b90;
        }
    }
    ctx->pc = 0x1E1B6Cu;
    // 0x1e1b6c: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1e1b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e1b70: 0x2603ffe8  addiu       $v1, $s0, -0x18
    ctx->pc = 0x1e1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x1e1b74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e1b78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1b7c: 0x8c640484  lw          $a0, 0x484($v1)
    ctx->pc = 0x1e1b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1e1b80: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1B80u;
    {
        const bool branch_taken_0x1e1b80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b80) {
            ctx->pc = 0x1E1B98u;
            goto label_1e1b98;
        }
    }
    ctx->pc = 0x1E1B88u;
    // 0x1e1b88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E1B88u;
    {
        const bool branch_taken_0x1e1b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B88u;
            // 0x1e1b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b88) {
            ctx->pc = 0x1E1BE8u;
            goto label_1e1be8;
        }
    }
    ctx->pc = 0x1E1B90u;
label_1e1b90:
    // 0x1e1b90: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1b94: 0x0  nop
    ctx->pc = 0x1e1b94u;
    // NOP
label_1e1b98:
    // 0x1e1b98: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1B98u;
    {
        const bool branch_taken_0x1e1b98 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e1b98) {
            ctx->pc = 0x1E1BC0u;
            goto label_1e1bc0;
        }
    }
    ctx->pc = 0x1E1BA0u;
    // 0x1e1ba0: 0x8c831314  lw          $v1, 0x1314($a0)
    ctx->pc = 0x1e1ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4884)));
    // 0x1e1ba4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1ba8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1BA8u;
    {
        const bool branch_taken_0x1e1ba8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e1ba8) {
            ctx->pc = 0x1E1BB8u;
            goto label_1e1bb8;
        }
    }
    ctx->pc = 0x1E1BB0u;
    // 0x1e1bb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E1BB0u;
    {
        const bool branch_taken_0x1e1bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BB0u;
            // 0x1e1bb4: 0xac801314  sw          $zero, 0x1314($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4884), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1bb0) {
            ctx->pc = 0x1E1BE4u;
            goto label_1e1be4;
        }
    }
    ctx->pc = 0x1E1BB8u;
label_1e1bb8:
    // 0x1e1bb8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E1BB8u;
    {
        const bool branch_taken_0x1e1bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BB8u;
            // 0x1e1bbc: 0xac821314  sw          $v0, 0x1314($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1bb8) {
            ctx->pc = 0x1E1BE4u;
            goto label_1e1be4;
        }
    }
    ctx->pc = 0x1E1BC0u;
label_1e1bc0:
    // 0x1e1bc0: 0x8c831314  lw          $v1, 0x1314($a0)
    ctx->pc = 0x1e1bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4884)));
    // 0x1e1bc4: 0x8c851310  lw          $a1, 0x1310($a0)
    ctx->pc = 0x1e1bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4880)));
    // 0x1e1bc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1bcc: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x1e1bccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e1bd0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1BD0u;
    {
        const bool branch_taken_0x1e1bd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1bd0) {
            ctx->pc = 0x1E1BE0u;
            goto label_1e1be0;
        }
    }
    ctx->pc = 0x1E1BD8u;
    // 0x1e1bd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E1BD8u;
    {
        const bool branch_taken_0x1e1bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BD8u;
            // 0x1e1bdc: 0xac851314  sw          $a1, 0x1314($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4884), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1bd8) {
            ctx->pc = 0x1E1BE4u;
            goto label_1e1be4;
        }
    }
    ctx->pc = 0x1E1BE0u;
label_1e1be0:
    // 0x1e1be0: 0xac821314  sw          $v0, 0x1314($a0)
    ctx->pc = 0x1e1be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4884), GPR_U32(ctx, 2));
label_1e1be4:
    // 0x1e1be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1be8:
    // 0x1e1be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BF0u;
            // 0x1e1bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1BF8u;
}
