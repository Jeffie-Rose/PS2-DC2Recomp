#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSize__6CWaterFiiP9mgCMemory
// Address: 0x184b80 - 0x184c5c
void SetSize__6CWaterFiiP9mgCMemory_0x184b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSize__6CWaterFiiP9mgCMemory_0x184b80");
#endif

    switch (ctx->pc) {
        case 0x184bd0u: goto label_184bd0;
        case 0x184be0u: goto label_184be0;
        case 0x184bf8u: goto label_184bf8;
        default: break;
    }

    ctx->pc = 0x184b80u;

    // 0x184b80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x184b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x184b84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x184b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x184b88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x184b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x184b8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x184b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x184b90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x184b94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x184b94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184b9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x184b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184ba0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x184ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184ba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184ba8: 0x2511818  mult        $v1, $s2, $s1
    ctx->pc = 0x184ba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x184bac: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x184bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bb0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x184BB0u;
    {
        const bool branch_taken_0x184bb0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x184BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184BB0u;
            // 0x184bb4: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bb0) {
            ctx->pc = 0x184BC0u;
            goto label_184bc0;
        }
    }
    ctx->pc = 0x184BB8u;
    // 0x184bb8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x184bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x184bbc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x184bbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_184bc0:
    // 0x184bc0: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x184bc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bc8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x184BC8u;
    SET_GPR_U32(ctx, 31, 0x184BD0u);
    ctx->pc = 0x184BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184BC8u;
            // 0x184bcc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184BD0u; }
        if (ctx->pc != 0x184BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184BD0u; }
        if (ctx->pc != 0x184BD0u) { return; }
    }
    ctx->pc = 0x184BD0u;
label_184bd0:
    // 0x184bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x184bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bd8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x184BD8u;
    SET_GPR_U32(ctx, 31, 0x184BE0u);
    ctx->pc = 0x184BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184BD8u;
            // 0x184bdc: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184BE0u; }
        if (ctx->pc != 0x184BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184BE0u; }
        if (ctx->pc != 0x184BE0u) { return; }
    }
    ctx->pc = 0x184BE0u;
label_184be0:
    // 0x184be0: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x184be0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x184be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184be8: 0xae720054  sw          $s2, 0x54($s3)
    ctx->pc = 0x184be8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 18));
    // 0x184bec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x184BF0u;
    {
        const bool branch_taken_0x184bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184BF0u;
            // 0x184bf4: 0xae710058  sw          $s1, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bf0) {
            ctx->pc = 0x184C18u;
            goto label_184c18;
        }
    }
    ctx->pc = 0x184BF8u;
label_184bf8:
    // 0x184bf8: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x184bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x184bfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x184bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x184c00: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x184c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x184c04: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x184c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x184c08: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x184c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x184c0c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x184c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x184c10: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x184c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x184c14: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x184c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_184c18:
    // 0x184c18: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x184c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x184c1c: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x184c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x184c20: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x184c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x184c24: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x184c24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x184c28: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x184C28u;
    {
        const bool branch_taken_0x184c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184c28) {
            ctx->pc = 0x184BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184bf8;
        }
    }
    ctx->pc = 0x184C30u;
    // 0x184c30: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x184c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x184c34: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x184c34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
    // 0x184c38: 0xae600050  sw          $zero, 0x50($s3)
    ctx->pc = 0x184c38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
    // 0x184c3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x184c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184c40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x184c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184c44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x184c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184c48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184c54: 0x3e00008  jr          $ra
    ctx->pc = 0x184C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C54u;
            // 0x184c58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184C5Cu;
}
