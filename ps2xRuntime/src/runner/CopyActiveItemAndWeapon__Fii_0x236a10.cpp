#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyActiveItemAndWeapon__Fii
// Address: 0x236a10 - 0x236ab4
void CopyActiveItemAndWeapon__Fii_0x236a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyActiveItemAndWeapon__Fii_0x236a10");
#endif

    switch (ctx->pc) {
        case 0x236a40u: goto label_236a40;
        case 0x236a58u: goto label_236a58;
        case 0x236a90u: goto label_236a90;
        case 0x236aa0u: goto label_236aa0;
        default: break;
    }

    ctx->pc = 0x236a10u;

    // 0x236a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x236a14: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x236a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x236a18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x236a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x236a1c: 0x24a5aac0  addiu       $a1, $a1, -0x5540
    ctx->pc = 0x236a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945472));
    // 0x236a20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x236a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x236a24: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x236a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x236a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x236a2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a30: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x236a30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x236a34: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x236a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x236a38: 0xc04b414  jal         func_12D050
    ctx->pc = 0x236A38u;
    SET_GPR_U32(ctx, 31, 0x236A40u);
    ctx->pc = 0x236A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236A38u;
            // 0x236a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A40u; }
        if (ctx->pc != 0x236A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A40u; }
        if (ctx->pc != 0x236A40u) { return; }
    }
    ctx->pc = 0x236A40u;
label_236a40:
    // 0x236a40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x236a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x236a44: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x236a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x236a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a4c: 0x24a5aad0  addiu       $a1, $a1, -0x5530
    ctx->pc = 0x236a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945488));
    // 0x236a50: 0xc04b414  jal         func_12D050
    ctx->pc = 0x236A50u;
    SET_GPR_U32(ctx, 31, 0x236A58u);
    ctx->pc = 0x236A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236A50u;
            // 0x236a54: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A58u; }
        if (ctx->pc != 0x236A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A58u; }
        if (ctx->pc != 0x236A58u) { return; }
    }
    ctx->pc = 0x236A58u;
label_236a58:
    // 0x236a58: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x236a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x236a5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x236a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x236a60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x236a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x236a64: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x236A64u;
    {
        const bool branch_taken_0x236a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236a64) {
            ctx->pc = 0x236AA0u;
            goto label_236aa0;
        }
    }
    ctx->pc = 0x236A6Cu;
    // 0x236a6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x236a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236a70: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x236A70u;
    {
        const bool branch_taken_0x236a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236A70u;
            // 0x236a74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a70) {
            ctx->pc = 0x236A84u;
            goto label_236a84;
        }
    }
    ctx->pc = 0x236A78u;
    // 0x236a78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x236A78u;
    {
        const bool branch_taken_0x236a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236A78u;
            // 0x236a7c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a78) {
            ctx->pc = 0x236AA4u;
            goto label_236aa4;
        }
    }
    ctx->pc = 0x236A80u;
    // 0x236a80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236a84:
    // 0x236a84: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x236a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x236a88: 0xc08dab0  jal         func_236AC0
    ctx->pc = 0x236A88u;
    SET_GPR_U32(ctx, 31, 0x236A90u);
    ctx->pc = 0x236A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236A88u;
            // 0x236a8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236AC0u;
    if (runtime->hasFunction(0x236AC0u)) {
        auto targetFn = runtime->lookupFunction(0x236AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A90u; }
        if (ctx->pc != 0x236A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyActiveIconTexture__FPP10mgCTextureiPUi_0x236ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A90u; }
        if (ctx->pc != 0x236A90u) { return; }
    }
    ctx->pc = 0x236A90u;
label_236a90:
    // 0x236a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x236a98: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x236A98u;
    SET_GPR_U32(ctx, 31, 0x236AA0u);
    ctx->pc = 0x236A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236A98u;
            // 0x236a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AA0u; }
        if (ctx->pc != 0x236AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AA0u; }
        if (ctx->pc != 0x236AA0u) { return; }
    }
    ctx->pc = 0x236AA0u;
label_236aa0:
    // 0x236aa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x236aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236aa4:
    // 0x236aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x236aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236aac: 0x3e00008  jr          $ra
    ctx->pc = 0x236AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236AACu;
            // 0x236ab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236AB4u;
}
