#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9mgCMemoryFv
// Address: 0x146260 - 0x146288
void ps2___ct__9mgCMemoryFv_0x146260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9mgCMemoryFv_0x146260");
#endif

    switch (ctx->pc) {
        case 0x146274u: goto label_146274;
        default: break;
    }

    ctx->pc = 0x146260u;

    // 0x146260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14626c: 0xc04e640  jal         func_139900
    ctx->pc = 0x14626Cu;
    SET_GPR_U32(ctx, 31, 0x146274u);
    ctx->pc = 0x146270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14626Cu;
            // 0x146270: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146274u; }
        if (ctx->pc != 0x146274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146274u; }
        if (ctx->pc != 0x146274u) { return; }
    }
    ctx->pc = 0x146274u;
label_146274:
    // 0x146274: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14627c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14627cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146280: 0x3e00008  jr          $ra
    ctx->pc = 0x146280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146280u;
            // 0x146284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146288u;
}
