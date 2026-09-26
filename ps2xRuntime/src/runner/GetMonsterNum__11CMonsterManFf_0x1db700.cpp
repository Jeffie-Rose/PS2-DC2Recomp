#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterNum__11CMonsterManFf
// Address: 0x1db700 - 0x1db778
void GetMonsterNum__11CMonsterManFf_0x1db700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterNum__11CMonsterManFf_0x1db700");
#endif

    switch (ctx->pc) {
        case 0x1db714u: goto label_1db714;
        default: break;
    }

    ctx->pc = 0x1db700u;

    // 0x1db700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db704: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db708: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db70c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db710: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1db710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1db714:
    // 0x1db714: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1db714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1db718: 0x8c680484  lw          $t0, 0x484($v1)
    ctx->pc = 0x1db718u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1db71c: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DB71Cu;
    {
        const bool branch_taken_0x1db71c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db71c) {
            ctx->pc = 0x1DB75Cu;
            goto label_1db75c;
        }
    }
    ctx->pc = 0x1DB724u;
    // 0x1db724: 0x8503068a  lh          $v1, 0x68A($t0)
    ctx->pc = 0x1db724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 1674)));
    // 0x1db728: 0x1465000c  bne         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DB728u;
    {
        const bool branch_taken_0x1db728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1db728) {
            ctx->pc = 0x1DB75Cu;
            goto label_1db75c;
        }
    }
    ctx->pc = 0x1DB730u;
    // 0x1db730: 0xc50112f4  lwc1        $f1, 0x12F4($t0)
    ctx->pc = 0x1db730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db734: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x1db734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db738: 0x0  nop
    ctx->pc = 0x1db738u;
    // NOP
    // 0x1db73c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB73Cu;
    {
        const bool branch_taken_0x1db73c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db73c) {
            ctx->pc = 0x1DB754u;
            goto label_1db754;
        }
    }
    ctx->pc = 0x1DB744u;
    // 0x1db744: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1db744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db748: 0x0  nop
    ctx->pc = 0x1db748u;
    // NOP
    // 0x1db74c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB74Cu;
    {
        const bool branch_taken_0x1db74c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db74c) {
            ctx->pc = 0x1DB75Cu;
            goto label_1db75c;
        }
    }
    ctx->pc = 0x1DB754u;
label_1db754:
    // 0x1db754: 0x0  nop
    ctx->pc = 0x1db754u;
    // NOP
    // 0x1db758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1db75c:
    // 0x1db75c: 0x0  nop
    ctx->pc = 0x1db75cu;
    // NOP
    // 0x1db760: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1db760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1db764: 0x28c30018  slti        $v1, $a2, 0x18
    ctx->pc = 0x1db764u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1db768: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1DB768u;
    {
        const bool branch_taken_0x1db768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB768u;
            // 0x1db76c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db768) {
            ctx->pc = 0x1DB714u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db714;
        }
    }
    ctx->pc = 0x1DB770u;
    // 0x1db770: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB778u;
}
