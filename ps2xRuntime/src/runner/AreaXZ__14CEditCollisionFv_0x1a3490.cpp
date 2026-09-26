#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AreaXZ__14CEditCollisionFv
// Address: 0x1a3490 - 0x1a3538
void AreaXZ__14CEditCollisionFv_0x1a3490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AreaXZ__14CEditCollisionFv_0x1a3490");
#endif

    switch (ctx->pc) {
        case 0x1a34b4u: goto label_1a34b4;
        default: break;
    }

    ctx->pc = 0x1a3490u;

    // 0x1a3490: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x1a3490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1a3494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3498: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a3498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a349c: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1a349cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a34a0: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A34A0u;
    {
        const bool branch_taken_0x1a34a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A34A0u;
            // 0x1a34a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34a0) {
            ctx->pc = 0x1A352Cu;
            goto label_1a352c;
        }
    }
    ctx->pc = 0x1A34A8u;
    // 0x1a34a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a34ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a34acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a34b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1a34b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1a34b4:
    // 0x1a34b4: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x1a34b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a34b8: 0xc4650018  lwc1        $f5, 0x18($v1)
    ctx->pc = 0x1a34b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a34bc: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x1a34bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a34c0: 0xc4680008  lwc1        $f8, 0x8($v1)
    ctx->pc = 0x1a34c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a34c4: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1a34c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a34c8: 0xc4690020  lwc1        $f9, 0x20($v1)
    ctx->pc = 0x1a34c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a34cc: 0x460038c7  neg.s       $f3, $f7
    ctx->pc = 0x1a34ccu;
    ctx->f[3] = FPU_NEG_S(ctx->f[7]);
    // 0x1a34d0: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x1a34d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1a34d4: 0x460020c7  neg.s       $f3, $f4
    ctx->pc = 0x1a34d4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[4]);
    // 0x1a34d8: 0x4608211c  madd.s      $f4, $f4, $f8
    ctx->pc = 0x1a34d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x1a34dc: 0x4606181a  mula.s      $f3, $f6
    ctx->pc = 0x1a34dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x1a34e0: 0x460548dc  madd.s      $f3, $f9, $f5
    ctx->pc = 0x1a34e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[5]));
    // 0x1a34e4: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x1a34e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1a34e8: 0x460048c7  neg.s       $f3, $f9
    ctx->pc = 0x1a34e8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[9]);
    // 0x1a34ec: 0x4608181a  mula.s      $f3, $f8
    ctx->pc = 0x1a34ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x1a34f0: 0x460638dc  madd.s      $f3, $f7, $f6
    ctx->pc = 0x1a34f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
    // 0x1a34f4: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x1a34f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1a34f8: 0x460410c2  mul.s       $f3, $f2, $f4
    ctx->pc = 0x1a34f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a34fc: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1a34fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3500: 0x0  nop
    ctx->pc = 0x1a3500u;
    // NOP
    // 0x1a3504: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3504u;
    {
        const bool branch_taken_0x1a3504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3504) {
            ctx->pc = 0x1A3514u;
            goto label_1a3514;
        }
    }
    ctx->pc = 0x1A350Cu;
    // 0x1a350c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A350Cu;
    {
        const bool branch_taken_0x1a350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A350Cu;
            // 0x1a3510: 0x460018c7  neg.s       $f3, $f3 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a350c) {
            ctx->pc = 0x1A3518u;
            goto label_1a3518;
        }
    }
    ctx->pc = 0x1A3514u;
label_1a3514:
    // 0x1a3514: 0x0  nop
    ctx->pc = 0x1a3514u;
    // NOP
label_1a3518:
    // 0x1a3518: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a3518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a351c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a351cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a3520: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1a3520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a3524: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1A3524u;
    {
        const bool branch_taken_0x1a3524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3524u;
            // 0x1a3528: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3524) {
            ctx->pc = 0x1A34B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a34b4;
        }
    }
    ctx->pc = 0x1A352Cu;
label_1a352c:
    // 0x1a352c: 0x0  nop
    ctx->pc = 0x1a352cu;
    // NOP
    // 0x1a3530: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3538u;
}
