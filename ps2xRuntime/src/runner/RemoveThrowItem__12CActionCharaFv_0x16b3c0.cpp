#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RemoveThrowItem__12CActionCharaFv
// Address: 0x16b3c0 - 0x16b41c
void RemoveThrowItem__12CActionCharaFv_0x16b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RemoveThrowItem__12CActionCharaFv_0x16b3c0");
#endif

    switch (ctx->pc) {
        case 0x16b3e0u: goto label_16b3e0;
        case 0x16b408u: goto label_16b408;
        default: break;
    }

    ctx->pc = 0x16b3c0u;

    // 0x16b3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b3c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b3cc: 0x8483071c  lh          $v1, 0x71C($a0)
    ctx->pc = 0x16b3ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1820)));
    // 0x16b3d0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x16B3D0u;
    {
        const bool branch_taken_0x16b3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3D0u;
            // 0x16b3d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b3d0) {
            ctx->pc = 0x16B40Cu;
            goto label_16b40c;
        }
    }
    ctx->pc = 0x16B3D8u;
    // 0x16b3d8: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x16B3D8u;
    SET_GPR_U32(ctx, 31, 0x16B3E0u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3E0u; }
        if (ctx->pc != 0x16B3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3E0u; }
        if (ctx->pc != 0x16B3E0u) { return; }
    }
    ctx->pc = 0x16B3E0u;
label_16b3e0:
    // 0x16b3e0: 0x8604071c  lh          $a0, 0x71C($s0)
    ctx->pc = 0x16b3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1820)));
    // 0x16b3e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b3e8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B3E8u;
    {
        const bool branch_taken_0x16b3e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16b3e8) {
            ctx->pc = 0x16B40Cu;
            goto label_16b40c;
        }
    }
    ctx->pc = 0x16B3F0u;
    // 0x16b3f0: 0x820607e0  lb          $a2, 0x7E0($s0)
    ctx->pc = 0x16b3f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2016)));
    // 0x16b3f4: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B3F4u;
    {
        const bool branch_taken_0x16b3f4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x16b3f4) {
            ctx->pc = 0x16B408u;
            goto label_16b408;
        }
    }
    ctx->pc = 0x16B3FCu;
    // 0x16b3fc: 0x8e0407dc  lw          $a0, 0x7DC($s0)
    ctx->pc = 0x16b3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
    // 0x16b400: 0xc0b853c  jal         func_2E14F0
    ctx->pc = 0x16B400u;
    SET_GPR_U32(ctx, 31, 0x16B408u);
    ctx->pc = 0x16B404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B400u;
            // 0x16b404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E14F0u;
    if (runtime->hasFunction(0x2E14F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B408u; }
        if (ctx->pc != 0x16B408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFii_0x2e14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B408u; }
        if (ctx->pc != 0x16B408u) { return; }
    }
    ctx->pc = 0x16B408u;
label_16b408:
    // 0x16b408: 0xa600071c  sh          $zero, 0x71C($s0)
    ctx->pc = 0x16b408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1820), (uint16_t)GPR_U32(ctx, 0));
label_16b40c:
    // 0x16b40c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b414: 0x3e00008  jr          $ra
    ctx->pc = 0x16B414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B414u;
            // 0x16b418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B41Cu;
}
