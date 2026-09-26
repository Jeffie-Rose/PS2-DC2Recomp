#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartsMaxWidth__14CEditPartsInfoFv
// Address: 0x1b56b0 - 0x1b572c
void GetPartsMaxWidth__14CEditPartsInfoFv_0x1b56b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartsMaxWidth__14CEditPartsInfoFv_0x1b56b0");
#endif

    ctx->pc = 0x1b56b0u;

    // 0x1b56b0: 0xc4850050  lwc1        $f5, 0x50($a0)
    ctx->pc = 0x1b56b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b56b4: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x1b56b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b56b8: 0xc4840054  lwc1        $f4, 0x54($a0)
    ctx->pc = 0x1b56b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b56bc: 0xc4830064  lwc1        $f3, 0x64($a0)
    ctx->pc = 0x1b56bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b56c0: 0xc4820058  lwc1        $f2, 0x58($a0)
    ctx->pc = 0x1b56c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b56c4: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x1b56c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b56c8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1b56c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1b56cc: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x1b56ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1b56d0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1b56d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b56d4: 0x0  nop
    ctx->pc = 0x1b56d4u;
    // NOP
    // 0x1b56d8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1B56D8u;
    {
        const bool branch_taken_0x1b56d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B56DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56D8u;
            // 0x1b56dc: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b56d8) {
            ctx->pc = 0x1B5704u;
            goto label_1b5704;
        }
    }
    ctx->pc = 0x1B56E0u;
    // 0x1b56e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b56e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b56e4: 0x0  nop
    ctx->pc = 0x1b56e4u;
    // NOP
    // 0x1b56e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B56E8u;
    {
        const bool branch_taken_0x1b56e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b56e8) {
            ctx->pc = 0x1B56F8u;
            goto label_1b56f8;
        }
    }
    ctx->pc = 0x1B56F0u;
    // 0x1b56f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B56F0u;
    {
        const bool branch_taken_0x1b56f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56f0) {
            ctx->pc = 0x1B56FCu;
            goto label_1b56fc;
        }
    }
    ctx->pc = 0x1B56F8u;
label_1b56f8:
    // 0x1b56f8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1b56f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1b56fc:
    // 0x1b56fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B56FCu;
    {
        const bool branch_taken_0x1b56fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56fc) {
            ctx->pc = 0x1B5724u;
            goto label_1b5724;
        }
    }
    ctx->pc = 0x1B5704u;
label_1b5704:
    // 0x1b5704: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x1b5704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5708: 0x0  nop
    ctx->pc = 0x1b5708u;
    // NOP
    // 0x1b570c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B570Cu;
    {
        const bool branch_taken_0x1b570c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b570c) {
            ctx->pc = 0x1B571Cu;
            goto label_1b571c;
        }
    }
    ctx->pc = 0x1B5714u;
    // 0x1b5714: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5714u;
    {
        const bool branch_taken_0x1b5714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5714u;
            // 0x1b5718: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5714) {
            ctx->pc = 0x1B5724u;
            goto label_1b5724;
        }
    }
    ctx->pc = 0x1B571Cu;
label_1b571c:
    // 0x1b571c: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x1b571cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x1b5720: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1b5720u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_1b5724:
    // 0x1b5724: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B572Cu;
}
