#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_PART_ETCINFO__FP9SPI_STACKi
// Address: 0x252e50 - 0x252ef0
void ps2__MENU_PART_ETCINFO__FP9SPI_STACKi_0x252e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_PART_ETCINFO__FP9SPI_STACKi_0x252e50");
#endif

    switch (ctx->pc) {
        case 0x252e98u: goto label_252e98;
        case 0x252ea4u: goto label_252ea4;
        case 0x252eb4u: goto label_252eb4;
        default: break;
    }

    ctx->pc = 0x252e50u;

    // 0x252e50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x252e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x252e54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x252e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x252e58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x252e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x252e5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x252e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x252e60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252e64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252e68: 0x8f8297c0  lw          $v0, -0x6840($gp)
    ctx->pc = 0x252e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252e6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252E6Cu;
    {
        const bool branch_taken_0x252e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E6Cu;
            // 0x252e70: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e6c) {
            ctx->pc = 0x252E7Cu;
            goto label_252e7c;
        }
    }
    ctx->pc = 0x252E74u;
    // 0x252e74: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x252E74u;
    {
        const bool branch_taken_0x252e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E74u;
            // 0x252e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e74) {
            ctx->pc = 0x252ED4u;
            goto label_252ed4;
        }
    }
    ctx->pc = 0x252E7Cu;
label_252e7c:
    // 0x252e7c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x252E7Cu;
    {
        const bool branch_taken_0x252e7c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x252E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E7Cu;
            // 0x252e80: 0x58043  sra         $s0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e7c) {
            ctx->pc = 0x252E8Cu;
            goto label_252e8c;
        }
    }
    ctx->pc = 0x252E84u;
    // 0x252e84: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x252e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x252e88: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x252e88u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_252e8c:
    // 0x252e8c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x252e8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x252e90: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x252E90u;
    {
        const bool branch_taken_0x252e90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E90u;
            // 0x252e94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e90) {
            ctx->pc = 0x252ED0u;
            goto label_252ed0;
        }
    }
    ctx->pc = 0x252E98u;
label_252e98:
    // 0x252e98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e9c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252E9Cu;
    SET_GPR_U32(ctx, 31, 0x252EA4u);
    ctx->pc = 0x252EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252E9Cu;
            // 0x252ea0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252EA4u; }
        if (ctx->pc != 0x252EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252EA4u; }
        if (ctx->pc != 0x252EA4u) { return; }
    }
    ctx->pc = 0x252EA4u;
label_252ea4:
    // 0x252ea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ea8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x252ea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252eac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252EACu;
    SET_GPR_U32(ctx, 31, 0x252EB4u);
    ctx->pc = 0x252EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252EACu;
            // 0x252eb0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252EB4u; }
        if (ctx->pc != 0x252EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252EB4u; }
        if (ctx->pc != 0x252EB4u) { return; }
    }
    ctx->pc = 0x252EB4u;
label_252eb4:
    // 0x252eb4: 0x8f8497c0  lw          $a0, -0x6840($gp)
    ctx->pc = 0x252eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252eb8: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x252eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x252ebc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x252ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x252ec0: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x252ec0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x252ec4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x252ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x252ec8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x252EC8u;
    {
        const bool branch_taken_0x252ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252EC8u;
            // 0x252ecc: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ec8) {
            ctx->pc = 0x252E98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252e98;
        }
    }
    ctx->pc = 0x252ED0u;
label_252ed0:
    // 0x252ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252ed4:
    // 0x252ed4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x252ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252ed8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x252ed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252edc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x252edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252ee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x252EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252EE8u;
            // 0x252eec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252EF0u;
}
