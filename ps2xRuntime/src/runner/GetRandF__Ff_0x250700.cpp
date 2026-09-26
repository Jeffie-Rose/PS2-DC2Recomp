#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRandF__Ff
// Address: 0x250700 - 0x250728
void GetRandF__Ff_0x250700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRandF__Ff_0x250700");
#endif

    switch (ctx->pc) {
        case 0x250714u: goto label_250714;
        default: break;
    }

    ctx->pc = 0x250700u;

    // 0x250700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x250704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x250708: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x250708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25070c: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x25070Cu;
    SET_GPR_U32(ctx, 31, 0x250714u);
    ctx->pc = 0x250710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25070Cu;
            // 0x250710: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250714u; }
        if (ctx->pc != 0x250714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250714u; }
        if (ctx->pc != 0x250714u) { return; }
    }
    ctx->pc = 0x250714u;
label_250714:
    // 0x250714: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x250714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x250718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25071c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250720: 0x3e00008  jr          $ra
    ctx->pc = 0x250720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250720u;
            // 0x250724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x250728u;
}
