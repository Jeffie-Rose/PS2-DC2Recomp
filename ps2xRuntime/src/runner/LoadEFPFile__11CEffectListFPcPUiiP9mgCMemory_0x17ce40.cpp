#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadEFPFile__11CEffectListFPcPUiiP9mgCMemory
// Address: 0x17ce40 - 0x17d1f0
void LoadEFPFile__11CEffectListFPcPUiiP9mgCMemory_0x17ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadEFPFile__11CEffectListFPcPUiiP9mgCMemory_0x17ce40");
#endif

    switch (ctx->pc) {
        case 0x17ce98u: goto label_17ce98;
        case 0x17ceb8u: goto label_17ceb8;
        case 0x17cec8u: goto label_17cec8;
        case 0x17cee8u: goto label_17cee8;
        case 0x17cefcu: goto label_17cefc;
        case 0x17cf18u: goto label_17cf18;
        case 0x17cf48u: goto label_17cf48;
        case 0x17cf84u: goto label_17cf84;
        case 0x17cfa4u: goto label_17cfa4;
        case 0x17cfc0u: goto label_17cfc0;
        case 0x17cff4u: goto label_17cff4;
        case 0x17d00cu: goto label_17d00c;
        case 0x17d028u: goto label_17d028;
        case 0x17d03cu: goto label_17d03c;
        case 0x17d054u: goto label_17d054;
        case 0x17d07cu: goto label_17d07c;
        case 0x17d0a4u: goto label_17d0a4;
        case 0x17d0b4u: goto label_17d0b4;
        case 0x17d0d0u: goto label_17d0d0;
        case 0x17d10cu: goto label_17d10c;
        case 0x17d12cu: goto label_17d12c;
        case 0x17d14cu: goto label_17d14c;
        case 0x17d168u: goto label_17d168;
        case 0x17d174u: goto label_17d174;
        case 0x17d188u: goto label_17d188;
        case 0x17d198u: goto label_17d198;
        case 0x17d1a4u: goto label_17d1a4;
        default: break;
    }

    ctx->pc = 0x17ce40u;

    // 0x17ce40: 0x27bdfc00  addiu       $sp, $sp, -0x400
    ctx->pc = 0x17ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966272));
    // 0x17ce44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17ce48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17ce4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17ce50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17ce50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17ce54: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x17ce54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17ce58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17ce5c: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x17ce5cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x17ce60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17ce60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17ce64: 0x26d61ef0  addiu       $s6, $s6, 0x1EF0
    ctx->pc = 0x17ce64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 7920));
    // 0x17ce68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17ce68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17ce6c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x17ce6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ce70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ce74: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x17ce74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ce7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17ce7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ce80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ce84: 0xac930008  sw          $s3, 0x8($a0)
    ctx->pc = 0x17ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 19));
    // 0x17ce88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17ce88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce8c: 0xac940004  sw          $s4, 0x4($a0)
    ctx->pc = 0x17ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 20));
    // 0x17ce90: 0xc04a422  jal         func_129088
    ctx->pc = 0x17CE90u;
    SET_GPR_U32(ctx, 31, 0x17CE98u);
    ctx->pc = 0x17CE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE90u;
            // 0x17ce94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE98u; }
        if (ctx->pc != 0x17CE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE98u; }
        if (ctx->pc != 0x17CE98u) { return; }
    }
    ctx->pc = 0x17CE98u;
label_17ce98:
    // 0x17ce98: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17ce9c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17cea0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CEA0u;
    {
        const bool branch_taken_0x17cea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CEA0u;
            // 0x17cea4: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cea0) {
            ctx->pc = 0x17CEB0u;
            goto label_17ceb0;
        }
    }
    ctx->pc = 0x17CEA8u;
    // 0x17cea8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17ceac: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x17ceacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17ceb0:
    // 0x17ceb0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17CEB0u;
    SET_GPR_U32(ctx, 31, 0x17CEB8u);
    ctx->pc = 0x17CEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CEB0u;
            // 0x17ceb4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEB8u; }
        if (ctx->pc != 0x17CEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEB8u; }
        if (ctx->pc != 0x17CEB8u) { return; }
    }
    ctx->pc = 0x17CEB8u;
label_17ceb8:
    // 0x17ceb8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x17ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x17cebc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17cec0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x17CEC0u;
    SET_GPR_U32(ctx, 31, 0x17CEC8u);
    ctx->pc = 0x17CEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CEC0u;
            // 0x17cec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEC8u; }
        if (ctx->pc != 0x17CEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEC8u; }
        if (ctx->pc != 0x17CEC8u) { return; }
    }
    ctx->pc = 0x17CEC8u;
label_17cec8:
    // 0x17cec8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x17cec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x17cecc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17ceccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ced0: 0x24a53bc8  addiu       $a1, $a1, 0x3BC8
    ctx->pc = 0x17ced0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15304));
    // 0x17ced4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x17ced4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x17ced8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x17ced8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17cedc: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x17cedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17cee0: 0xc052788  jal         func_149E20
    ctx->pc = 0x17CEE0u;
    SET_GPR_U32(ctx, 31, 0x17CEE8u);
    ctx->pc = 0x17CEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CEE0u;
            // 0x17cee4: 0x27a902a0  addiu       $t1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEE8u; }
        if (ctx->pc != 0x17CEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CEE8u; }
        if (ctx->pc != 0x17CEE8u) { return; }
    }
    ctx->pc = 0x17CEE8u;
label_17cee8:
    // 0x17cee8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17cee8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ceec: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x17ceecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x17cef0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x17CEF0u;
    {
        const bool branch_taken_0x17cef0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CEF0u;
            // 0x17cef4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cef0) {
            ctx->pc = 0x17CF28u;
            goto label_17cf28;
        }
    }
    ctx->pc = 0x17CEF8u;
    // 0x17cef8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17cef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cefc:
    // 0x17cefc: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x17cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x17cf00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17cf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf04: 0x8c4501a0  lw          $a1, 0x1A0($v0)
    ctx->pc = 0x17cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x17cf08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17cf08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17cf0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf10: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x17CF10u;
    SET_GPR_U32(ctx, 31, 0x17CF18u);
    ctx->pc = 0x17CF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF10u;
            // 0x17cf14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF18u; }
        if (ctx->pc != 0x17CF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF18u; }
        if (ctx->pc != 0x17CF18u) { return; }
    }
    ctx->pc = 0x17CF18u;
label_17cf18:
    // 0x17cf18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17cf18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17cf1c: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x17cf1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x17cf20: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17CF20u;
    {
        const bool branch_taken_0x17cf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF20u;
            // 0x17cf24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf20) {
            ctx->pc = 0x17CEFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17cefc;
        }
    }
    ctx->pc = 0x17CF28u;
label_17cf28:
    // 0x17cf28: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x17cf28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x17cf2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17cf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf30: 0x24a53bd0  addiu       $a1, $a1, 0x3BD0
    ctx->pc = 0x17cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15312));
    // 0x17cf34: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x17cf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x17cf38: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x17cf38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17cf3c: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x17cf3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17cf40: 0xc052788  jal         func_149E20
    ctx->pc = 0x17CF40u;
    SET_GPR_U32(ctx, 31, 0x17CF48u);
    ctx->pc = 0x17CF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF40u;
            // 0x17cf44: 0x27a902a0  addiu       $t1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF48u; }
        if (ctx->pc != 0x17CF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF48u; }
        if (ctx->pc != 0x17CF48u) { return; }
    }
    ctx->pc = 0x17CF48u;
label_17cf48:
    // 0x17cf48: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x17cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x17cf4c: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x17cf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17cf50: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x17cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17cf54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17cf58: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x17cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17cf5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17cf60: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17cf64: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17cf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17cf68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CF68u;
    {
        const bool branch_taken_0x17cf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF68u;
            // 0x17cf6c: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf68) {
            ctx->pc = 0x17CF78u;
            goto label_17cf78;
        }
    }
    ctx->pc = 0x17CF70u;
    // 0x17cf70: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17cf74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17cf78:
    // 0x17cf78: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x17cf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17cf7c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17CF7Cu;
    SET_GPR_U32(ctx, 31, 0x17CF84u);
    ctx->pc = 0x17CF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF7Cu;
            // 0x17cf80: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF84u; }
        if (ctx->pc != 0x17CF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF84u; }
        if (ctx->pc != 0x17CF84u) { return; }
    }
    ctx->pc = 0x17CF84u;
label_17cf84:
    // 0x17cf84: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x17cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17cf88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17cf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf8c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x17cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17cf90: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x17cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17cf94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17cf98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17cf9c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17CF9Cu;
    SET_GPR_U32(ctx, 31, 0x17CFA4u);
    ctx->pc = 0x17CFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF9Cu;
            // 0x17cfa0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFA4u; }
        if (ctx->pc != 0x17CFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFA4u; }
        if (ctx->pc != 0x17CFA4u) { return; }
    }
    ctx->pc = 0x17CFA4u;
label_17cfa4:
    // 0x17cfa4: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17cfa8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x17cfa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17cfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfb0: 0x24a52a80  addiu       $a1, $a1, 0x2A80
    ctx->pc = 0x17cfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10880));
    // 0x17cfb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17cfb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfb8: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x17CFB8u;
    SET_GPR_U32(ctx, 31, 0x17CFC0u);
    ctx->pc = 0x17CFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFB8u;
            // 0x17cfbc: 0x24070184  addiu       $a3, $zero, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFC0u; }
        if (ctx->pc != 0x17CFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFC0u; }
        if (ctx->pc != 0x17CFC0u) { return; }
    }
    ctx->pc = 0x17CFC0u;
label_17cfc0:
    // 0x17cfc0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x17cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x17cfc4: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x17cfc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17cfc8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x17cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17cfcc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17cfd0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17cfd4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17cfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17cfd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CFD8u;
    {
        const bool branch_taken_0x17cfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFD8u;
            // 0x17cfdc: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfd8) {
            ctx->pc = 0x17CFE8u;
            goto label_17cfe8;
        }
    }
    ctx->pc = 0x17CFE0u;
    // 0x17cfe0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17cfe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17cfe8:
    // 0x17cfe8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x17cfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17cfec: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17CFECu;
    SET_GPR_U32(ctx, 31, 0x17CFF4u);
    ctx->pc = 0x17CFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFECu;
            // 0x17cff0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFF4u; }
        if (ctx->pc != 0x17CFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFF4u; }
        if (ctx->pc != 0x17CFF4u) { return; }
    }
    ctx->pc = 0x17CFF4u;
label_17cff4:
    // 0x17cff4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17cff8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17cff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cffc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x17cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17d000: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17d000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17d004: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17D004u;
    SET_GPR_U32(ctx, 31, 0x17D00Cu);
    ctx->pc = 0x17D008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D004u;
            // 0x17d008: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D00Cu; }
        if (ctx->pc != 0x17D00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D00Cu; }
        if (ctx->pc != 0x17D00Cu) { return; }
    }
    ctx->pc = 0x17D00Cu;
label_17d00c:
    // 0x17d00c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17d010: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x17d010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d018: 0x24a5d1f0  addiu       $a1, $a1, -0x2E10
    ctx->pc = 0x17d018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955504));
    // 0x17d01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d020: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x17D020u;
    SET_GPR_U32(ctx, 31, 0x17D028u);
    ctx->pc = 0x17D024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D020u;
            // 0x17d024: 0x24070050  addiu       $a3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D028u; }
        if (ctx->pc != 0x17D028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D028u; }
        if (ctx->pc != 0x17D028u) { return; }
    }
    ctx->pc = 0x17D028u;
label_17d028:
    // 0x17d028: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x17d028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x17d02c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17d02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d030: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17d030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d034: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x17D034u;
    {
        const bool branch_taken_0x17d034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D034u;
            // 0x17d038: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d034) {
            ctx->pc = 0x17D1B0u;
            goto label_17d1b0;
        }
    }
    ctx->pc = 0x17D03Cu;
label_17d03c:
    // 0x17d03c: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x17d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x17d040: 0x27a503a0  addiu       $a1, $sp, 0x3A0
    ctx->pc = 0x17d040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x17d044: 0x8c4402a0  lw          $a0, 0x2A0($v0)
    ctx->pc = 0x17d044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
    // 0x17d048: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x17d048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x17d04c: 0xc052844  jal         func_14A110
    ctx->pc = 0x17D04Cu;
    SET_GPR_U32(ctx, 31, 0x17D054u);
    ctx->pc = 0x17D050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D04Cu;
            // 0x17d050: 0x27a703e0  addiu       $a3, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A110u;
    if (runtime->hasFunction(0x14A110u)) {
        auto targetFn = runtime->lookupFunction(0x14A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D054u; }
        if (ctx->pc != 0x17D054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivPathNameExt__FPcPcPcPc_0x14a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D054u; }
        if (ctx->pc != 0x17D054u) { return; }
    }
    ctx->pc = 0x17D054u;
label_17d054:
    // 0x17d054: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x17d054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x17d058: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x17d058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17d05c: 0x245001a0  addiu       $s0, $v0, 0x1A0
    ctx->pc = 0x17d05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17d060: 0x245600a0  addiu       $s6, $v0, 0xA0
    ctx->pc = 0x17d060u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x17d064: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17d064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d068: 0x27a703f8  addiu       $a3, $sp, 0x3F8
    ctx->pc = 0x17d068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1016));
    // 0x17d06c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x17d06cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x17d070: 0x27a803fc  addiu       $t0, $sp, 0x3FC
    ctx->pc = 0x17d070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1020));
    // 0x17d074: 0xc060be8  jal         func_182FA0
    ctx->pc = 0x17D074u;
    SET_GPR_U32(ctx, 31, 0x17D07Cu);
    ctx->pc = 0x17D078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D074u;
            // 0x17d078: 0x742021  addu        $a0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182FA0u;
    if (runtime->hasFunction(0x182FA0u)) {
        auto targetFn = runtime->lookupFunction(0x182FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D07Cu; }
        if (ctx->pc != 0x17D07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBufferNums__14CEffectManagerFPciPiPi_0x182fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D07Cu; }
        if (ctx->pc != 0x17D07Cu) { return; }
    }
    ctx->pc = 0x17D07Cu;
label_17d07c:
    // 0x17d07c: 0x8fb503f8  lw          $s5, 0x3F8($sp)
    ctx->pc = 0x17d07cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
    // 0x17d080: 0x151a40  sll         $v1, $s5, 9
    ctx->pc = 0x17d080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 9));
    // 0x17d084: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17d084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17d088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D088u;
    {
        const bool branch_taken_0x17d088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D088u;
            // 0x17d08c: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d088) {
            ctx->pc = 0x17D098u;
            goto label_17d098;
        }
    }
    ctx->pc = 0x17D090u;
    // 0x17d090: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17d090u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17d094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17d098:
    // 0x17d098: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x17d098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17d09c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17D09Cu;
    SET_GPR_U32(ctx, 31, 0x17D0A4u);
    ctx->pc = 0x17D0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D09Cu;
            // 0x17d0a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0A4u; }
        if (ctx->pc != 0x17D0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0A4u; }
        if (ctx->pc != 0x17D0A4u) { return; }
    }
    ctx->pc = 0x17D0A4u;
label_17d0a4:
    // 0x17d0a4: 0x151a40  sll         $v1, $s5, 9
    ctx->pc = 0x17d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 9));
    // 0x17d0a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0ac: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17D0ACu;
    SET_GPR_U32(ctx, 31, 0x17D0B4u);
    ctx->pc = 0x17D0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D0ACu;
            // 0x17d0b0: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0B4u; }
        if (ctx->pc != 0x17D0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0B4u; }
        if (ctx->pc != 0x17D0B4u) { return; }
    }
    ctx->pc = 0x17D0B4u;
label_17d0b4:
    // 0x17d0b4: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17d0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17d0b8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x17d0b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0c0: 0x24a5f6d0  addiu       $a1, $a1, -0x930
    ctx->pc = 0x17d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964944));
    // 0x17d0c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0c8: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x17D0C8u;
    SET_GPR_U32(ctx, 31, 0x17D0D0u);
    ctx->pc = 0x17D0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D0C8u;
            // 0x17d0cc: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0D0u; }
        if (ctx->pc != 0x17D0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0D0u; }
        if (ctx->pc != 0x17D0D0u) { return; }
    }
    ctx->pc = 0x17D0D0u;
label_17d0d0:
    // 0x17d0d0: 0x8fb503fc  lw          $s5, 0x3FC($sp)
    ctx->pc = 0x17d0d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1020)));
    // 0x17d0d4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x17d0d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d0d8: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x17d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x17d0dc: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x17d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17d0e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17d0e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d0e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17d0ec: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17d0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17d0f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D0F0u;
    {
        const bool branch_taken_0x17d0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D0F0u;
            // 0x17d0f4: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0f0) {
            ctx->pc = 0x17D100u;
            goto label_17d100;
        }
    }
    ctx->pc = 0x17D0F8u;
    // 0x17d0f8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17d0fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17d100:
    // 0x17d100: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x17d100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17d104: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17D104u;
    SET_GPR_U32(ctx, 31, 0x17D10Cu);
    ctx->pc = 0x17D108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D104u;
            // 0x17d108: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D10Cu; }
        if (ctx->pc != 0x17D10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D10Cu; }
        if (ctx->pc != 0x17D10Cu) { return; }
    }
    ctx->pc = 0x17D10Cu;
label_17d10c:
    // 0x17d10c: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x17d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x17d110: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d114: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x17d114u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x17d118: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17d118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17d11c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d120: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17d120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17d124: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17D124u;
    SET_GPR_U32(ctx, 31, 0x17D12Cu);
    ctx->pc = 0x17D128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D124u;
            // 0x17d128: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D12Cu; }
        if (ctx->pc != 0x17D12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D12Cu; }
        if (ctx->pc != 0x17D12Cu) { return; }
    }
    ctx->pc = 0x17D12Cu;
label_17d12c:
    // 0x17d12c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17d130: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17d130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17d134: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x17d134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d13c: 0x24a50130  addiu       $a1, $a1, 0x130
    ctx->pc = 0x17d13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
    // 0x17d140: 0x24c60160  addiu       $a2, $a2, 0x160
    ctx->pc = 0x17d140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 352));
    // 0x17d144: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x17D144u;
    SET_GPR_U32(ctx, 31, 0x17D14Cu);
    ctx->pc = 0x17D148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D144u;
            // 0x17d148: 0x24070310  addiu       $a3, $zero, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D14Cu; }
        if (ctx->pc != 0x17D14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D14Cu; }
        if (ctx->pc != 0x17D14Cu) { return; }
    }
    ctx->pc = 0x17D14Cu;
label_17d14c:
    // 0x17d14c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17d14cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d150: 0x8fa603f8  lw          $a2, 0x3F8($sp)
    ctx->pc = 0x17d150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
    // 0x17d154: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x17d154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17d158: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x17d158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d15c: 0x8fa803fc  lw          $t0, 0x3FC($sp)
    ctx->pc = 0x17d15cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1020)));
    // 0x17d160: 0xc060ae8  jal         func_182BA0
    ctx->pc = 0x17D160u;
    SET_GPR_U32(ctx, 31, 0x17D168u);
    ctx->pc = 0x17D164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D160u;
            // 0x17d164: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BA0u;
    if (runtime->hasFunction(0x182BA0u)) {
        auto targetFn = runtime->lookupFunction(0x182BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D168u; }
        if (ctx->pc != 0x17D168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryEffCtrls__14CEffectManagerFP7CEffectiP11CEffectCtrli_0x182ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D168u; }
        if (ctx->pc != 0x17D168u) { return; }
    }
    ctx->pc = 0x17D168u;
label_17d168:
    // 0x17d168: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x17d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17d16c: 0xc060ab4  jal         func_182AD0
    ctx->pc = 0x17D16Cu;
    SET_GPR_U32(ctx, 31, 0x17D174u);
    ctx->pc = 0x17D170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D16Cu;
            // 0x17d170: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182AD0u;
    if (runtime->hasFunction(0x182AD0u)) {
        auto targetFn = runtime->lookupFunction(0x182AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D174u; }
        if (ctx->pc != 0x17D174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CEffectManagerFv_0x182ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D174u; }
        if (ctx->pc != 0x17D174u) { return; }
    }
    ctx->pc = 0x17D174u;
label_17d174:
    // 0x17d174: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x17d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17d178: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17d178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d17c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x17d17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x17d180: 0xc060c10  jal         func_183040
    ctx->pc = 0x17D180u;
    SET_GPR_U32(ctx, 31, 0x17D188u);
    ctx->pc = 0x17D184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D180u;
            // 0x17d184: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183040u;
    if (runtime->hasFunction(0x183040u)) {
        auto targetFn = runtime->lookupFunction(0x183040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D188u; }
        if (ctx->pc != 0x17D188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__14CEffectManagerFPci_0x183040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D188u; }
        if (ctx->pc != 0x17D188u) { return; }
    }
    ctx->pc = 0x17D188u;
label_17d188:
    // 0x17d188: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x17d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17d18c: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x17d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x17d190: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x17D190u;
    SET_GPR_U32(ctx, 31, 0x17D198u);
    ctx->pc = 0x17D194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D190u;
            // 0x17d194: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D198u; }
        if (ctx->pc != 0x17D198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D198u; }
        if (ctx->pc != 0x17D198u) { return; }
    }
    ctx->pc = 0x17D198u;
label_17d198:
    // 0x17d198: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x17d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17d19c: 0xc060b8c  jal         func_182E30
    ctx->pc = 0x17D19Cu;
    SET_GPR_U32(ctx, 31, 0x17D1A4u);
    ctx->pc = 0x17D1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D19Cu;
            // 0x17d1a0: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182E30u;
    if (runtime->hasFunction(0x182E30u)) {
        auto targetFn = runtime->lookupFunction(0x182E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1A4u; }
        if (ctx->pc != 0x17D1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__14CEffectManagerFv_0x182e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1A4u; }
        if (ctx->pc != 0x17D1A4u) { return; }
    }
    ctx->pc = 0x17D1A4u;
label_17d1a4:
    // 0x17d1a4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x17d1a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x17d1a8: 0x26940184  addiu       $s4, $s4, 0x184
    ctx->pc = 0x17d1a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 388));
    // 0x17d1ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17d1acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17d1b0:
    // 0x17d1b0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x17d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17d1b4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x17d1b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17d1b8: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x17D1B8u;
    {
        const bool branch_taken_0x17d1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d1b8) {
            ctx->pc = 0x17D03Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d03c;
        }
    }
    ctx->pc = 0x17D1C0u;
    // 0x17d1c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17d1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17d1c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17d1c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17d1c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17d1c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17d1cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17d1ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d1d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17d1d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d1d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17d1d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d1d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d1d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d1dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d1dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d1e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d1e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d1e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17D1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D1E8u;
            // 0x17d1ec: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D1F0u;
}
