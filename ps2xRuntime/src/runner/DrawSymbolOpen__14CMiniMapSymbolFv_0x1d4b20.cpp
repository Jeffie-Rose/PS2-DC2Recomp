#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSymbolOpen__14CMiniMapSymbolFv
// Address: 0x1d4b20 - 0x1d4bc8
void DrawSymbolOpen__14CMiniMapSymbolFv_0x1d4b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSymbolOpen__14CMiniMapSymbolFv_0x1d4b20");
#endif

    switch (ctx->pc) {
        case 0x1d4b40u: goto label_1d4b40;
        case 0x1d4b48u: goto label_1d4b48;
        case 0x1d4b54u: goto label_1d4b54;
        case 0x1d4b6cu: goto label_1d4b6c;
        case 0x1d4b78u: goto label_1d4b78;
        case 0x1d4bb8u: goto label_1d4bb8;
        default: break;
    }

    ctx->pc = 0x1d4b20u;

    // 0x1d4b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4b24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d4b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d4b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4b34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b38: 0xc04d104  jal         func_134410
    ctx->pc = 0x1D4B38u;
    SET_GPR_U32(ctx, 31, 0x1D4B40u);
    ctx->pc = 0x1D4B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B38u;
            // 0x1d4b3c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B40u; }
        if (ctx->pc != 0x1D4B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B40u; }
        if (ctx->pc != 0x1D4B40u) { return; }
    }
    ctx->pc = 0x1D4B40u;
label_1d4b40:
    // 0x1d4b40: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1D4B40u;
    SET_GPR_U32(ctx, 31, 0x1D4B48u);
    ctx->pc = 0x1D4B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B40u;
            // 0x1d4b44: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B48u; }
        if (ctx->pc != 0x1D4B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B48u; }
        if (ctx->pc != 0x1D4B48u) { return; }
    }
    ctx->pc = 0x1D4B48u;
label_1d4b48:
    // 0x1d4b48: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1d4b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d4b4c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1D4B4Cu;
    SET_GPR_U32(ctx, 31, 0x1D4B54u);
    ctx->pc = 0x1D4B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B4Cu;
            // 0x1d4b50: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B54u; }
        if (ctx->pc != 0x1D4B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B54u; }
        if (ctx->pc != 0x1D4B54u) { return; }
    }
    ctx->pc = 0x1D4B54u;
label_1d4b54:
    // 0x1d4b54: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d4b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d4b58: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1d4b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d4b5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d4b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b60: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d4b60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b64: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1D4B64u;
    SET_GPR_U32(ctx, 31, 0x1D4B6Cu);
    ctx->pc = 0x1D4B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B64u;
            // 0x1d4b68: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B6Cu; }
        if (ctx->pc != 0x1D4B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B6Cu; }
        if (ctx->pc != 0x1D4B6Cu) { return; }
    }
    ctx->pc = 0x1D4B6Cu;
label_1d4b6c:
    // 0x1d4b6c: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1d4b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1d4b70: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1D4B70u;
    SET_GPR_U32(ctx, 31, 0x1D4B78u);
    ctx->pc = 0x1D4B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B70u;
            // 0x1d4b74: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B78u; }
        if (ctx->pc != 0x1D4B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B78u; }
        if (ctx->pc != 0x1D4B78u) { return; }
    }
    ctx->pc = 0x1D4B78u;
label_1d4b78:
    // 0x1d4b78: 0x86070164  lh          $a3, 0x164($s0)
    ctx->pc = 0x1d4b78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1d4b7c: 0x86080166  lh          $t0, 0x166($s0)
    ctx->pc = 0x1d4b7cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x1d4b80: 0x86030160  lh          $v1, 0x160($s0)
    ctx->pc = 0x1d4b80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1d4b84: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4B84u;
    {
        const bool branch_taken_0x1d4b84 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1D4B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B84u;
            // 0x1d4b88: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b84) {
            ctx->pc = 0x1D4B94u;
            goto label_1d4b94;
        }
    }
    ctx->pc = 0x1D4B8Cu;
    // 0x1d4b8c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1d4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d4b90: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d4b90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d4b94:
    // 0x1d4b94: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x1d4b94u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4b98: 0x86030162  lh          $v1, 0x162($s0)
    ctx->pc = 0x1d4b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x1d4b9c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4B9Cu;
    {
        const bool branch_taken_0x1d4b9c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1D4BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B9Cu;
            // 0x1d4ba0: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b9c) {
            ctx->pc = 0x1D4BACu;
            goto label_1d4bac;
        }
    }
    ctx->pc = 0x1D4BA4u;
    // 0x1d4ba4: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1d4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d4ba8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d4ba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d4bac:
    // 0x1d4bac: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1d4bacu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4bb0: 0xc079fd8  jal         func_1E7F60
    ctx->pc = 0x1D4BB0u;
    SET_GPR_U32(ctx, 31, 0x1D4BB8u);
    ctx->pc = 0x1D4BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BB0u;
            // 0x1d4bb4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F60u;
    if (runtime->hasFunction(0x1E7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1E7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4BB8u; }
        if (ctx->pc != 0x1D4BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScirror__10CPreSpriteFiiii_0x1e7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4BB8u; }
        if (ctx->pc != 0x1D4BB8u) { return; }
    }
    ctx->pc = 0x1D4BB8u;
label_1d4bb8:
    // 0x1d4bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4bbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BC0u;
            // 0x1d4bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4BC8u;
}
