#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddPas__12CSceneCmrSeqFPfPf
// Address: 0x259f90 - 0x259ff4
void AddPas__12CSceneCmrSeqFPfPf_0x259f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPas__12CSceneCmrSeqFPfPf_0x259f90");
#endif

    switch (ctx->pc) {
        case 0x259fb0u: goto label_259fb0;
        case 0x259fd0u: goto label_259fd0;
        case 0x259fdcu: goto label_259fdc;
        default: break;
    }

    ctx->pc = 0x259f90u;

    // 0x259f90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x259f94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x259f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x259f98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x259f9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259fa0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x259fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259fa4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x259fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259fa8: 0xc096680  jal         func_259A00
    ctx->pc = 0x259FA8u;
    SET_GPR_U32(ctx, 31, 0x259FB0u);
    ctx->pc = 0x259FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259FA8u;
            // 0x259fac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259FB0u; }
        if (ctx->pc != 0x259FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259FB0u; }
        if (ctx->pc != 0x259FB0u) { return; }
    }
    ctx->pc = 0x259FB0u;
label_259fb0:
    // 0x259fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259fb4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x259FB4u;
    {
        const bool branch_taken_0x259fb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x259fb4) {
            ctx->pc = 0x259FDCu;
            goto label_259fdc;
        }
    }
    ctx->pc = 0x259FBCu;
    // 0x259fbc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x259fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x259fc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x259fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259fc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x259fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x259fc8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x259FC8u;
    SET_GPR_U32(ctx, 31, 0x259FD0u);
    ctx->pc = 0x259FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259FC8u;
            // 0x259fcc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259FD0u; }
        if (ctx->pc != 0x259FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259FD0u; }
        if (ctx->pc != 0x259FD0u) { return; }
    }
    ctx->pc = 0x259FD0u;
label_259fd0:
    // 0x259fd0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x259fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x259fd4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x259FD4u;
    SET_GPR_U32(ctx, 31, 0x259FDCu);
    ctx->pc = 0x259FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259FD4u;
            // 0x259fd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259FDCu; }
        if (ctx->pc != 0x259FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259FDCu; }
        if (ctx->pc != 0x259FDCu) { return; }
    }
    ctx->pc = 0x259FDCu;
label_259fdc:
    // 0x259fdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x259fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259fec: 0x3e00008  jr          $ra
    ctx->pc = 0x259FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259FECu;
            // 0x259ff0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259FF4u;
}
