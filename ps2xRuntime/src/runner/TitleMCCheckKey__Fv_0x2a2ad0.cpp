#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleMCCheckKey__Fv
// Address: 0x2a2ad0 - 0x2a2fc8
void TitleMCCheckKey__Fv_0x2a2ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleMCCheckKey__Fv_0x2a2ad0");
#endif

    switch (ctx->pc) {
        case 0x2a2b0cu: goto label_2a2b0c;
        case 0x2a2b18u: goto label_2a2b18;
        case 0x2a2b2cu: goto label_2a2b2c;
        case 0x2a2bacu: goto label_2a2bac;
        case 0x2a2bb8u: goto label_2a2bb8;
        case 0x2a2bd4u: goto label_2a2bd4;
        case 0x2a2c14u: goto label_2a2c14;
        case 0x2a2c2cu: goto label_2a2c2c;
        case 0x2a2c50u: goto label_2a2c50;
        case 0x2a2c88u: goto label_2a2c88;
        case 0x2a2c9cu: goto label_2a2c9c;
        case 0x2a2d30u: goto label_2a2d30;
        case 0x2a2d58u: goto label_2a2d58;
        case 0x2a2d78u: goto label_2a2d78;
        case 0x2a2d9cu: goto label_2a2d9c;
        case 0x2a2dd0u: goto label_2a2dd0;
        case 0x2a2de4u: goto label_2a2de4;
        case 0x2a2e1cu: goto label_2a2e1c;
        case 0x2a2e30u: goto label_2a2e30;
        case 0x2a2e54u: goto label_2a2e54;
        case 0x2a2e74u: goto label_2a2e74;
        case 0x2a2f64u: goto label_2a2f64;
        case 0x2a2f98u: goto label_2a2f98;
        default: break;
    }

    ctx->pc = 0x2a2ad0u;

    // 0x2a2ad0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a2ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a2ad4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a2ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a2ad8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a2ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a2adc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a2adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a2ae0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a2ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a2ae4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a2ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a2ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a2ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a2aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2af0: 0x27b1007c  addiu       $s1, $sp, 0x7C
    ctx->pc = 0x2a2af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2a2af4: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2af8: 0x24830d5c  addiu       $v1, $a0, 0xD5C
    ctx->pc = 0x2a2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3420));
    // 0x2a2afc: 0x24820d7c  addiu       $v0, $a0, 0xD7C
    ctx->pc = 0x2a2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3452));
    // 0x2a2b00: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x2a2b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x2a2b04: 0xc0bc7f0  jal         func_2F1FC0
    ctx->pc = 0x2A2B04u;
    SET_GPR_U32(ctx, 31, 0x2A2B0Cu);
    ctx->pc = 0x2A2B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B04u;
            // 0x2a2b08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1FC0u;
    if (runtime->hasFunction(0x2F1FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B0Cu; }
        if (ctx->pc != 0x2A2B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__18CMemoryCardManagerFv_0x2f1fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B0Cu; }
        if (ctx->pc != 0x2A2B0Cu) { return; }
    }
    ctx->pc = 0x2A2B0Cu;
label_2a2b0c:
    // 0x2a2b0c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2b10: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2A2B10u;
    SET_GPR_U32(ctx, 31, 0x2A2B18u);
    ctx->pc = 0x2A2B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B10u;
            // 0x2a2b14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B18u; }
        if (ctx->pc != 0x2A2B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B18u; }
        if (ctx->pc != 0x2A2B18u) { return; }
    }
    ctx->pc = 0x2A2B18u;
label_2a2b18:
    // 0x2a2b18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a2b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a2b1c: 0xa3a2008c  sb          $v0, 0x8C($sp)
    ctx->pc = 0x2a2b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a2b20: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x2a2b20u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a2b24: 0xc0bd4e4  jal         func_2F5390
    ctx->pc = 0x2A2B24u;
    SET_GPR_U32(ctx, 31, 0x2A2B2Cu);
    ctx->pc = 0x2A2B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B24u;
            // 0x2a2b28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5390u;
    if (runtime->hasFunction(0x2F5390u)) {
        auto targetFn = runtime->lookupFunction(0x2F5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B2Cu; }
        if (ctx->pc != 0x2A2B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2__FP12MC_CARD_INFO_0x2f5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B2Cu; }
        if (ctx->pc != 0x2A2B2Cu) { return; }
    }
    ctx->pc = 0x2A2B2Cu;
label_2a2b2c:
    // 0x2a2b2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a2b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a2b30: 0x27b2008d  addiu       $s2, $sp, 0x8D
    ctx->pc = 0x2a2b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 141));
    // 0x2a2b34: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2a2b34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a2b38: 0x87829a48  lh          $v0, -0x65B8($gp)
    ctx->pc = 0x2a2b38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941256)));
    // 0x2a2b3c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x2a2b3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2a2b40: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x2A2B40u;
    {
        const bool branch_taken_0x2a2b40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B40u;
            // 0x2a2b44: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b40) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2B48u;
    // 0x2a2b48: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a2b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a2b4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a2b50: 0x2463e200  addiu       $v1, $v1, -0x1E00
    ctx->pc = 0x2a2b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959616));
    // 0x2a2b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2b58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2b5c: 0x400008  jr          $v0
    ctx->pc = 0x2A2B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A2B64u: goto label_2a2b64;
            case 0x2A2C1Cu: goto label_2a2c1c;
            case 0x2A2CACu: goto label_2a2cac;
            case 0x2A2D40u: goto label_2a2d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A2B64u;
label_2a2b64:
    // 0x2a2b64: 0x1200008e  beqz        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2A2B64u;
    {
        const bool branch_taken_0x2a2b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B64u;
            // 0x2a2b68: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b64) {
            ctx->pc = 0x2A2DA0u;
            goto label_2a2da0;
        }
    }
    ctx->pc = 0x2A2B6Cu;
    // 0x2a2b6c: 0x87849a44  lh          $a0, -0x65BC($gp)
    ctx->pc = 0x2a2b6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941252)));
    // 0x2a2b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a2b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2b74: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x2a2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2a2b78: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x2a2b78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2a2b7c: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A2B7Cu;
    {
        const bool branch_taken_0x2a2b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A2B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B7Cu;
            // 0x2a2b80: 0x27828468  addiu       $v0, $gp, -0x7B98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b7c) {
            ctx->pc = 0x2A2BC4u;
            goto label_2a2bc4;
        }
    }
    ctx->pc = 0x2A2B84u;
    // 0x2a2b84: 0x27828468  addiu       $v0, $gp, -0x7B98
    ctx->pc = 0x2a2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935656));
    // 0x2a2b88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a2b8c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2a2b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a2b90: 0x87839a48  lh          $v1, -0x65B8($gp)
    ctx->pc = 0x2a2b90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941256)));
    // 0x2a2b94: 0x8f8299a0  lw          $v0, -0x6660($gp)
    ctx->pc = 0x2a2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2b98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a2b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a2b9c: 0xa7839a48  sh          $v1, -0x65B8($gp)
    ctx->pc = 0x2a2b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941256), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a2ba0: 0xac4404c8  sw          $a0, 0x4C8($v0)
    ctx->pc = 0x2a2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 4));
    // 0x2a2ba4: 0xc0bc7b4  jal         func_2F1ED0
    ctx->pc = 0x2A2BA4u;
    SET_GPR_U32(ctx, 31, 0x2A2BACu);
    ctx->pc = 0x2A2BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BA4u;
            // 0x2a2ba8: 0x8f8499a0  lw          $a0, -0x6660($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1ED0u;
    if (runtime->hasFunction(0x2F1ED0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BACu; }
        if (ctx->pc != 0x2A2BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPlayDataInfo__18CMemoryCardManagerFv_0x2f1ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BACu; }
        if (ctx->pc != 0x2A2BACu) { return; }
    }
    ctx->pc = 0x2A2BACu;
label_2a2bac:
    // 0x2a2bac: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a2bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2bb0: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2A2BB0u;
    SET_GPR_U32(ctx, 31, 0x2A2BB8u);
    ctx->pc = 0x2A2BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BB0u;
            // 0x2a2bb4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BB8u; }
        if (ctx->pc != 0x2A2BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BB8u; }
        if (ctx->pc != 0x2A2BB8u) { return; }
    }
    ctx->pc = 0x2A2BB8u;
label_2a2bb8:
    // 0x2a2bb8: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2A2BB8u;
    {
        const bool branch_taken_0x2a2bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2bb8) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2BC0u;
    // 0x2a2bc0: 0x27828468  addiu       $v0, $gp, -0x7B98
    ctx->pc = 0x2a2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935656));
label_2a2bc4:
    // 0x2a2bc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a2bc8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2a2bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2bcc: 0xc0bc7b4  jal         func_2F1ED0
    ctx->pc = 0x2A2BCCu;
    SET_GPR_U32(ctx, 31, 0x2A2BD4u);
    ctx->pc = 0x2A2BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BCCu;
            // 0x2a2bd0: 0x8f8499a0  lw          $a0, -0x6660($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1ED0u;
    if (runtime->hasFunction(0x2F1ED0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BD4u; }
        if (ctx->pc != 0x2A2BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPlayDataInfo__18CMemoryCardManagerFv_0x2f1ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BD4u; }
        if (ctx->pc != 0x2A2BD4u) { return; }
    }
    ctx->pc = 0x2A2BD4u;
label_2a2bd4:
    // 0x2a2bd4: 0x87839a44  lh          $v1, -0x65BC($gp)
    ctx->pc = 0x2a2bd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941252)));
    // 0x2a2bd8: 0x87829a48  lh          $v0, -0x65B8($gp)
    ctx->pc = 0x2a2bd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941256)));
    // 0x2a2bdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a2bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a2be0: 0xa7839a44  sh          $v1, -0x65BC($gp)
    ctx->pc = 0x2a2be0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941252), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a2be4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2a2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2a2be8: 0x87839a44  lh          $v1, -0x65BC($gp)
    ctx->pc = 0x2a2be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941252)));
    // 0x2a2bec: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2a2becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a2bf0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2BF0u;
    {
        const bool branch_taken_0x2a2bf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BF0u;
            // 0x2a2bf4: 0xa7829a48  sh          $v0, -0x65B8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941256), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2bf0) {
            ctx->pc = 0x2A2C00u;
            goto label_2a2c00;
        }
    }
    ctx->pc = 0x2A2BF8u;
    // 0x2a2bf8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2A2BF8u;
    {
        const bool branch_taken_0x2a2bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BF8u;
            // 0x2a2bfc: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2bf8) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2C00u;
label_2a2c00:
    // 0x2a2c00: 0x8f8299a0  lw          $v0, -0x6660($gp)
    ctx->pc = 0x2a2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2c04: 0xac4304c8  sw          $v1, 0x4C8($v0)
    ctx->pc = 0x2a2c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 3));
    // 0x2a2c08: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a2c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2c0c: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2A2C0Cu;
    SET_GPR_U32(ctx, 31, 0x2A2C14u);
    ctx->pc = 0x2A2C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C0Cu;
            // 0x2a2c10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C14u; }
        if (ctx->pc != 0x2A2C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C14u; }
        if (ctx->pc != 0x2A2C14u) { return; }
    }
    ctx->pc = 0x2A2C14u;
label_2a2c14:
    // 0x2a2c14: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2A2C14u;
    {
        const bool branch_taken_0x2a2c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2c14) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2C1Cu;
label_2a2c1c:
    // 0x2a2c1c: 0x1200005f  beqz        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2A2C1Cu;
    {
        const bool branch_taken_0x2a2c1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2c1c) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2C24u;
    // 0x2a2c24: 0xc0bc774  jal         func_2F1DD0
    ctx->pc = 0x2A2C24u;
    SET_GPR_U32(ctx, 31, 0x2A2C2Cu);
    ctx->pc = 0x2A2C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C24u;
            // 0x2a2c28: 0x8f8499a0  lw          $a0, -0x6660($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DD0u;
    if (runtime->hasFunction(0x2F1DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C2Cu; }
        if (ctx->pc != 0x2A2C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDataFileNum__18CMemoryCardManagerFv_0x2f1dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C2Cu; }
        if (ctx->pc != 0x2A2C2Cu) { return; }
    }
    ctx->pc = 0x2A2C2Cu;
label_2a2c2c:
    // 0x2a2c2c: 0x87849a44  lh          $a0, -0x65BC($gp)
    ctx->pc = 0x2a2c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941252)));
    // 0x2a2c30: 0x27838464  addiu       $v1, $gp, -0x7B9C
    ctx->pc = 0x2a2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935652));
    // 0x2a2c34: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2a2c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a2c38: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2a2c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2a2c3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a2c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a2c40: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2a2c40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a2c44: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a2c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2c48: 0xc0bc784  jal         func_2F1E10
    ctx->pc = 0x2A2C48u;
    SET_GPR_U32(ctx, 31, 0x2A2C50u);
    ctx->pc = 0x2A2C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C48u;
            // 0x2a2c4c: 0xffa00080  sd          $zero, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E10u;
    if (runtime->hasFunction(0x2F1E10u)) {
        auto targetFn = runtime->lookupFunction(0x2F1E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C50u; }
        if (ctx->pc != 0x2A2C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckOmake__18CMemoryCardManagerFPUl_0x2f1e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C50u; }
        if (ctx->pc != 0x2A2C50u) { return; }
    }
    ctx->pc = 0x2A2C50u;
label_2a2c50:
    // 0x2a2c50: 0x8f869980  lw          $a2, -0x6680($gp)
    ctx->pc = 0x2a2c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941056)));
    // 0x2a2c54: 0xdf859988  ld          $a1, -0x6678($gp)
    ctx->pc = 0x2a2c54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294941064)));
    // 0x2a2c58: 0xdfa40080  ld          $a0, 0x80($sp)
    ctx->pc = 0x2a2c58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a2c5c: 0x93839a40  lbu         $v1, -0x65C0($gp)
    ctx->pc = 0x2a2c5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941248)));
    // 0x2a2c60: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2a2c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a2c64: 0xaf829980  sw          $v0, -0x6680($gp)
    ctx->pc = 0x2a2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941056), GPR_U32(ctx, 2));
    // 0x2a2c68: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2a2c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a2c6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2C6Cu;
    {
        const bool branch_taken_0x2a2c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C6Cu;
            // 0x2a2c70: 0xff829988  sd          $v0, -0x6678($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294941064), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c6c) {
            ctx->pc = 0x2A2C90u;
            goto label_2a2c90;
        }
    }
    ctx->pc = 0x2A2C74u;
    // 0x2a2c74: 0x93829968  lbu         $v0, -0x6698($gp)
    ctx->pc = 0x2a2c74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941032)));
    // 0x2a2c78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2C78u;
    {
        const bool branch_taken_0x2a2c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2c78) {
            ctx->pc = 0x2A2C90u;
            goto label_2a2c90;
        }
    }
    ctx->pc = 0x2A2C80u;
    // 0x2a2c80: 0xc0bc7a0  jal         func_2F1E80
    ctx->pc = 0x2A2C80u;
    SET_GPR_U32(ctx, 31, 0x2A2C88u);
    ctx->pc = 0x2A2C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C80u;
            // 0x2a2c84: 0x8f8499a0  lw          $a0, -0x6660($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E80u;
    if (runtime->hasFunction(0x2F1E80u)) {
        auto targetFn = runtime->lookupFunction(0x2F1E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C88u; }
        if (ctx->pc != 0x2A2C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDebugCode__18CMemoryCardManagerFv_0x2f1e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C88u; }
        if (ctx->pc != 0x2A2C88u) { return; }
    }
    ctx->pc = 0x2A2C88u;
label_2a2c88:
    // 0x2a2c88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a2c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a2c8c: 0xa3829968  sb          $v0, -0x6698($gp)
    ctx->pc = 0x2a2c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941032), (uint8_t)GPR_U32(ctx, 2));
label_2a2c90:
    // 0x2a2c90: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a2c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2c94: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2A2C94u;
    SET_GPR_U32(ctx, 31, 0x2A2C9Cu);
    ctx->pc = 0x2A2C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C94u;
            // 0x2a2c98: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C9Cu; }
        if (ctx->pc != 0x2A2C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C9Cu; }
        if (ctx->pc != 0x2A2C9Cu) { return; }
    }
    ctx->pc = 0x2A2C9Cu;
label_2a2c9c:
    // 0x2a2c9c: 0x87829a48  lh          $v0, -0x65B8($gp)
    ctx->pc = 0x2a2c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941256)));
    // 0x2a2ca0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a2ca4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2A2CA4u;
    {
        const bool branch_taken_0x2a2ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2CA4u;
            // 0x2a2ca8: 0xa7829a48  sh          $v0, -0x65B8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941256), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ca4) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2CACu;
label_2a2cac:
    // 0x2a2cac: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2A2CACu;
    {
        const bool branch_taken_0x2a2cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2cac) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2CB4u;
    // 0x2a2cb4: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2cb8: 0x8c8210e0  lw          $v0, 0x10E0($a0)
    ctx->pc = 0x2a2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4320)));
    // 0x2a2cbc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A2CBCu;
    {
        const bool branch_taken_0x2a2cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2CBCu;
            // 0x2a2cc0: 0x248310e0  addiu       $v1, $a0, 0x10E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2cbc) {
            ctx->pc = 0x2A2CFCu;
            goto label_2a2cfc;
        }
    }
    ctx->pc = 0x2A2CC4u;
    // 0x2a2cc4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a2cc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a2cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a2ccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2CCCu;
    {
        const bool branch_taken_0x2a2ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ccc) {
            ctx->pc = 0x2A2CE0u;
            goto label_2a2ce0;
        }
    }
    ctx->pc = 0x2A2CD4u;
    // 0x2a2cd4: 0x8f829980  lw          $v0, -0x6680($gp)
    ctx->pc = 0x2a2cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941056)));
    // 0x2a2cd8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2a2cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2a2cdc: 0xaf829980  sw          $v0, -0x6680($gp)
    ctx->pc = 0x2a2cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941056), GPR_U32(ctx, 2));
label_2a2ce0:
    // 0x2a2ce0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a2ce4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a2ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a2ce8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2CE8u;
    {
        const bool branch_taken_0x2a2ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ce8) {
            ctx->pc = 0x2A2CFCu;
            goto label_2a2cfc;
        }
    }
    ctx->pc = 0x2A2CF0u;
    // 0x2a2cf0: 0x8f829980  lw          $v0, -0x6680($gp)
    ctx->pc = 0x2a2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941056)));
    // 0x2a2cf4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2a2cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2a2cf8: 0xaf829980  sw          $v0, -0x6680($gp)
    ctx->pc = 0x2a2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941056), GPR_U32(ctx, 2));
label_2a2cfc:
    // 0x2a2cfc: 0x87829a44  lh          $v0, -0x65BC($gp)
    ctx->pc = 0x2a2cfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941252)));
    // 0x2a2d00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a2d04: 0xa7829a44  sh          $v0, -0x65BC($gp)
    ctx->pc = 0x2a2d04u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941252), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a2d08: 0x87829a44  lh          $v0, -0x65BC($gp)
    ctx->pc = 0x2a2d08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941252)));
    // 0x2a2d0c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2a2d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a2d10: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2D10u;
    {
        const bool branch_taken_0x2a2d10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d10) {
            ctx->pc = 0x2A2D20u;
            goto label_2a2d20;
        }
    }
    ctx->pc = 0x2A2D18u;
    // 0x2a2d18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2D18u;
    {
        const bool branch_taken_0x2a2d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D18u;
            // 0x2a2d1c: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d18) {
            ctx->pc = 0x2A2D30u;
            goto label_2a2d30;
        }
    }
    ctx->pc = 0x2A2D20u;
label_2a2d20:
    // 0x2a2d20: 0xac8204c8  sw          $v0, 0x4C8($a0)
    ctx->pc = 0x2a2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1224), GPR_U32(ctx, 2));
    // 0x2a2d24: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a2d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2d28: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2A2D28u;
    SET_GPR_U32(ctx, 31, 0x2A2D30u);
    ctx->pc = 0x2A2D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D28u;
            // 0x2a2d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D30u; }
        if (ctx->pc != 0x2A2D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D30u; }
        if (ctx->pc != 0x2A2D30u) { return; }
    }
    ctx->pc = 0x2A2D30u;
label_2a2d30:
    // 0x2a2d30: 0x87829a48  lh          $v0, -0x65B8($gp)
    ctx->pc = 0x2a2d30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941256)));
    // 0x2a2d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a2d38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2A2D38u;
    {
        const bool branch_taken_0x2a2d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D38u;
            // 0x2a2d3c: 0xa7829a48  sh          $v0, -0x65B8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941256), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d38) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2D40u;
label_2a2d40:
    // 0x2a2d40: 0x93839a40  lbu         $v1, -0x65C0($gp)
    ctx->pc = 0x2a2d40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941248)));
    // 0x2a2d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2d48: 0x14620096  bne         $v1, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2A2D48u;
    {
        const bool branch_taken_0x2a2d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a2d48) {
            ctx->pc = 0x2A2FA4u;
            goto label_2a2fa4;
        }
    }
    ctx->pc = 0x2A2D50u;
    // 0x2a2d50: 0xc08f86c  jal         func_23E1B0
    ctx->pc = 0x2A2D50u;
    SET_GPR_U32(ctx, 31, 0x2A2D58u);
    ctx->pc = 0x23E1B0u;
    if (runtime->hasFunction(0x23E1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D58u; }
        if (ctx->pc != 0x2A2D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCheckPushButton__Fv_0x23e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D58u; }
        if (ctx->pc != 0x2A2D58u) { return; }
    }
    ctx->pc = 0x2A2D58u;
label_2a2d58:
    // 0x2a2d58: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2a2d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a2d5c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2D5Cu;
    {
        const bool branch_taken_0x2a2d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d5c) {
            ctx->pc = 0x2A2D84u;
            goto label_2a2d84;
        }
    }
    ctx->pc = 0x2A2D64u;
    // 0x2a2d64: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2a2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2a2d68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2D68u;
    {
        const bool branch_taken_0x2a2d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D68u;
            // 0x2a2d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d68) {
            ctx->pc = 0x2A2D7Cu;
            goto label_2a2d7c;
        }
    }
    ctx->pc = 0x2A2D70u;
    // 0x2a2d70: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A2D70u;
    SET_GPR_U32(ctx, 31, 0x2A2D78u);
    ctx->pc = 0x2A2D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D70u;
            // 0x2a2d74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D78u; }
        if (ctx->pc != 0x2A2D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D78u; }
        if (ctx->pc != 0x2A2D78u) { return; }
    }
    ctx->pc = 0x2A2D78u;
label_2a2d78:
    // 0x2a2d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2d7c:
    // 0x2a2d7c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2A2D7Cu;
    {
        const bool branch_taken_0x2a2d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D7Cu;
            // 0x2a2d80: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d7c) {
            ctx->pc = 0x2A2FA8u;
            goto label_2a2fa8;
        }
    }
    ctx->pc = 0x2A2D84u;
label_2a2d84:
    // 0x2a2d84: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a2d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a2d88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2D88u;
    {
        const bool branch_taken_0x2a2d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d88) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2D90u;
    // 0x2a2d90: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a2d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a2d94: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A2D94u;
    SET_GPR_U32(ctx, 31, 0x2A2D9Cu);
    ctx->pc = 0x2A2D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2D94u;
            // 0x2a2d98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D9Cu; }
        if (ctx->pc != 0x2A2D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D9Cu; }
        if (ctx->pc != 0x2A2D9Cu) { return; }
    }
    ctx->pc = 0x2A2D9Cu;
label_2a2d9c:
    // 0x2a2d9c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a2da0:
    // 0x2a2da0: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A2DA0u;
    {
        const bool branch_taken_0x2a2da0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a2da0) {
            ctx->pc = 0x2A2DECu;
            goto label_2a2dec;
        }
    }
    ctx->pc = 0x2A2DA8u;
    // 0x2a2da8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2DA8u;
    {
        const bool branch_taken_0x2a2da8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2da8) {
            ctx->pc = 0x2A2DB8u;
            goto label_2a2db8;
        }
    }
    ctx->pc = 0x2A2DB0u;
    // 0x2a2db0: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2A2DB0u;
    {
        const bool branch_taken_0x2a2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2DB0u;
            // 0x2a2db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2db0) {
            ctx->pc = 0x2A2FA4u;
            goto label_2a2fa4;
        }
    }
    ctx->pc = 0x2A2DB8u;
label_2a2db8:
    // 0x2a2db8: 0x8f8299a0  lw          $v0, -0x6660($gp)
    ctx->pc = 0x2a2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2dbc: 0xa7809a44  sh          $zero, -0x65BC($gp)
    ctx->pc = 0x2a2dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941252), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a2dc0: 0xac4004c8  sw          $zero, 0x4C8($v0)
    ctx->pc = 0x2a2dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 0));
    // 0x2a2dc4: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a2dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2dc8: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2A2DC8u;
    SET_GPR_U32(ctx, 31, 0x2A2DD0u);
    ctx->pc = 0x2A2DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2DC8u;
            // 0x2a2dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DD0u; }
        if (ctx->pc != 0x2A2DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DD0u; }
        if (ctx->pc != 0x2A2DD0u) { return; }
    }
    ctx->pc = 0x2A2DD0u;
label_2a2dd0:
    // 0x2a2dd0: 0x8f8499a4  lw          $a0, -0x665C($gp)
    ctx->pc = 0x2a2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
    // 0x2a2dd4: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x2a2dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2a2dd8: 0xa7809a44  sh          $zero, -0x65BC($gp)
    ctx->pc = 0x2a2dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941252), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a2ddc: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x2A2DDCu;
    SET_GPR_U32(ctx, 31, 0x2A2DE4u);
    ctx->pc = 0x2A2DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2DDCu;
            // 0x2a2de0: 0xa7809a48  sh          $zero, -0x65B8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941256), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DE4u; }
        if (ctx->pc != 0x2A2DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DE4u; }
        if (ctx->pc != 0x2A2DE4u) { return; }
    }
    ctx->pc = 0x2A2DE4u;
label_2a2de4:
    // 0x2a2de4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2A2DE4u;
    {
        const bool branch_taken_0x2a2de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2de4) {
            ctx->pc = 0x2A2FA0u;
            goto label_2a2fa0;
        }
    }
    ctx->pc = 0x2A2DECu;
label_2a2dec:
    // 0x2a2dec: 0x93a2008c  lbu         $v0, 0x8C($sp)
    ctx->pc = 0x2a2decu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2a2df0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A2DF0u;
    {
        const bool branch_taken_0x2a2df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2df0) {
            ctx->pc = 0x2A2E24u;
            goto label_2a2e24;
        }
    }
    ctx->pc = 0x2A2DF8u;
    // 0x2a2df8: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2a2df8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a2dfc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2DFCu;
    {
        const bool branch_taken_0x2a2dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2dfc) {
            ctx->pc = 0x2A2E24u;
            goto label_2a2e24;
        }
    }
    ctx->pc = 0x2A2E04u;
    // 0x2a2e04: 0x93829a40  lbu         $v0, -0x65C0($gp)
    ctx->pc = 0x2a2e04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941248)));
    // 0x2a2e08: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2A2E08u;
    {
        const bool branch_taken_0x2a2e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E08u;
            // 0x2a2e0c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e08) {
            ctx->pc = 0x2A2F9Cu;
            goto label_2a2f9c;
        }
    }
    ctx->pc = 0x2A2E10u;
    // 0x2a2e10: 0x8f8499a4  lw          $a0, -0x665C($gp)
    ctx->pc = 0x2a2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
    // 0x2a2e14: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x2A2E14u;
    SET_GPR_U32(ctx, 31, 0x2A2E1Cu);
    ctx->pc = 0x2A2E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E14u;
            // 0x2a2e18: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E1Cu; }
        if (ctx->pc != 0x2A2E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E1Cu; }
        if (ctx->pc != 0x2A2E1Cu) { return; }
    }
    ctx->pc = 0x2A2E1Cu;
label_2a2e1c:
    // 0x2a2e1c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2A2E1Cu;
    {
        const bool branch_taken_0x2a2e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e1c) {
            ctx->pc = 0x2A2F98u;
            goto label_2a2f98;
        }
    }
    ctx->pc = 0x2A2E24u;
label_2a2e24:
    // 0x2a2e24: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a2e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
    // 0x2a2e28: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2A2E28u;
    SET_GPR_U32(ctx, 31, 0x2A2E30u);
    ctx->pc = 0x2A2E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E28u;
            // 0x2a2e2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E30u; }
        if (ctx->pc != 0x2A2E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E30u; }
        if (ctx->pc != 0x2A2E30u) { return; }
    }
    ctx->pc = 0x2A2E30u;
label_2a2e30:
    // 0x2a2e30: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2E30u;
    {
        const bool branch_taken_0x2a2e30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A2E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E30u;
            // 0x2a2e34: 0x21a83  sra         $v1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e30) {
            ctx->pc = 0x2A2E40u;
            goto label_2a2e40;
        }
    }
    ctx->pc = 0x2A2E38u;
    // 0x2a2e38: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x2a2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2a2e3c: 0x21a83  sra         $v1, $v0, 10
    ctx->pc = 0x2a2e3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 10));
label_2a2e40:
    // 0x2a2e40: 0x24700003  addiu       $s0, $v1, 0x3
    ctx->pc = 0x2a2e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2a2e44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a2e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a2e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a2e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a2e50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2e54:
    // 0x2a2e54: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2a2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2a2e58: 0x9042008c  lbu         $v0, 0x8C($v0)
    ctx->pc = 0x2a2e58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2a2e5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2E5Cu;
    {
        const bool branch_taken_0x2a2e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e5c) {
            ctx->pc = 0x2A2E7Cu;
            goto label_2a2e7c;
        }
    }
    ctx->pc = 0x2A2E64u;
    // 0x2a2e64: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2a2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2a2e68: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x2a2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2a2e6c: 0xc0bd4f4  jal         func_2F53D0
    ctx->pc = 0x2A2E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A2E74u);
    ctx->pc = 0x2A2E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2E6Cu;
            // 0x2a2e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F53D0u;
    if (runtime->hasFunction(0x2F53D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F53D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E74u; }
        if (ctx->pc != 0x2A2E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McCheckMCPs2Boot__FP12MC_CARD_INFOi_0x2f53d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E74u; }
        if (ctx->pc != 0x2A2E74u) { return; }
    }
    ctx->pc = 0x2A2E74u;
label_2a2e74:
    // 0x2a2e74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2E74u;
    {
        const bool branch_taken_0x2a2e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e74) {
            ctx->pc = 0x2A2E98u;
            goto label_2a2e98;
        }
    }
    ctx->pc = 0x2A2E7Cu;
label_2a2e7c:
    // 0x2a2e7c: 0x0  nop
    ctx->pc = 0x2a2e7cu;
    // NOP
    // 0x2a2e80: 0x27828464  addiu       $v0, $gp, -0x7B9C
    ctx->pc = 0x2a2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935652));
    // 0x2a2e84: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a2e88: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2a2e88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2e8c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a2e8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a2e90: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2E90u;
    {
        const bool branch_taken_0x2a2e90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e90) {
            ctx->pc = 0x2A2E9Cu;
            goto label_2a2e9c;
        }
    }
    ctx->pc = 0x2A2E98u;
label_2a2e98:
    // 0x2a2e98: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2a2e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2e9c:
    // 0x2a2e9c: 0x0  nop
    ctx->pc = 0x2a2e9cu;
    // NOP
    // 0x2a2ea0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a2ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a2ea4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2a2ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a2ea8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2a2ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2a2eac: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2A2EACu;
    {
        const bool branch_taken_0x2a2eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2EACu;
            // 0x2a2eb0: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2eac) {
            ctx->pc = 0x2A2E54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2e54;
        }
    }
    ctx->pc = 0x2A2EB4u;
    // 0x2a2eb4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2eb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2ebc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2EBCu;
    {
        const bool branch_taken_0x2a2ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2EBCu;
            // 0x2a2ec0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ebc) {
            ctx->pc = 0x2A2EE0u;
            goto label_2a2ee0;
        }
    }
    ctx->pc = 0x2A2EC4u;
    // 0x2a2ec4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a2ec8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2ecc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2ECCu;
    {
        const bool branch_taken_0x2a2ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a2ecc) {
            ctx->pc = 0x2A2EE0u;
            goto label_2a2ee0;
        }
    }
    ctx->pc = 0x2A2ED4u;
    // 0x2a2ed4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a2ed8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A2ED8u;
    {
        const bool branch_taken_0x2a2ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ed8) {
            ctx->pc = 0x2A2F08u;
            goto label_2a2f08;
        }
    }
    ctx->pc = 0x2A2EE0u;
label_2a2ee0:
    // 0x2a2ee0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2a2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a2ee4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2EE4u;
    {
        const bool branch_taken_0x2a2ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ee4) {
            ctx->pc = 0x2A2F0Cu;
            goto label_2a2f0c;
        }
    }
    ctx->pc = 0x2A2EECu;
    // 0x2a2eec: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2a2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2a2ef0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2ef4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2EF4u;
    {
        const bool branch_taken_0x2a2ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a2ef4) {
            ctx->pc = 0x2A2F0Cu;
            goto label_2a2f0c;
        }
    }
    ctx->pc = 0x2A2EFCu;
    // 0x2a2efc: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x2a2efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2a2f00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2F00u;
    {
        const bool branch_taken_0x2a2f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f00) {
            ctx->pc = 0x2A2F0Cu;
            goto label_2a2f0c;
        }
    }
    ctx->pc = 0x2A2F08u;
label_2a2f08:
    // 0x2a2f08: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a2f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2f0c:
    // 0x2a2f0c: 0x87828464  lh          $v0, -0x7B9C($gp)
    ctx->pc = 0x2a2f0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935652)));
    // 0x2a2f10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2F10u;
    {
        const bool branch_taken_0x2a2f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2F10u;
            // 0x2a2f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f10) {
            ctx->pc = 0x2A2F28u;
            goto label_2a2f28;
        }
    }
    ctx->pc = 0x2A2F18u;
    // 0x2a2f18: 0x87828466  lh          $v0, -0x7B9A($gp)
    ctx->pc = 0x2a2f18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935654)));
    // 0x2a2f1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2F1Cu;
    {
        const bool branch_taken_0x2a2f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f1c) {
            ctx->pc = 0x2A2F2Cu;
            goto label_2a2f2c;
        }
    }
    ctx->pc = 0x2A2F24u;
    // 0x2a2f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2f28:
    // 0x2a2f28: 0xaf829940  sw          $v0, -0x66C0($gp)
    ctx->pc = 0x2a2f28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940992), GPR_U32(ctx, 2));
label_2a2f2c:
    // 0x2a2f2c: 0x93829a40  lbu         $v0, -0x65C0($gp)
    ctx->pc = 0x2a2f2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941248)));
    // 0x2a2f30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A2F30u;
    {
        const bool branch_taken_0x2a2f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f30) {
            ctx->pc = 0x2A2F64u;
            goto label_2a2f64;
        }
    }
    ctx->pc = 0x2A2F38u;
    // 0x2a2f38: 0x8f838ad8  lw          $v1, -0x7528($gp)
    ctx->pc = 0x2a2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937304)));
    // 0x2a2f3c: 0x24025d44  addiu       $v0, $zero, 0x5D44
    ctx->pc = 0x2a2f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23876));
    // 0x2a2f40: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2F40u;
    {
        const bool branch_taken_0x2a2f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a2f40) {
            ctx->pc = 0x2A2F64u;
            goto label_2a2f64;
        }
    }
    ctx->pc = 0x2A2F48u;
    // 0x2a2f48: 0x93829968  lbu         $v0, -0x6698($gp)
    ctx->pc = 0x2a2f48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941032)));
    // 0x2a2f4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2F4Cu;
    {
        const bool branch_taken_0x2a2f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f4c) {
            ctx->pc = 0x2A2F64u;
            goto label_2a2f64;
        }
    }
    ctx->pc = 0x2A2F54u;
    // 0x2a2f54: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2a2f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2a2f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f5c: 0xc052c78  jal         func_14B1E0
    ctx->pc = 0x2A2F5Cu;
    SET_GPR_U32(ctx, 31, 0x2A2F64u);
    ctx->pc = 0x2A2F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2F5Cu;
            // 0x2a2f60: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B1E0u;
    if (runtime->hasFunction(0x14B1E0u)) {
        auto targetFn = runtime->lookupFunction(0x14B1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2F64u; }
        if (ctx->pc != 0x2A2F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugKeyLock__8CGamePadFi_0x14b1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2F64u; }
        if (ctx->pc != 0x2A2F64u) { return; }
    }
    ctx->pc = 0x2A2F64u;
label_2a2f64:
    // 0x2a2f64: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2F64u;
    {
        const bool branch_taken_0x2a2f64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2F64u;
            // 0x2a2f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f64) {
            ctx->pc = 0x2A2F78u;
            goto label_2a2f78;
        }
    }
    ctx->pc = 0x2A2F6Cu;
    // 0x2a2f6c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2F6Cu;
    {
        const bool branch_taken_0x2a2f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f6c) {
            ctx->pc = 0x2A2F80u;
            goto label_2a2f80;
        }
    }
    ctx->pc = 0x2A2F74u;
    // 0x2a2f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2f78:
    // 0x2a2f78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A2F78u;
    {
        const bool branch_taken_0x2a2f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f78) {
            ctx->pc = 0x2A2FA4u;
            goto label_2a2fa4;
        }
    }
    ctx->pc = 0x2A2F80u;
label_2a2f80:
    // 0x2a2f80: 0x93829a40  lbu         $v0, -0x65C0($gp)
    ctx->pc = 0x2a2f80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941248)));
    // 0x2a2f84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2F84u;
    {
        const bool branch_taken_0x2a2f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f84) {
            ctx->pc = 0x2A2F98u;
            goto label_2a2f98;
        }
    }
    ctx->pc = 0x2A2F8Cu;
    // 0x2a2f8c: 0x8f8499a4  lw          $a0, -0x665C($gp)
    ctx->pc = 0x2a2f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941092)));
    // 0x2a2f90: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x2A2F90u;
    SET_GPR_U32(ctx, 31, 0x2A2F98u);
    ctx->pc = 0x2A2F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2F90u;
            // 0x2a2f94: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2F98u; }
        if (ctx->pc != 0x2A2F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2F98u; }
        if (ctx->pc != 0x2A2F98u) { return; }
    }
    ctx->pc = 0x2A2F98u;
label_2a2f98:
    // 0x2a2f98: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a2f9c:
    // 0x2a2f9c: 0xa7829a48  sh          $v0, -0x65B8($gp)
    ctx->pc = 0x2a2f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941256), (uint16_t)GPR_U32(ctx, 2));
label_2a2fa0:
    // 0x2a2fa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a2fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2fa4:
    // 0x2a2fa4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a2fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a2fa8:
    // 0x2a2fa8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a2fa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a2fac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a2facu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2fb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a2fb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2fb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a2fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2FC0u;
            // 0x2a2fc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2FC8u;
}
