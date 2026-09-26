#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SE_Play__6CSoundFiiiiiiiii
// Address: 0x189c10 - 0x189dd8
void SE_Play__6CSoundFiiiiiiiii_0x189c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SE_Play__6CSoundFiiiiiiiii_0x189c10");
#endif

    switch (ctx->pc) {
        case 0x189c68u: goto label_189c68;
        case 0x189cbcu: goto label_189cbc;
        case 0x189cd8u: goto label_189cd8;
        case 0x189d14u: goto label_189d14;
        case 0x189d6cu: goto label_189d6c;
        case 0x189da8u: goto label_189da8;
        default: break;
    }

    ctx->pc = 0x189c10u;

    // 0x189c10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x189c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x189c14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x189c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x189c18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x189c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x189c1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x189c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x189c20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x189c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x189c24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x189c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x189c28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x189c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x189c2c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x189c2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x189c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189c34: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x189c34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189c3c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x189c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189c44: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x189c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189c4c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x189c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x189c50: 0x2861007f  slti        $at, $v1, 0x7F
    ctx->pc = 0x189c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x189c54: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x189C54u;
    {
        const bool branch_taken_0x189c54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189C54u;
            // 0x189c58: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c54) {
            ctx->pc = 0x189C70u;
            goto label_189c70;
        }
    }
    ctx->pc = 0x189C5Cu;
    // 0x189c5c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x189c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x189c60: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x189C60u;
    SET_GPR_U32(ctx, 31, 0x189C68u);
    ctx->pc = 0x189C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189C60u;
            // 0x189c64: 0x248447b0  addiu       $a0, $a0, 0x47B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C68u; }
        if (ctx->pc != 0x189C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C68u; }
        if (ctx->pc != 0x189C68u) { return; }
    }
    ctx->pc = 0x189C68u;
label_189c68:
    // 0x189c68: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x189C68u;
    {
        const bool branch_taken_0x189c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189C68u;
            // 0x189c6c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c68) {
            ctx->pc = 0x189DACu;
            goto label_189dac;
        }
    }
    ctx->pc = 0x189C70u;
label_189c70:
    // 0x189c70: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x189c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x189c74: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x189c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x189c78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189c7c: 0x24632420  addiu       $v1, $v1, 0x2420
    ctx->pc = 0x189c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9248));
    // 0x189c80: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x189c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x189c84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189c88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x189c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x189c8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189c90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x189c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189c94: 0x18600044  blez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x189C94u;
    {
        const bool branch_taken_0x189c94 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x189c94) {
            ctx->pc = 0x189DA8u;
            goto label_189da8;
        }
    }
    ctx->pc = 0x189C9Cu;
    // 0x189c9c: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x189c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x189ca0: 0x24b0fff9  addiu       $s0, $a1, -0x7
    ctx->pc = 0x189ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x189ca4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x189ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x189ca8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189cac: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x189cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x189cb0: 0x344600b0  ori         $a2, $v0, 0xB0
    ctx->pc = 0x189cb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x189cb4: 0xc048f4e  jal         func_123D38
    ctx->pc = 0x189CB4u;
    SET_GPR_U32(ctx, 31, 0x189CBCu);
    ctx->pc = 0x189CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189CB4u;
            // 0x189cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D38u;
    if (runtime->hasFunction(0x123D38u)) {
        auto targetFn = runtime->lookupFunction(0x123D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189CBCu; }
        if (ctx->pc != 0x189CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutMsg_0x123d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189CBCu; }
        if (ctx->pc != 0x189CBCu) { return; }
    }
    ctx->pc = 0x189CBCu;
label_189cbc:
    // 0x189cbc: 0x3222007f  andi        $v0, $s1, 0x7F
    ctx->pc = 0x189cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
    // 0x189cc0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189cc4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x189cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x189cc8: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x189cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x189ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189cd0: 0xc048f4e  jal         func_123D38
    ctx->pc = 0x189CD0u;
    SET_GPR_U32(ctx, 31, 0x189CD8u);
    ctx->pc = 0x189CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189CD0u;
            // 0x189cd4: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D38u;
    if (runtime->hasFunction(0x123D38u)) {
        auto targetFn = runtime->lookupFunction(0x123D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189CD8u; }
        if (ctx->pc != 0x189CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutMsg_0x123d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189CD8u; }
        if (ctx->pc != 0x189CD8u) { return; }
    }
    ctx->pc = 0x189CD8u;
label_189cd8:
    // 0x189cd8: 0x240200f9  addiu       $v0, $zero, 0xF9
    ctx->pc = 0x189cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    // 0x189cdc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189ce0: 0x27be00a9  addiu       $fp, $sp, 0xA9
    ctx->pc = 0x189ce0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 169));
    // 0x189ce4: 0xa3a200a8  sb          $v0, 0xA8($sp)
    ctx->pc = 0x189ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 2));
    // 0x189ce8: 0x27b700aa  addiu       $s7, $sp, 0xAA
    ctx->pc = 0x189ce8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 170));
    // 0x189cec: 0xa3c00000  sb          $zero, 0x0($fp)
    ctx->pc = 0x189cecu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x189cf0: 0x27b600ab  addiu       $s6, $sp, 0xAB
    ctx->pc = 0x189cf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 171));
    // 0x189cf4: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x189cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x189cf8: 0x27b100ac  addiu       $s1, $sp, 0xAC
    ctx->pc = 0x189cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x189cfc: 0xa2d20000  sb          $s2, 0x0($s6)
    ctx->pc = 0x189cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x189d00: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x189d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x189d04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d08: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x189d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x189d0c: 0xc048f98  jal         func_123E60
    ctx->pc = 0x189D0Cu;
    SET_GPR_U32(ctx, 31, 0x189D14u);
    ctx->pc = 0x189D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D0Cu;
            // 0x189d10: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123E60u;
    if (runtime->hasFunction(0x123E60u)) {
        auto targetFn = runtime->lookupFunction(0x123E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D14u; }
        if (ctx->pc != 0x189D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutHsMsg_0x123e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D14u; }
        if (ctx->pc != 0x189D14u) { return; }
    }
    ctx->pc = 0x189D14u;
label_189d14:
    // 0x189d14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189d18: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189d1c: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x189d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x189d20: 0x240700f9  addiu       $a3, $zero, 0xF9
    ctx->pc = 0x189d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    // 0x189d24: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x189d24u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x189d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189d2c: 0x83a300b0  lb          $v1, 0xB0($sp)
    ctx->pc = 0x189d2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x189d30: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x189d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x189d34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d38: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x189d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x189d3c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x189d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x189d40: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x189d40u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x189d44: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x189d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x189d48: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x189d48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x189d4c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x189d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x189d50: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x189d50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x189d54: 0xa3a700a8  sb          $a3, 0xA8($sp)
    ctx->pc = 0x189d54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 7));
    // 0x189d58: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x189d58u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x189d5c: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x189d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x189d60: 0xa2d40000  sb          $s4, 0x0($s6)
    ctx->pc = 0x189d60u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x189d64: 0xc048f98  jal         func_123E60
    ctx->pc = 0x189D64u;
    SET_GPR_U32(ctx, 31, 0x189D6Cu);
    ctx->pc = 0x189D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D64u;
            // 0x189d68: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123E60u;
    if (runtime->hasFunction(0x123E60u)) {
        auto targetFn = runtime->lookupFunction(0x123E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D6Cu; }
        if (ctx->pc != 0x189D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutHsMsg_0x123e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D6Cu; }
        if (ctx->pc != 0x189D6Cu) { return; }
    }
    ctx->pc = 0x189D6Cu;
label_189d6c:
    // 0x189d6c: 0x240200fd  addiu       $v0, $zero, 0xFD
    ctx->pc = 0x189d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x189d70: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189d74: 0xa3a200a8  sb          $v0, 0xA8($sp)
    ctx->pc = 0x189d74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 2));
    // 0x189d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d7c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x189d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x189d80: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x189d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x189d84: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x189d84u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x189d88: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x189d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x189d8c: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x189d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x189d90: 0xa2d50000  sb          $s5, 0x0($s6)
    ctx->pc = 0x189d90u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x189d94: 0x83a200b8  lb          $v0, 0xB8($sp)
    ctx->pc = 0x189d94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x189d98: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x189d98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x189d9c: 0xa3b300ad  sb          $s3, 0xAD($sp)
    ctx->pc = 0x189d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 173), (uint8_t)GPR_U32(ctx, 19));
    // 0x189da0: 0xc048f98  jal         func_123E60
    ctx->pc = 0x189DA0u;
    SET_GPR_U32(ctx, 31, 0x189DA8u);
    ctx->pc = 0x189DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189DA0u;
            // 0x189da4: 0xa3a000ae  sb          $zero, 0xAE($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 174), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123E60u;
    if (runtime->hasFunction(0x123E60u)) {
        auto targetFn = runtime->lookupFunction(0x123E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DA8u; }
        if (ctx->pc != 0x189DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutHsMsg_0x123e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DA8u; }
        if (ctx->pc != 0x189DA8u) { return; }
    }
    ctx->pc = 0x189DA8u;
label_189da8:
    // 0x189da8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x189da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_189dac:
    // 0x189dac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x189dacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x189db0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x189db0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x189db4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x189db4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189db8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x189db8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189dbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x189dbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189dc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x189dc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189dc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189dc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189dc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189dcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x189DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189DD0u;
            // 0x189dd4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189DD8u;
}
