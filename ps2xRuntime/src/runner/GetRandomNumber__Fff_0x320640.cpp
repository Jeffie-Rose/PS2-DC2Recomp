#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRandomNumber__Fff
// Address: 0x320640 - 0x320674
void GetRandomNumber__Fff_0x320640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRandomNumber__Fff_0x320640");
#endif

    switch (ctx->pc) {
        case 0x320650u: goto label_320650;
        default: break;
    }

    ctx->pc = 0x320640u;

    // 0x320640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320648: 0xc0c817c  jal         func_3205F0
    ctx->pc = 0x320648u;
    SET_GPR_U32(ctx, 31, 0x320650u);
    ctx->pc = 0x3205F0u;
    if (runtime->hasFunction(0x3205F0u)) {
        auto targetFn = runtime->lookupFunction(0x3205F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320650u; }
        if (ctx->pc != 0x320650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        nrnd__Fv_0x3205f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320650u; }
        if (ctx->pc != 0x320650u) { return; }
    }
    ctx->pc = 0x320650u;
label_320650:
    // 0x320650: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x320650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x320654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320658: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x320658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32065c: 0x0  nop
    ctx->pc = 0x32065cu;
    // NOP
    // 0x320660: 0x46016843  div.s       $f1, $f13, $f1
    ctx->pc = 0x320660u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[13], ctx->f[1]); }
    // 0x320664: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x320664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x320668: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x320668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x32066c: 0x3e00008  jr          $ra
    ctx->pc = 0x32066Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32066Cu;
            // 0x320670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x320674u;
}
