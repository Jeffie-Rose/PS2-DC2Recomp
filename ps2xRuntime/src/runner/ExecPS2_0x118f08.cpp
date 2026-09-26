#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExecPS2
// Address: 0x118f08 - 0x118f64
void ExecPS2_0x118f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecPS2_0x118f08");
#endif

    switch (ctx->pc) {
        case 0x118f34u: goto label_118f34;
        case 0x118f48u: goto label_118f48;
        default: break;
    }

    ctx->pc = 0x118f08u;

    // 0x118f08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x118f0c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x118f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x118f10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118f14: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x118f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118f1c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x118f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118f24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x118f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x118f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x118f2c: 0xc0463c0  jal         func_118F00
    ctx->pc = 0x118F2Cu;
    SET_GPR_U32(ctx, 31, 0x118F34u);
    ctx->pc = 0x118F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118F2Cu;
            // 0x118f30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118F00u;
    if (runtime->hasFunction(0x118F00u)) {
        auto targetFn = runtime->lookupFunction(0x118F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F34u; }
        if (ctx->pc != 0x118F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateLibrary_0x118f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F34u; }
        if (ctx->pc != 0x118F34u) { return; }
    }
    ctx->pc = 0x118F34u;
label_118f34:
    // 0x118f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x118f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x118f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f40: 0xc043f4c  jal         func_10FD30
    ctx->pc = 0x118F40u;
    SET_GPR_U32(ctx, 31, 0x118F48u);
    ctx->pc = 0x118F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118F40u;
            // 0x118f44: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FD30u;
    if (runtime->hasFunction(0x10FD30u)) {
        auto targetFn = runtime->lookupFunction(0x10FD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F48u; }
        if (ctx->pc != 0x118F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__ExecPS2_0x10fd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F48u; }
        if (ctx->pc != 0x118F48u) { return; }
    }
    ctx->pc = 0x118F48u;
label_118f48:
    // 0x118f48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x118f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118f4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x118f4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118f50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118f50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118f54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x118F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118F5Cu;
            // 0x118f60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118F64u;
}
