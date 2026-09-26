#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignMap__6CSceneFiP4CMapPc
// Address: 0x283bb0 - 0x283c90
void AssignMap__6CSceneFiP4CMapPc_0x283bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignMap__6CSceneFiP4CMapPc_0x283bb0");
#endif

    switch (ctx->pc) {
        case 0x283be4u: goto label_283be4;
        case 0x283becu: goto label_283bec;
        case 0x283c30u: goto label_283c30;
        case 0x283c68u: goto label_283c68;
        default: break;
    }

    ctx->pc = 0x283bb0u;

    // 0x283bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x283bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x283bb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x283bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x283bb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x283bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x283bbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x283bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x283bc0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x283bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283bc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283bc8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x283bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283bd0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x283bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283bd4: 0x6610014  bgez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x283BD4u;
    {
        const bool branch_taken_0x283bd4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x283BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283BD4u;
            // 0x283bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bd4) {
            ctx->pc = 0x283C28u;
            goto label_283c28;
        }
    }
    ctx->pc = 0x283BDCu;
    // 0x283bdc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x283BDCu;
    {
        const bool branch_taken_0x283bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283BDCu;
            // 0x283be0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bdc) {
            ctx->pc = 0x283C0Cu;
            goto label_283c0c;
        }
    }
    ctx->pc = 0x283BE4u;
label_283be4:
    // 0x283be4: 0xc0a0ce0  jal         func_283380
    ctx->pc = 0x283BE4u;
    SET_GPR_U32(ctx, 31, 0x283BECu);
    ctx->pc = 0x283BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283BE4u;
            // 0x283be8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283380u;
    if (runtime->hasFunction(0x283380u)) {
        auto targetFn = runtime->lookupFunction(0x283380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283BECu; }
        if (ctx->pc != 0x283BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMap__6CSceneFi_0x283380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283BECu; }
        if (ctx->pc != 0x283BECu) { return; }
    }
    ctx->pc = 0x283BECu;
label_283bec:
    // 0x283bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283BECu;
    {
        const bool branch_taken_0x283bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283bec) {
            ctx->pc = 0x283C08u;
            goto label_283c08;
        }
    }
    ctx->pc = 0x283BF4u;
    // 0x283bf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283bf8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x283bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x283bfc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x283bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x283c00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283C00u;
    {
        const bool branch_taken_0x283c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283c00) {
            ctx->pc = 0x283C20u;
            goto label_283c20;
        }
    }
    ctx->pc = 0x283C08u;
label_283c08:
    // 0x283c08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x283c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_283c0c:
    // 0x283c0c: 0x0  nop
    ctx->pc = 0x283c0cu;
    // NOP
    // 0x283c10: 0x8e0227e0  lw          $v0, 0x27E0($s0)
    ctx->pc = 0x283c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10208)));
    // 0x283c14: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x283c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283c18: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x283C18u;
    {
        const bool branch_taken_0x283c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C18u;
            // 0x283c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c18) {
            ctx->pc = 0x283BE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283be4;
        }
    }
    ctx->pc = 0x283C20u;
label_283c20:
    // 0x283c20: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x283C20u;
    {
        const bool branch_taken_0x283c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C20u;
            // 0x283c24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c20) {
            ctx->pc = 0x283C74u;
            goto label_283c74;
        }
    }
    ctx->pc = 0x283C28u;
label_283c28:
    // 0x283c28: 0xc0a0ce0  jal         func_283380
    ctx->pc = 0x283C28u;
    SET_GPR_U32(ctx, 31, 0x283C30u);
    ctx->pc = 0x283380u;
    if (runtime->hasFunction(0x283380u)) {
        auto targetFn = runtime->lookupFunction(0x283380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283C30u; }
        if (ctx->pc != 0x283C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMap__6CSceneFi_0x283380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283C30u; }
        if (ctx->pc != 0x283C30u) { return; }
    }
    ctx->pc = 0x283C30u;
label_283c30:
    // 0x283c30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283C30u;
    {
        const bool branch_taken_0x283c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283c30) {
            ctx->pc = 0x283C40u;
            goto label_283c40;
        }
    }
    ctx->pc = 0x283C38u;
    // 0x283c38: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x283C38u;
    {
        const bool branch_taken_0x283c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C38u;
            // 0x283c3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c38) {
            ctx->pc = 0x283C74u;
            goto label_283c74;
        }
    }
    ctx->pc = 0x283C40u;
label_283c40:
    // 0x283c40: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x283C40u;
    {
        const bool branch_taken_0x283c40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x283c40) {
            ctx->pc = 0x283C4Cu;
            goto label_283c4c;
        }
    }
    ctx->pc = 0x283C48u;
    // 0x283c48: 0x27918410  addiu       $s1, $gp, -0x7BF0
    ctx->pc = 0x283c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935568));
label_283c4c:
    // 0x283c4c: 0x8e032e5c  lw          $v1, 0x2E5C($s0)
    ctx->pc = 0x283c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11868)));
    // 0x283c50: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x283C50u;
    {
        const bool branch_taken_0x283c50 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x283C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C50u;
            // 0x283c54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c50) {
            ctx->pc = 0x283C5Cu;
            goto label_283c5c;
        }
    }
    ctx->pc = 0x283C58u;
    // 0x283c58: 0xae132e5c  sw          $s3, 0x2E5C($s0)
    ctx->pc = 0x283c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11868), GPR_U32(ctx, 19));
label_283c5c:
    // 0x283c5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x283c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283c60: 0xc0a0adc  jal         func_282B70
    ctx->pc = 0x283C60u;
    SET_GPR_U32(ctx, 31, 0x283C68u);
    ctx->pc = 0x283C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283C60u;
            // 0x283c64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B70u;
    if (runtime->hasFunction(0x282B70u)) {
        auto targetFn = runtime->lookupFunction(0x282B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283C68u; }
        if (ctx->pc != 0x283C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignData__9CSceneMapFP4CMapPc_0x282b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283C68u; }
        if (ctx->pc != 0x283C68u) { return; }
    }
    ctx->pc = 0x283C68u;
label_283c68:
    // 0x283c68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x283C68u;
    {
        const bool branch_taken_0x283c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C68u;
            // 0x283c6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c68) {
            ctx->pc = 0x283C74u;
            goto label_283c74;
        }
    }
    ctx->pc = 0x283C70u;
    // 0x283c70: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x283c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283c74:
    // 0x283c74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x283c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283c78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x283c78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283c7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283c88: 0x3e00008  jr          $ra
    ctx->pc = 0x283C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C88u;
            // 0x283c8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283C90u;
}
