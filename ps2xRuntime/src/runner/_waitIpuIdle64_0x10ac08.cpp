#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _waitIpuIdle64
// Address: 0x10ac08 - 0x10acb8
void _waitIpuIdle64_0x10ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_waitIpuIdle64_0x10ac08");
#endif

    switch (ctx->pc) {
        case 0x10ac68u: goto label_10ac68;
        case 0x10ac7cu: goto label_10ac7c;
        default: break;
    }

    ctx->pc = 0x10ac08u;

    // 0x10ac08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ac08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10ac0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ac14: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10ac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10ac18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10ac1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10ac1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ac24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ac24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ac2c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x10ac2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ac30: 0x481001b  bgez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x10AC30u;
    {
        const bool branch_taken_0x10ac30 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10AC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC30u;
            // 0x10ac34: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac30) {
            ctx->pc = 0x10ACA0u;
            goto label_10aca0;
        }
    }
    ctx->pc = 0x10AC38u;
    // 0x10ac38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac3c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10ac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10ac40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ac44: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10ac44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x10ac48: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x10AC48u;
    {
        const bool branch_taken_0x10ac48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC48u;
            // 0x10ac4c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac48) {
            ctx->pc = 0x10ACA4u;
            goto label_10aca4;
        }
    }
    ctx->pc = 0x10AC50u;
    // 0x10ac50: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x10ac50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac54: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x10ac54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac58: 0x36312000  ori         $s1, $s1, 0x2000
    ctx->pc = 0x10ac58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8192);
    // 0x10ac5c: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x10ac5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
    // 0x10ac60: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10ac60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac64: 0x0  nop
    ctx->pc = 0x10ac64u;
    // NOP
label_10ac68:
    // 0x10ac68: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x10ac68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x10ac6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AC6Cu;
    {
        const bool branch_taken_0x10ac6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC6Cu;
            // 0x10ac70: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac6c) {
            ctx->pc = 0x10AC80u;
            goto label_10ac80;
        }
    }
    ctx->pc = 0x10AC74u;
    // 0x10ac74: 0xc04395e  jal         func_10E578
    ctx->pc = 0x10AC74u;
    SET_GPR_U32(ctx, 31, 0x10AC7Cu);
    ctx->pc = 0x10AC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC74u;
            // 0x10ac78: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E578u;
    if (runtime->hasFunction(0x10E578u)) {
        auto targetFn = runtime->lookupFunction(0x10E578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC7Cu; }
        if (ctx->pc != 0x10AC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x10e578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC7Cu; }
        if (ctx->pc != 0x10AC7Cu) { return; }
    }
    ctx->pc = 0x10AC7Cu;
label_10ac7c:
    // 0x10ac7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ac7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ac80:
    // 0x10ac80: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x10ac80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10ac84: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10AC84u;
    {
        const bool branch_taken_0x10ac84 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10AC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC84u;
            // 0x10ac88: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac84) {
            ctx->pc = 0x10ACA0u;
            goto label_10aca0;
        }
    }
    ctx->pc = 0x10AC8Cu;
    // 0x10ac8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ac90: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x10ac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x10ac94: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10AC94u;
    {
        const bool branch_taken_0x10ac94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC94u;
            // 0x10ac98: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac94) {
            ctx->pc = 0x10AC68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ac68;
        }
    }
    ctx->pc = 0x10AC9Cu;
    // 0x10ac9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10ac9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10aca0:
    // 0x10aca0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10aca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10aca4:
    // 0x10aca4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10aca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10aca8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10aca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10acac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10acacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10acb0: 0x3e00008  jr          $ra
    ctx->pc = 0x10ACB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ACB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ACB0u;
            // 0x10acb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10ACB8u;
}
