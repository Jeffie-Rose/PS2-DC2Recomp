#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBuff_Album__18CMemoryCardManagerFPc
// Address: 0x2f19b0 - 0x2f19f8
void SetBuff_Album__18CMemoryCardManagerFPc_0x2f19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBuff_Album__18CMemoryCardManagerFPc_0x2f19b0");
#endif

    switch (ctx->pc) {
        case 0x2f19d0u: goto label_2f19d0;
        case 0x2f19e0u: goto label_2f19e0;
        default: break;
    }

    ctx->pc = 0x2f19b0u;

    // 0x2f19b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f19b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f19b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f19b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f19b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f19b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f19bc: 0xac8508f4  sw          $a1, 0x8F4($a0)
    ctx->pc = 0x2f19bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2292), GPR_U32(ctx, 5));
    // 0x2f19c0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F19C0u;
    {
        const bool branch_taken_0x2f19c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F19C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F19C0u;
            // 0x2f19c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19c0) {
            ctx->pc = 0x2F19E8u;
            goto label_2f19e8;
        }
    }
    ctx->pc = 0x2F19C8u;
    // 0x2f19c8: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2F19C8u;
    SET_GPR_U32(ctx, 31, 0x2F19D0u);
    ctx->pc = 0x2F19CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F19C8u;
            // 0x2f19cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F19D0u; }
        if (ctx->pc != 0x2F19D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F19D0u; }
        if (ctx->pc != 0x2F19D0u) { return; }
    }
    ctx->pc = 0x2F19D0u;
label_2f19d0:
    // 0x2f19d0: 0x8e0408f4  lw          $a0, 0x8F4($s0)
    ctx->pc = 0x2f19d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2292)));
    // 0x2f19d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f19d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19d8: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F19D8u;
    SET_GPR_U32(ctx, 31, 0x2F19E0u);
    ctx->pc = 0x2F19DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F19D8u;
            // 0x2f19dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F19E0u; }
        if (ctx->pc != 0x2F19E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F19E0u; }
        if (ctx->pc != 0x2F19E0u) { return; }
    }
    ctx->pc = 0x2F19E0u;
label_2f19e0:
    // 0x2f19e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f19e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f19e4: 0xae0304c4  sw          $v1, 0x4C4($s0)
    ctx->pc = 0x2f19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 3));
label_2f19e8:
    // 0x2f19e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f19e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f19ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f19ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f19f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F19F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F19F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F19F0u;
            // 0x2f19f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F19F8u;
}
