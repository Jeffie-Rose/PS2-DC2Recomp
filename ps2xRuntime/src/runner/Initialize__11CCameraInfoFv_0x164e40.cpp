#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CCameraInfoFv
// Address: 0x164e40 - 0x164f08
void Initialize__11CCameraInfoFv_0x164e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CCameraInfoFv_0x164e40");
#endif

    switch (ctx->pc) {
        case 0x164e64u: goto label_164e64;
        case 0x164e70u: goto label_164e70;
        case 0x164e98u: goto label_164e98;
        case 0x164ed0u: goto label_164ed0;
        default: break;
    }

    ctx->pc = 0x164e40u;

    // 0x164e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x164e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x164e44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x164e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x164e48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x164e4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164e50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x164e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164e58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x164e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e5c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x164e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x164e60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164e64:
    // 0x164e64: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x164e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x164e68: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x164E68u;
    SET_GPR_U32(ctx, 31, 0x164E70u);
    ctx->pc = 0x164E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E68u;
            // 0x164e6c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E70u; }
        if (ctx->pc != 0x164E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E70u; }
        if (ctx->pc != 0x164E70u) { return; }
    }
    ctx->pc = 0x164E70u;
label_164e70:
    // 0x164e70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x164e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x164e74: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x164e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x164e78: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x164e78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x164e7c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x164E7Cu;
    {
        const bool branch_taken_0x164e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164e7c) {
            ctx->pc = 0x164E64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164e64;
        }
    }
    ctx->pc = 0x164E84u;
    // 0x164e84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x164e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164e88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x164e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e8c: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x164e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x164e90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164E90u;
    {
        const bool branch_taken_0x164e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E90u;
            // 0x164e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e90) {
            ctx->pc = 0x164EA4u;
            goto label_164ea4;
        }
    }
    ctx->pc = 0x164E98u;
label_164e98:
    // 0x164e98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x164e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x164e9c: 0xac600094  sw          $zero, 0x94($v1)
    ctx->pc = 0x164e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 0));
    // 0x164ea0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x164ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_164ea4:
    // 0x164ea4: 0x0  nop
    ctx->pc = 0x164ea4u;
    // NOP
    // 0x164ea8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x164ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x164eac: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x164eacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x164eb0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x164EB0u;
    {
        const bool branch_taken_0x164eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EB0u;
            // 0x164eb4: 0x2051821  addu        $v1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164eb0) {
            ctx->pc = 0x164E98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164e98;
        }
    }
    ctx->pc = 0x164EB8u;
    // 0x164eb8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x164eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ec0: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x164ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x164ec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ec8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164EC8u;
    {
        const bool branch_taken_0x164ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EC8u;
            // 0x164ecc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ec8) {
            ctx->pc = 0x164EE0u;
            goto label_164ee0;
        }
    }
    ctx->pc = 0x164ED0u;
label_164ed0:
    // 0x164ed0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x164ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x164ed4: 0xac6000ac  sw          $zero, 0xAC($v1)
    ctx->pc = 0x164ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 0));
    // 0x164ed8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x164ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x164edc: 0xac6400a8  sw          $a0, 0xA8($v1)
    ctx->pc = 0x164edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 4));
label_164ee0:
    // 0x164ee0: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x164ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x164ee4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x164ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x164ee8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x164EE8u;
    {
        const bool branch_taken_0x164ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EE8u;
            // 0x164eec: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ee8) {
            ctx->pc = 0x164ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164ed0;
        }
    }
    ctx->pc = 0x164EF0u;
    // 0x164ef0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x164ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164ef4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164f00: 0x3e00008  jr          $ra
    ctx->pc = 0x164F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F00u;
            // 0x164f04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F08u;
}
