#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgFlushRenderInfo__Fv
// Address: 0x143a20 - 0x143af0
void mgFlushRenderInfo__Fv_0x143a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgFlushRenderInfo__Fv_0x143a20");
#endif

    switch (ctx->pc) {
        case 0x143a38u: goto label_143a38;
        case 0x143ae0u: goto label_143ae0;
        default: break;
    }

    ctx->pc = 0x143a20u;

    // 0x143a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143a24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143a2c: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x143a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x143a30: 0xc041ace  jal         func_106B38
    ctx->pc = 0x143A30u;
    SET_GPR_U32(ctx, 31, 0x143A38u);
    ctx->pc = 0x143A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143A30u;
            // 0x143a34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B38u;
    if (runtime->hasFunction(0x106B38u)) {
        auto targetFn = runtime->lookupFunction(0x106B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A38u; }
        if (ctx->pc != 0x143A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkTerminate_0x106b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A38u; }
        if (ctx->pc != 0x143A38u) { return; }
    }
    ctx->pc = 0x143A38u;
label_143a38:
    // 0x143a38: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x143a38u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x143a3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x143a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x143a40: 0x34650004  ori         $a1, $v1, 0x4
    ctx->pc = 0x143a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x143a44: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x143a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x143a48: 0x344b003b  ori         $t3, $v0, 0x3B
    ctx->pc = 0x143a48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59);
    // 0x143a4c: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x143a4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x143a50: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x143a50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x143a54: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x143a54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x143a58: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x143a58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x143a5c: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x143a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x143a60: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x143a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x143a64: 0x34460039  ori         $a2, $v0, 0x39
    ctx->pc = 0x143a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57);
    // 0x143a68: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x143a68u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x143a6c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x143a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x143a70: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x143a70u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x143a74: 0x254a1e9c  addiu       $t2, $t2, 0x1E9C
    ctx->pc = 0x143a74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7836));
    // 0x143a78: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x143a78u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
    // 0x143a7c: 0x25291ea4  addiu       $t1, $t1, 0x1EA4
    ctx->pc = 0x143a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7844));
    // 0x143a80: 0xad8b000c  sw          $t3, 0xC($t4)
    ctx->pc = 0x143a80u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 11));
    // 0x143a84: 0x25081ea0  addiu       $t0, $t0, 0x1EA0
    ctx->pc = 0x143a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7840));
    // 0x143a88: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x143a88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x143a8c: 0x24e71ea8  addiu       $a3, $a3, 0x1EA8
    ctx->pc = 0x143a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7848));
    // 0x143a90: 0x24631d60  addiu       $v1, $v1, 0x1D60
    ctx->pc = 0x143a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7520));
    // 0x143a94: 0x24421d70  addiu       $v0, $v0, 0x1D70
    ctx->pc = 0x143a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7536));
    // 0x143a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143a9c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x143a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x143aa0: 0xad8a0010  sw          $t2, 0x10($t4)
    ctx->pc = 0x143aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 10));
    // 0x143aa4: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x143aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x143aa8: 0xad890014  sw          $t1, 0x14($t4)
    ctx->pc = 0x143aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 9));
    // 0x143aac: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x143aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x143ab0: 0xad880018  sw          $t0, 0x18($t4)
    ctx->pc = 0x143ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 8));
    // 0x143ab4: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x143ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x143ab8: 0xad87001c  sw          $a3, 0x1C($t4)
    ctx->pc = 0x143ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 7));
    // 0x143abc: 0xad800020  sw          $zero, 0x20($t4)
    ctx->pc = 0x143abcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 0));
    // 0x143ac0: 0xad800024  sw          $zero, 0x24($t4)
    ctx->pc = 0x143ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 36), GPR_U32(ctx, 0));
    // 0x143ac4: 0xad800028  sw          $zero, 0x28($t4)
    ctx->pc = 0x143ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 0));
    // 0x143ac8: 0xad86002c  sw          $a2, 0x2C($t4)
    ctx->pc = 0x143ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 44), GPR_U32(ctx, 6));
    // 0x143acc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x143accu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143ad0: 0x7d830030  sq          $v1, 0x30($t4)
    ctx->pc = 0x143ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 48), GPR_VEC(ctx, 3));
    // 0x143ad4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x143ad4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143ad8: 0xc041b7e  jal         func_106DF8
    ctx->pc = 0x143AD8u;
    SET_GPR_U32(ctx, 31, 0x143AE0u);
    ctx->pc = 0x143ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143AD8u;
            // 0x143adc: 0x7d820040  sq          $v0, 0x40($t4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 12), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106DF8u;
    if (runtime->hasFunction(0x106DF8u)) {
        auto targetFn = runtime->lookupFunction(0x106DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AE0u; }
        if (ctx->pc != 0x143AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkReserve_0x106df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AE0u; }
        if (ctx->pc != 0x143AE0u) { return; }
    }
    ctx->pc = 0x143AE0u;
label_143ae0:
    // 0x143ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x143AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143AE8u;
            // 0x143aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143AF0u;
}
