#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadIMGFile__11CMdsListSetFPcP15mgCEnterIMGInfoP9mgCMemory
// Address: 0x168e30 - 0x168f00
void LoadIMGFile__11CMdsListSetFPcP15mgCEnterIMGInfoP9mgCMemory_0x168e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadIMGFile__11CMdsListSetFPcP15mgCEnterIMGInfoP9mgCMemory_0x168e30");
#endif

    switch (ctx->pc) {
        case 0x168e6cu: goto label_168e6c;
        case 0x168e90u: goto label_168e90;
        case 0x168ee0u: goto label_168ee0;
        default: break;
    }

    ctx->pc = 0x168e30u;

    // 0x168e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168e34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x168e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x168e38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x168e3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168e40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x168e40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168e48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x168e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168e50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x168e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e54: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x168E54u;
    {
        const bool branch_taken_0x168e54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x168E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E54u;
            // 0x168e58: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e54) {
            ctx->pc = 0x168E64u;
            goto label_168e64;
        }
    }
    ctx->pc = 0x168E5Cu;
    // 0x168e5c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x168E5Cu;
    {
        const bool branch_taken_0x168e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E5Cu;
            // 0x168e60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e5c) {
            ctx->pc = 0x168EE4u;
            goto label_168ee4;
        }
    }
    ctx->pc = 0x168E64u;
label_168e64:
    // 0x168e64: 0xc05a3cc  jal         func_168F30
    ctx->pc = 0x168E64u;
    SET_GPR_U32(ctx, 31, 0x168E6Cu);
    ctx->pc = 0x168F30u;
    if (runtime->hasFunction(0x168F30u)) {
        auto targetFn = runtime->lookupFunction(0x168F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E6Cu; }
        if (ctx->pc != 0x168E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchIMGList__11CMdsListSetFPc_0x168f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E6Cu; }
        if (ctx->pc != 0x168E6Cu) { return; }
    }
    ctx->pc = 0x168E6Cu;
label_168e6c:
    // 0x168e6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168E6Cu;
    {
        const bool branch_taken_0x168e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E6Cu;
            // 0x168e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e6c) {
            ctx->pc = 0x168E7Cu;
            goto label_168e7c;
        }
    }
    ctx->pc = 0x168E74u;
    // 0x168e74: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x168E74u;
    {
        const bool branch_taken_0x168e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E74u;
            // 0x168e78: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e74) {
            ctx->pc = 0x168EE8u;
            goto label_168ee8;
        }
    }
    ctx->pc = 0x168E7Cu;
label_168e7c:
    // 0x168e7c: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x168e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x168e80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x168E88u;
    {
        const bool branch_taken_0x168e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E88u;
            // 0x168e8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e88) {
            ctx->pc = 0x168EB8u;
            goto label_168eb8;
        }
    }
    ctx->pc = 0x168E90u;
label_168e90:
    // 0x168e90: 0x8ce20094  lw          $v0, 0x94($a3)
    ctx->pc = 0x168e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x168e94: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x168e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x168e98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x168e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x168e9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x168e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168ea0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x168EA0u;
    {
        const bool branch_taken_0x168ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ea0) {
            ctx->pc = 0x168EACu;
            goto label_168eac;
        }
    }
    ctx->pc = 0x168EA8u;
    // 0x168ea8: 0x24e40094  addiu       $a0, $a3, 0x94
    ctx->pc = 0x168ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 148));
label_168eac:
    // 0x168eac: 0x0  nop
    ctx->pc = 0x168eacu;
    // NOP
    // 0x168eb0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x168eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x168eb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x168eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_168eb8:
    // 0x168eb8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x168eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168ebc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x168EBCu;
    {
        const bool branch_taken_0x168ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168EBCu;
            // 0x168ec0: 0x2663821  addu        $a3, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ebc) {
            ctx->pc = 0x168E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168e90;
        }
    }
    ctx->pc = 0x168EC4u;
    // 0x168ec4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168EC4u;
    {
        const bool branch_taken_0x168ec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x168EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168EC4u;
            // 0x168ec8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ec4) {
            ctx->pc = 0x168ED4u;
            goto label_168ed4;
        }
    }
    ctx->pc = 0x168ECCu;
    // 0x168ecc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x168ECCu;
    {
        const bool branch_taken_0x168ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168ECCu;
            // 0x168ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ecc) {
            ctx->pc = 0x168EE4u;
            goto label_168ee4;
        }
    }
    ctx->pc = 0x168ED4u;
label_168ed4:
    // 0x168ed4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x168ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ed8: 0xc05a4a0  jal         func_169280
    ctx->pc = 0x168ED8u;
    SET_GPR_U32(ctx, 31, 0x168EE0u);
    ctx->pc = 0x168EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168ED8u;
            // 0x168edc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169280u;
    if (runtime->hasFunction(0x169280u)) {
        auto targetFn = runtime->lookupFunction(0x169280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EE0u; }
        if (ctx->pc != 0x168EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadIMGFile__8CIMGListFPcP15mgCEnterIMGInfoP9mgCMemory_0x169280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EE0u; }
        if (ctx->pc != 0x168EE0u) { return; }
    }
    ctx->pc = 0x168EE0u;
label_168ee0:
    // 0x168ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168ee4:
    // 0x168ee4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x168ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_168ee8:
    // 0x168ee8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x168ee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168eec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168ef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x168EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168EF8u;
            // 0x168efc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168F00u;
}
