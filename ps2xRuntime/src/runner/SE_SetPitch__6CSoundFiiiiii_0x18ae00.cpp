#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SE_SetPitch__6CSoundFiiiiii
// Address: 0x18ae00 - 0x18aee8
void SE_SetPitch__6CSoundFiiiiii_0x18ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SE_SetPitch__6CSoundFiiiiii_0x18ae00");
#endif

    switch (ctx->pc) {
        case 0x18ae40u: goto label_18ae40;
        case 0x18ae68u: goto label_18ae68;
        case 0x18ae84u: goto label_18ae84;
        case 0x18aec8u: goto label_18aec8;
        default: break;
    }

    ctx->pc = 0x18ae00u;

    // 0x18ae00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18ae04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18ae08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18ae0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ae10: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x18ae10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ae18: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x18ae18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ae20: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x18ae20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae24: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x18ae24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae28: 0x2a21007f  slti        $at, $s1, 0x7F
    ctx->pc = 0x18ae28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x18ae2c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x18AE2Cu;
    {
        const bool branch_taken_0x18ae2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE2Cu;
            // 0x18ae30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae2c) {
            ctx->pc = 0x18AE48u;
            goto label_18ae48;
        }
    }
    ctx->pc = 0x18AE34u;
    // 0x18ae34: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18ae38: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18AE38u;
    SET_GPR_U32(ctx, 31, 0x18AE40u);
    ctx->pc = 0x18AE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE38u;
            // 0x18ae3c: 0x248447b0  addiu       $a0, $a0, 0x47B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE40u; }
        if (ctx->pc != 0x18AE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE40u; }
        if (ctx->pc != 0x18AE40u) { return; }
    }
    ctx->pc = 0x18AE40u;
label_18ae40:
    // 0x18ae40: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18AE40u;
    {
        const bool branch_taken_0x18ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE40u;
            // 0x18ae44: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae40) {
            ctx->pc = 0x18AECCu;
            goto label_18aecc;
        }
    }
    ctx->pc = 0x18AE48u;
label_18ae48:
    // 0x18ae48: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x18ae48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x18ae4c: 0x24b0fff9  addiu       $s0, $a1, -0x7
    ctx->pc = 0x18ae4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x18ae50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18ae54: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18ae58: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x18ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x18ae5c: 0x344600b0  ori         $a2, $v0, 0xB0
    ctx->pc = 0x18ae5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x18ae60: 0xc048f4e  jal         func_123D38
    ctx->pc = 0x18AE60u;
    SET_GPR_U32(ctx, 31, 0x18AE68u);
    ctx->pc = 0x18AE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE60u;
            // 0x18ae64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D38u;
    if (runtime->hasFunction(0x123D38u)) {
        auto targetFn = runtime->lookupFunction(0x123D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE68u; }
        if (ctx->pc != 0x18AE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutMsg_0x123d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE68u; }
        if (ctx->pc != 0x18AE68u) { return; }
    }
    ctx->pc = 0x18AE68u;
label_18ae68:
    // 0x18ae68: 0x3282007f  andi        $v0, $s4, 0x7F
    ctx->pc = 0x18ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)127);
    // 0x18ae6c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18ae70: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x18ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x18ae74: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x18ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x18ae78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18ae78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae7c: 0xc048f4e  jal         func_123D38
    ctx->pc = 0x18AE7Cu;
    SET_GPR_U32(ctx, 31, 0x18AE84u);
    ctx->pc = 0x18AE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE7Cu;
            // 0x18ae80: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D38u;
    if (runtime->hasFunction(0x123D38u)) {
        auto targetFn = runtime->lookupFunction(0x123D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE84u; }
        if (ctx->pc != 0x18AE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutMsg_0x123d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE84u; }
        if (ctx->pc != 0x18AE84u) { return; }
    }
    ctx->pc = 0x18AE84u;
label_18ae84:
    // 0x18ae84: 0x240200fd  addiu       $v0, $zero, 0xFD
    ctx->pc = 0x18ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x18ae88: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18ae8c: 0xa3a20068  sb          $v0, 0x68($sp)
    ctx->pc = 0x18ae8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ae90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18ae90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ae98: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x18ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x18ae9c: 0xa3a20069  sb          $v0, 0x69($sp)
    ctx->pc = 0x18ae9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 105), (uint8_t)GPR_U32(ctx, 2));
    // 0x18aea0: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x18aea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x18aea4: 0x3242007f  andi        $v0, $s2, 0x7F
    ctx->pc = 0x18aea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
    // 0x18aea8: 0xa3b3006b  sb          $s3, 0x6B($sp)
    ctx->pc = 0x18aea8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 107), (uint8_t)GPR_U32(ctx, 19));
    // 0x18aeac: 0xa3a2006d  sb          $v0, 0x6D($sp)
    ctx->pc = 0x18aeacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 109), (uint8_t)GPR_U32(ctx, 2));
    // 0x18aeb0: 0x1211c3  sra         $v0, $s2, 7
    ctx->pc = 0x18aeb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 7));
    // 0x18aeb4: 0xa3b1006c  sb          $s1, 0x6C($sp)
    ctx->pc = 0x18aeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 17));
    // 0x18aeb8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x18aeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x18aebc: 0xa3a0006a  sb          $zero, 0x6A($sp)
    ctx->pc = 0x18aebcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x18aec0: 0xc048f98  jal         func_123E60
    ctx->pc = 0x18AEC0u;
    SET_GPR_U32(ctx, 31, 0x18AEC8u);
    ctx->pc = 0x18AEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEC0u;
            // 0x18aec4: 0xa3a2006e  sb          $v0, 0x6E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 110), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123E60u;
    if (runtime->hasFunction(0x123E60u)) {
        auto targetFn = runtime->lookupFunction(0x123E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AEC8u; }
        if (ctx->pc != 0x18AEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutHsMsg_0x123e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AEC8u; }
        if (ctx->pc != 0x18AEC8u) { return; }
    }
    ctx->pc = 0x18AEC8u;
label_18aec8:
    // 0x18aec8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18aec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18aecc:
    // 0x18aecc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18aeccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18aed0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18aed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18aed4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18aed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18aed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18aed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18aedc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18aedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18aee0: 0x3e00008  jr          $ra
    ctx->pc = 0x18AEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEE0u;
            // 0x18aee4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AEE8u;
}
