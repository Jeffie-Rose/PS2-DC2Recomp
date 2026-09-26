#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SE_SetVol__6CSoundFiiiiii
// Address: 0x189de0 - 0x189ee4
void SE_SetVol__6CSoundFiiiiii_0x189de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SE_SetVol__6CSoundFiiiiii_0x189de0");
#endif

    switch (ctx->pc) {
        case 0x189e20u: goto label_189e20;
        case 0x189e74u: goto label_189e74;
        case 0x189e90u: goto label_189e90;
        case 0x189ec4u: goto label_189ec4;
        default: break;
    }

    ctx->pc = 0x189de0u;

    // 0x189de0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x189de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x189de4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x189de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x189de8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x189de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x189dec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x189decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189df0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x189df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189df4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189df8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x189df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189e00: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x189e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e04: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x189e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e08: 0x2a21007f  slti        $at, $s1, 0x7F
    ctx->pc = 0x189e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x189e0c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x189E0Cu;
    {
        const bool branch_taken_0x189e0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x189E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189E0Cu;
            // 0x189e10: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e0c) {
            ctx->pc = 0x189E28u;
            goto label_189e28;
        }
    }
    ctx->pc = 0x189E14u;
    // 0x189e14: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x189e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x189e18: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x189E18u;
    SET_GPR_U32(ctx, 31, 0x189E20u);
    ctx->pc = 0x189E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189E18u;
            // 0x189e1c: 0x248447b0  addiu       $a0, $a0, 0x47B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E20u; }
        if (ctx->pc != 0x189E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E20u; }
        if (ctx->pc != 0x189E20u) { return; }
    }
    ctx->pc = 0x189E20u;
label_189e20:
    // 0x189e20: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x189E20u;
    {
        const bool branch_taken_0x189e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189E20u;
            // 0x189e24: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e20) {
            ctx->pc = 0x189EC8u;
            goto label_189ec8;
        }
    }
    ctx->pc = 0x189E28u;
label_189e28:
    // 0x189e28: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x189e28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x189e2c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x189e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x189e30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189e34: 0x24632420  addiu       $v1, $v1, 0x2420
    ctx->pc = 0x189e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9248));
    // 0x189e38: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x189e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x189e3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189e40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x189e40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x189e44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189e48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x189e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189e4c: 0x1860001d  blez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x189E4Cu;
    {
        const bool branch_taken_0x189e4c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x189e4c) {
            ctx->pc = 0x189EC4u;
            goto label_189ec4;
        }
    }
    ctx->pc = 0x189E54u;
    // 0x189e54: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x189e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x189e58: 0x24b0fff9  addiu       $s0, $a1, -0x7
    ctx->pc = 0x189e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x189e5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x189e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x189e60: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189e64: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x189e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x189e68: 0x344600b0  ori         $a2, $v0, 0xB0
    ctx->pc = 0x189e68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x189e6c: 0xc048f4e  jal         func_123D38
    ctx->pc = 0x189E6Cu;
    SET_GPR_U32(ctx, 31, 0x189E74u);
    ctx->pc = 0x189E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189E6Cu;
            // 0x189e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D38u;
    if (runtime->hasFunction(0x123D38u)) {
        auto targetFn = runtime->lookupFunction(0x123D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E74u; }
        if (ctx->pc != 0x189E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutMsg_0x123d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E74u; }
        if (ctx->pc != 0x189E74u) { return; }
    }
    ctx->pc = 0x189E74u;
label_189e74:
    // 0x189e74: 0x3282007f  andi        $v0, $s4, 0x7F
    ctx->pc = 0x189e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)127);
    // 0x189e78: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189e7c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x189e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x189e80: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x189e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x189e84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e88: 0xc048f4e  jal         func_123D38
    ctx->pc = 0x189E88u;
    SET_GPR_U32(ctx, 31, 0x189E90u);
    ctx->pc = 0x189E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189E88u;
            // 0x189e8c: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D38u;
    if (runtime->hasFunction(0x123D38u)) {
        auto targetFn = runtime->lookupFunction(0x123D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E90u; }
        if (ctx->pc != 0x189E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutMsg_0x123d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E90u; }
        if (ctx->pc != 0x189E90u) { return; }
    }
    ctx->pc = 0x189E90u;
label_189e90:
    // 0x189e90: 0x240200fd  addiu       $v0, $zero, 0xFD
    ctx->pc = 0x189e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x189e94: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189e98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e9c: 0xa3a20068  sb          $v0, 0x68($sp)
    ctx->pc = 0x189e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 2));
    // 0x189ea0: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x189ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x189ea4: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x189ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x189ea8: 0xa3b3006b  sb          $s3, 0x6B($sp)
    ctx->pc = 0x189ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 107), (uint8_t)GPR_U32(ctx, 19));
    // 0x189eac: 0xa3b1006c  sb          $s1, 0x6C($sp)
    ctx->pc = 0x189eacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 17));
    // 0x189eb0: 0xa3b2006d  sb          $s2, 0x6D($sp)
    ctx->pc = 0x189eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 109), (uint8_t)GPR_U32(ctx, 18));
    // 0x189eb4: 0xa3a00069  sb          $zero, 0x69($sp)
    ctx->pc = 0x189eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x189eb8: 0xa3a0006a  sb          $zero, 0x6A($sp)
    ctx->pc = 0x189eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x189ebc: 0xc048f98  jal         func_123E60
    ctx->pc = 0x189EBCu;
    SET_GPR_U32(ctx, 31, 0x189EC4u);
    ctx->pc = 0x189EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189EBCu;
            // 0x189ec0: 0xa3a0006e  sb          $zero, 0x6E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 110), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123E60u;
    if (runtime->hasFunction(0x123E60u)) {
        auto targetFn = runtime->lookupFunction(0x123E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189EC4u; }
        if (ctx->pc != 0x189EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutHsMsg_0x123e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189EC4u; }
        if (ctx->pc != 0x189EC4u) { return; }
    }
    ctx->pc = 0x189EC4u;
label_189ec4:
    // 0x189ec4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x189ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_189ec8:
    // 0x189ec8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x189ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189ecc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x189eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189ed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189ed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189edc: 0x3e00008  jr          $ra
    ctx->pc = 0x189EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189EDCu;
            // 0x189ee0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189EE4u;
}
