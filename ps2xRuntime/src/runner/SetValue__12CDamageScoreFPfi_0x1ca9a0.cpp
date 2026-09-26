#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetValue__12CDamageScoreFPfi
// Address: 0x1ca9a0 - 0x1caa3c
void SetValue__12CDamageScoreFPfi_0x1ca9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetValue__12CDamageScoreFPfi_0x1ca9a0");
#endif

    switch (ctx->pc) {
        case 0x1ca9c0u: goto label_1ca9c0;
        case 0x1ca9e8u: goto label_1ca9e8;
        case 0x1ca9f0u: goto label_1ca9f0;
        case 0x1caa08u: goto label_1caa08;
        default: break;
    }

    ctx->pc = 0x1ca9a0u;

    // 0x1ca9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca9b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ca9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9b8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1CA9B8u;
    SET_GPR_U32(ctx, 31, 0x1CA9C0u);
    ctx->pc = 0x1CA9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9B8u;
            // 0x1ca9bc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9C0u; }
        if (ctx->pc != 0x1CA9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9C0u; }
        if (ctx->pc != 0x1CA9C0u) { return; }
    }
    ctx->pc = 0x1CA9C0u;
label_1ca9c0:
    // 0x1ca9c0: 0xa600004e  sh          $zero, 0x4E($s0)
    ctx->pc = 0x1ca9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ca9c4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ca9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1ca9c8: 0xa6000050  sh          $zero, 0x50($s0)
    ctx->pc = 0x1ca9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ca9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca9d0: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1ca9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x1ca9d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ca9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9d8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1ca9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ca9dc: 0x24a56c70  addiu       $a1, $a1, 0x6C70
    ctx->pc = 0x1ca9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27760));
    // 0x1ca9e0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1CA9E0u;
    SET_GPR_U32(ctx, 31, 0x1CA9E8u);
    ctx->pc = 0x1CA9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9E0u;
            // 0x1ca9e4: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9E8u; }
        if (ctx->pc != 0x1CA9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9E8u; }
        if (ctx->pc != 0x1CA9E8u) { return; }
    }
    ctx->pc = 0x1CA9E8u;
label_1ca9e8:
    // 0x1ca9e8: 0xc04a422  jal         func_129088
    ctx->pc = 0x1CA9E8u;
    SET_GPR_U32(ctx, 31, 0x1CA9F0u);
    ctx->pc = 0x1CA9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9E8u;
            // 0x1ca9ec: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9F0u; }
        if (ctx->pc != 0x1CA9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9F0u; }
        if (ctx->pc != 0x1CA9F0u) { return; }
    }
    ctx->pc = 0x1CA9F0u;
label_1ca9f0:
    // 0x1ca9f0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1ca9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1ca9f4: 0xa6020052  sh          $v0, 0x52($s0)
    ctx->pc = 0x1ca9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ca9f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAA00u;
    {
        const bool branch_taken_0x1caa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA00u;
            // 0x1caa04: 0x34640fdb  ori         $a0, $v1, 0xFDB (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa00) {
            ctx->pc = 0x1CAA14u;
            goto label_1caa14;
        }
    }
    ctx->pc = 0x1CAA08u;
label_1caa08:
    // 0x1caa08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1caa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1caa0c: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x1caa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x1caa10: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1caa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1caa14:
    // 0x1caa14: 0x0  nop
    ctx->pc = 0x1caa14u;
    // NOP
    // 0x1caa18: 0x86030052  lh          $v1, 0x52($s0)
    ctx->pc = 0x1caa18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x1caa1c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1caa1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1caa20: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CAA20u;
    {
        const bool branch_taken_0x1caa20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA20u;
            // 0x1caa24: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa20) {
            ctx->pc = 0x1CAA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1caa08;
        }
    }
    ctx->pc = 0x1CAA28u;
    // 0x1caa28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1caa28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1caa2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1caa2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caa30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1caa30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caa34: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA34u;
            // 0x1caa38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAA3Cu;
}
