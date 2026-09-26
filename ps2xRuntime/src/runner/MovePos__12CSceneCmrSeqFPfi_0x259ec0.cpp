#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MovePos__12CSceneCmrSeqFPfi
// Address: 0x259ec0 - 0x259f1c
void MovePos__12CSceneCmrSeqFPfi_0x259ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MovePos__12CSceneCmrSeqFPfi_0x259ec0");
#endif

    switch (ctx->pc) {
        case 0x259ee0u: goto label_259ee0;
        case 0x259f00u: goto label_259f00;
        default: break;
    }

    ctx->pc = 0x259ec0u;

    // 0x259ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x259ec4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x259ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x259ec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x259ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259ed0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x259ed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ed4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x259ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ed8: 0xc096680  jal         func_259A00
    ctx->pc = 0x259ED8u;
    SET_GPR_U32(ctx, 31, 0x259EE0u);
    ctx->pc = 0x259EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259ED8u;
            // 0x259edc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259EE0u; }
        if (ctx->pc != 0x259EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259EE0u; }
        if (ctx->pc != 0x259EE0u) { return; }
    }
    ctx->pc = 0x259EE0u;
label_259ee0:
    // 0x259ee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ee4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x259EE4u;
    {
        const bool branch_taken_0x259ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ee4) {
            ctx->pc = 0x259F04u;
            goto label_259f04;
        }
    }
    ctx->pc = 0x259EECu;
    // 0x259eec: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x259eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x259ef0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x259ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ef4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x259ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x259ef8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x259EF8u;
    SET_GPR_U32(ctx, 31, 0x259F00u);
    ctx->pc = 0x259EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259EF8u;
            // 0x259efc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259F00u; }
        if (ctx->pc != 0x259F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259F00u; }
        if (ctx->pc != 0x259F00u) { return; }
    }
    ctx->pc = 0x259F00u;
label_259f00:
    // 0x259f00: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x259f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_259f04:
    // 0x259f04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x259f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259f08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259f0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259f14: 0x3e00008  jr          $ra
    ctx->pc = 0x259F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259F14u;
            // 0x259f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259F1Cu;
}
