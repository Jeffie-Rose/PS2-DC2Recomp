#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTextureInfo__11CDngFreeMapFv
// Address: 0x1eabe0 - 0x1eac70
void SetTextureInfo__11CDngFreeMapFv_0x1eabe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTextureInfo__11CDngFreeMapFv_0x1eabe0");
#endif

    switch (ctx->pc) {
        case 0x1eac08u: goto label_1eac08;
        case 0x1eac24u: goto label_1eac24;
        case 0x1eac40u: goto label_1eac40;
        case 0x1eac5cu: goto label_1eac5c;
        default: break;
    }

    ctx->pc = 0x1eabe0u;

    // 0x1eabe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eabe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eabe4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1eabe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1eabe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eabe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eabec: 0x24a58660  addiu       $a1, $a1, -0x79A0
    ctx->pc = 0x1eabecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936160));
    // 0x1eabf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eabf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eabf4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1eabf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eabf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eabf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eabfc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1eabfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1eac00: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1EAC00u;
    SET_GPR_U32(ctx, 31, 0x1EAC08u);
    ctx->pc = 0x1EAC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC00u;
            // 0x1eac04: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC08u; }
        if (ctx->pc != 0x1EAC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC08u; }
        if (ctx->pc != 0x1EAC08u) { return; }
    }
    ctx->pc = 0x1EAC08u;
label_1eac08:
    // 0x1eac08: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1eac08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1eac0c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1eac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1eac10: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x1eac10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x1eac14: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1eac14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1eac18: 0x24a58668  addiu       $a1, $a1, -0x7998
    ctx->pc = 0x1eac18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936168));
    // 0x1eac1c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1EAC1Cu;
    SET_GPR_U32(ctx, 31, 0x1EAC24u);
    ctx->pc = 0x1EAC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC1Cu;
            // 0x1eac20: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC24u; }
        if (ctx->pc != 0x1EAC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC24u; }
        if (ctx->pc != 0x1EAC24u) { return; }
    }
    ctx->pc = 0x1EAC24u;
label_1eac24:
    // 0x1eac24: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1eac24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1eac28: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1eac28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1eac2c: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x1eac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x1eac30: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1eac30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1eac34: 0x24a58670  addiu       $a1, $a1, -0x7990
    ctx->pc = 0x1eac34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936176));
    // 0x1eac38: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1EAC38u;
    SET_GPR_U32(ctx, 31, 0x1EAC40u);
    ctx->pc = 0x1EAC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC38u;
            // 0x1eac3c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC40u; }
        if (ctx->pc != 0x1EAC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC40u; }
        if (ctx->pc != 0x1EAC40u) { return; }
    }
    ctx->pc = 0x1EAC40u;
label_1eac40:
    // 0x1eac40: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1eac40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1eac44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1eac44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1eac48: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1eac48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1eac4c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1eac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1eac50: 0x24a58678  addiu       $a1, $a1, -0x7988
    ctx->pc = 0x1eac50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936184));
    // 0x1eac54: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1EAC54u;
    SET_GPR_U32(ctx, 31, 0x1EAC5Cu);
    ctx->pc = 0x1EAC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC54u;
            // 0x1eac58: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC5Cu; }
        if (ctx->pc != 0x1EAC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC5Cu; }
        if (ctx->pc != 0x1EAC5Cu) { return; }
    }
    ctx->pc = 0x1EAC5Cu;
label_1eac5c:
    // 0x1eac5c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1eac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1eac60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eac60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eac64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eac64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eac68: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC68u;
            // 0x1eac6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAC70u;
}
