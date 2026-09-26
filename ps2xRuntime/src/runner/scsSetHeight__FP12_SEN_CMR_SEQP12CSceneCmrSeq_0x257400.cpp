#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetHeight__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257400 - 0x257420
void scsSetHeight__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetHeight__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257400");
#endif

    ctx->pc = 0x257400u;

    // 0x257400: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x257400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257408: 0xc4a00064  lwc1        $f0, 0x64($a1)
    ctx->pc = 0x257408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25740c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25740cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257410: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x257410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x257414: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x257414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257418: 0x3e00008  jr          $ra
    ctx->pc = 0x257418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25741Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257418u;
            // 0x25741c: 0xe4a00074  swc1        $f0, 0x74($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257420u;
}
