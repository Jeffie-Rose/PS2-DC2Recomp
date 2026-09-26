#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadExecPS2
// Address: 0x118f68 - 0x118fb0
void LoadExecPS2_0x118f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadExecPS2_0x118f68");
#endif

    switch (ctx->pc) {
        case 0x118f8cu: goto label_118f8c;
        default: break;
    }

    ctx->pc = 0x118f68u;

    // 0x118f68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118f6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118f70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118f74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x118f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118f7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x118f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118f84: 0xc0463c0  jal         func_118F00
    ctx->pc = 0x118F84u;
    SET_GPR_U32(ctx, 31, 0x118F8Cu);
    ctx->pc = 0x118F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118F84u;
            // 0x118f88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118F00u;
    if (runtime->hasFunction(0x118F00u)) {
        auto targetFn = runtime->lookupFunction(0x118F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F8Cu; }
        if (ctx->pc != 0x118F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateLibrary_0x118f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F8Cu; }
        if (ctx->pc != 0x118F8Cu) { return; }
    }
    ctx->pc = 0x118F8Cu;
label_118f8c:
    // 0x118f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x118f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x118f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118f9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118fa0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118fa8: 0x8043f48  j           func_10FD20
    ctx->pc = 0x118FA8u;
    ctx->pc = 0x118FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118FA8u;
            // 0x118fac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FD20u;
    if (runtime->hasFunction(0x10FD20u)) {
        auto targetFn = runtime->lookupFunction(0x10FD20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__LoadExecPS2_0x10fd20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x118FB0u;
}
