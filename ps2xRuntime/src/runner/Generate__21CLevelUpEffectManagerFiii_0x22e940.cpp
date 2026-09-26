#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Generate__21CLevelUpEffectManagerFiii
// Address: 0x22e940 - 0x22e9f4
void Generate__21CLevelUpEffectManagerFiii_0x22e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Generate__21CLevelUpEffectManagerFiii_0x22e940");
#endif

    switch (ctx->pc) {
        case 0x22e978u: goto label_22e978;
        case 0x22e984u: goto label_22e984;
        case 0x22e9b4u: goto label_22e9b4;
        default: break;
    }

    ctx->pc = 0x22e940u;

    // 0x22e940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22e944: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22e944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22e948: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22e948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22e94c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22e94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22e950: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22e950u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e954: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22e954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22e958: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22e958u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e95c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22e960: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22e960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e964: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e968: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22e968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e96c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22e970: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22e970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e974: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e978:
    // 0x22e978: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x22e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x22e97c: 0xc08b908  jal         func_22E420
    ctx->pc = 0x22E97Cu;
    SET_GPR_U32(ctx, 31, 0x22E984u);
    ctx->pc = 0x22E980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E97Cu;
            // 0x22e980: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E420u;
    if (runtime->hasFunction(0x22E420u)) {
        auto targetFn = runtime->lookupFunction(0x22E420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E984u; }
        if (ctx->pc != 0x22E984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRun__14CLevelUpEffectFv_0x22e420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E984u; }
        if (ctx->pc != 0x22E984u) { return; }
    }
    ctx->pc = 0x22E984u;
label_22e984:
    // 0x22e984: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22E984u;
    {
        const bool branch_taken_0x22e984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e984) {
            ctx->pc = 0x22E9BCu;
            goto label_22e9bc;
        }
    }
    ctx->pc = 0x22E98Cu;
    // 0x22e98c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x22e98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x22e990: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x22e990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x22e994: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22e994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22e998: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22e998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e99c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22e9a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22e9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9a4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x22e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x22e9a8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x22e9a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9ac: 0xc08b890  jal         func_22E240
    ctx->pc = 0x22E9ACu;
    SET_GPR_U32(ctx, 31, 0x22E9B4u);
    ctx->pc = 0x22E9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9ACu;
            // 0x22e9b0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E240u;
    if (runtime->hasFunction(0x22E240u)) {
        auto targetFn = runtime->lookupFunction(0x22E240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E9B4u; }
        if (ctx->pc != 0x22E9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__14CLevelUpEffectFP10mgCTextureiii_0x22e240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E9B4u; }
        if (ctx->pc != 0x22E9B4u) { return; }
    }
    ctx->pc = 0x22E9B4u;
label_22e9b4:
    // 0x22e9b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22E9B4u;
    {
        const bool branch_taken_0x22e9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e9b4) {
            ctx->pc = 0x22E9CCu;
            goto label_22e9cc;
        }
    }
    ctx->pc = 0x22E9BCu;
label_22e9bc:
    // 0x22e9bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22e9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22e9c0: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x22e9c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22e9c4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x22E9C4u;
    {
        const bool branch_taken_0x22e9c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9C4u;
            // 0x22e9c8: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9c4) {
            ctx->pc = 0x22E978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e978;
        }
    }
    ctx->pc = 0x22E9CCu;
label_22e9cc:
    // 0x22e9cc: 0x0  nop
    ctx->pc = 0x22e9ccu;
    // NOP
    // 0x22e9d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22e9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22e9d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22e9d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22e9d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22e9d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e9dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22e9dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e9e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e9e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e9e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e9e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x22E9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9ECu;
            // 0x22e9f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E9F4u;
}
