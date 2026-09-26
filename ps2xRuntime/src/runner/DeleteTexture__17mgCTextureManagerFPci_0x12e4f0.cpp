#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteTexture__17mgCTextureManagerFPci
// Address: 0x12e4f0 - 0x12e534
void DeleteTexture__17mgCTextureManagerFPci_0x12e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteTexture__17mgCTextureManagerFPci_0x12e4f0");
#endif

    switch (ctx->pc) {
        case 0x12e508u: goto label_12e508;
        case 0x12e520u: goto label_12e520;
        default: break;
    }

    ctx->pc = 0x12e4f0u;

    // 0x12e4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12e4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e4fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e500: 0xc04b414  jal         func_12D050
    ctx->pc = 0x12E500u;
    SET_GPR_U32(ctx, 31, 0x12E508u);
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E508u; }
        if (ctx->pc != 0x12E508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E508u; }
        if (ctx->pc != 0x12E508u) { return; }
    }
    ctx->pc = 0x12E508u;
label_12e508:
    // 0x12e508: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e50c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E50Cu;
    {
        const bool branch_taken_0x12e50c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e50c) {
            ctx->pc = 0x12E520u;
            goto label_12e520;
        }
    }
    ctx->pc = 0x12E514u;
    // 0x12e514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e518: 0xc04b910  jal         func_12E440
    ctx->pc = 0x12E518u;
    SET_GPR_U32(ctx, 31, 0x12E520u);
    ctx->pc = 0x12E440u;
    if (runtime->hasFunction(0x12E440u)) {
        auto targetFn = runtime->lookupFunction(0x12E440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E520u; }
        if (ctx->pc != 0x12E520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexture__17mgCTextureManagerFP10mgCTexture_0x12e440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E520u; }
        if (ctx->pc != 0x12E520u) { return; }
    }
    ctx->pc = 0x12E520u;
label_12e520:
    // 0x12e520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e528: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12e528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12e52c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E534u;
}
