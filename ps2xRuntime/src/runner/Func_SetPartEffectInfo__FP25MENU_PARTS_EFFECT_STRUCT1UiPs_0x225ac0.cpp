#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Func_SetPartEffectInfo__FP25MENU_PARTS_EFFECT_STRUCT1UiPs
// Address: 0x225ac0 - 0x225b1c
void Func_SetPartEffectInfo__FP25MENU_PARTS_EFFECT_STRUCT1UiPs_0x225ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Func_SetPartEffectInfo__FP25MENU_PARTS_EFFECT_STRUCT1UiPs_0x225ac0");
#endif

    switch (ctx->pc) {
        case 0x225ad8u: goto label_225ad8;
        default: break;
    }

    ctx->pc = 0x225ac0u;

    // 0x225ac0: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x225AC0u;
    {
        const bool branch_taken_0x225ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x225ac0) {
            ctx->pc = 0x225B14u;
            goto label_225b14;
        }
    }
    ctx->pc = 0x225AC8u;
    // 0x225ac8: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x225ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x225acc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x225ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225ad8:
    // 0x225ad8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x225ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x225adc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x225ae0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x225AE0u;
    {
        const bool branch_taken_0x225ae0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225AE0u;
            // 0x225ae4: 0x24690004  addiu       $t1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ae0) {
            ctx->pc = 0x225B00u;
            goto label_225b00;
        }
    }
    ctx->pc = 0x225AE8u;
    // 0x225ae8: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x225ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x225aec: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x225aecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225af0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225af4: 0x0  nop
    ctx->pc = 0x225af4u;
    // NOP
    // 0x225af8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225afc: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x225afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_225b00:
    // 0x225b00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x225b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x225b04: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x225b04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x225b08: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x225b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x225b0c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x225B0Cu;
    {
        const bool branch_taken_0x225b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x225B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225B0Cu;
            // 0x225b10: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b0c) {
            ctx->pc = 0x225AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225ad8;
        }
    }
    ctx->pc = 0x225B14u;
label_225b14:
    // 0x225b14: 0x3e00008  jr          $ra
    ctx->pc = 0x225B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225B1Cu;
}
