#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _copyRefImage
// Address: 0x1098f8 - 0x109958
void _copyRefImage_0x1098f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_copyRefImage_0x1098f8");
#endif

    switch (ctx->pc) {
        case 0x109908u: goto label_109908;
        default: break;
    }

    ctx->pc = 0x1098f8u;

    // 0x1098f8: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x1098f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1098fc: 0x3c0a0011  lui         $t2, 0x11
    ctx->pc = 0x1098fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17 << 16));
    // 0x109900: 0x254a9940  addiu       $t2, $t2, -0x66C0
    ctx->pc = 0x109900u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294940992));
    // 0x109904: 0x794b0000  lq          $t3, 0x0($t2)
    ctx->pc = 0x109904u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_109908:
    // 0x109908: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x109908u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10990c: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x10990cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x109910: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x109910u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x109914: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x109914u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x109918: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x109918u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x10991c: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x10991cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x109920: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x109924: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x109924u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x109928: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x109928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x10992c: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x10992cu;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109930: 0x1580fff5  bnez        $t4, . + 4 + (-0xB << 2)
    ctx->pc = 0x109930u;
    {
        const bool branch_taken_0x109930 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x109934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109930u;
            // 0x109934: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109930) {
            ctx->pc = 0x109908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109908;
        }
    }
    ctx->pc = 0x109938u;
    // 0x109938: 0x0  nop
    ctx->pc = 0x109938u;
    // NOP
    // 0x10993c: 0x0  nop
    ctx->pc = 0x10993cu;
    // NOP
    // 0x109940: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x109940u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x109944: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x109944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x109948: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x109948u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x10994c: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x10994cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x109950: 0x3e00008  jr          $ra
    ctx->pc = 0x109950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109958u;
}
