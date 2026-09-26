#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEvent__FP6CScene
// Address: 0x254fe0 - 0x255014
void InitEvent__FP6CScene_0x254fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEvent__FP6CScene_0x254fe0");
#endif

    switch (ctx->pc) {
        case 0x254ff4u: goto label_254ff4;
        case 0x254ffcu: goto label_254ffc;
        default: break;
    }

    ctx->pc = 0x254fe0u;

    // 0x254fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254fec: 0xc0984c0  jal         func_261300
    ctx->pc = 0x254FECu;
    SET_GPR_U32(ctx, 31, 0x254FF4u);
    ctx->pc = 0x254FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254FECu;
            // 0x254ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261300u;
    if (runtime->hasFunction(0x261300u)) {
        auto targetFn = runtime->lookupFunction(0x261300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254FF4u; }
        if (ctx->pc != 0x254FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventSeqInit__Fv_0x261300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254FF4u; }
        if (ctx->pc != 0x254FF4u) { return; }
    }
    ctx->pc = 0x254FF4u;
label_254ff4:
    // 0x254ff4: 0xc050d98  jal         func_143660
    ctx->pc = 0x254FF4u;
    SET_GPR_U32(ctx, 31, 0x254FFCu);
    ctx->pc = 0x254FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254FF4u;
            // 0x254ff8: 0xaf9097dc  sw          $s0, -0x6824($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940636), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143660u;
    if (runtime->hasFunction(0x143660u)) {
        auto targetFn = runtime->lookupFunction(0x143660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254FFCu; }
        if (ctx->pc != 0x254FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetProjection__Fv_0x143660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254FFCu; }
        if (ctx->pc != 0x254FFCu) { return; }
    }
    ctx->pc = 0x254FFCu;
label_254ffc:
    // 0x254ffc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x254ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x255000: 0xe420e450  swc1        $f0, -0x1BB0($at)
    ctx->pc = 0x255000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960208), bits); }
    // 0x255004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x255004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25500c: 0x3e00008  jr          $ra
    ctx->pc = 0x25500Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25500Cu;
            // 0x255010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255014u;
}
