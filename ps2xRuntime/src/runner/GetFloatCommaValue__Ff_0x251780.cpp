#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFloatCommaValue__Ff
// Address: 0x251780 - 0x2517b0
void GetFloatCommaValue__Ff_0x251780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFloatCommaValue__Ff_0x251780");
#endif

    switch (ctx->pc) {
        case 0x251794u: goto label_251794;
        default: break;
    }

    ctx->pc = 0x251780u;

    // 0x251780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251788: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x251788u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25178c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x25178Cu;
    SET_GPR_U32(ctx, 31, 0x251794u);
    ctx->pc = 0x251790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25178Cu;
            // 0x251790: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251794u; }
        if (ctx->pc != 0x251794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251794u; }
        if (ctx->pc != 0x251794u) { return; }
    }
    ctx->pc = 0x251794u;
label_251794:
    // 0x251794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25179c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25179cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2517a0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2517a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2517a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2517a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2517a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2517A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2517ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2517A8u;
            // 0x2517ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2517B0u;
}
