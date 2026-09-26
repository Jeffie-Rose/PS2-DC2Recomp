#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SE_SetPan__6CSoundFiiiiii
// Address: 0x189ef0 - 0x189ff8
void SE_SetPan__6CSoundFiiiiii_0x189ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SE_SetPan__6CSoundFiiiiii_0x189ef0");
#endif

    switch (ctx->pc) {
        case 0x189f30u: goto label_189f30;
        case 0x189f84u: goto label_189f84;
        case 0x189fa0u: goto label_189fa0;
        case 0x189fd8u: goto label_189fd8;
        default: break;
    }

    ctx->pc = 0x189ef0u;

    // 0x189ef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x189ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x189ef4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x189ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x189ef8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x189ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x189efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x189efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189f00: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x189f00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189f08: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x189f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189f10: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x189f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f14: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x189f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f18: 0x2a21007f  slti        $at, $s1, 0x7F
    ctx->pc = 0x189f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x189f1c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x189F1Cu;
    {
        const bool branch_taken_0x189f1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x189F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189F1Cu;
            // 0x189f20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f1c) {
            ctx->pc = 0x189F38u;
            goto label_189f38;
        }
    }
    ctx->pc = 0x189F24u;
    // 0x189f24: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x189f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x189f28: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x189F28u;
    SET_GPR_U32(ctx, 31, 0x189F30u);
    ctx->pc = 0x189F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189F28u;
            // 0x189f2c: 0x248447b0  addiu       $a0, $a0, 0x47B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F30u; }
        if (ctx->pc != 0x189F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F30u; }
        if (ctx->pc != 0x189F30u) { return; }
    }
    ctx->pc = 0x189F30u;
label_189f30:
    // 0x189f30: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x189F30u;
    {
        const bool branch_taken_0x189f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189F30u;
            // 0x189f34: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f30) {
            ctx->pc = 0x189FDCu;
            goto label_189fdc;
        }
    }
    ctx->pc = 0x189F38u;
label_189f38:
    // 0x189f38: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x189f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x189f3c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x189f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x189f40: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189f44: 0x24632420  addiu       $v1, $v1, 0x2420
    ctx->pc = 0x189f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9248));
    // 0x189f48: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x189f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x189f4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189f50: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x189f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x189f54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189f58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x189f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189f5c: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x189F5Cu;
    {
        const bool branch_taken_0x189f5c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x189f5c) {
            ctx->pc = 0x189FD8u;
            goto label_189fd8;
        }
    }
    ctx->pc = 0x189F64u;
    // 0x189f64: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x189f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x189f68: 0x24b0fff9  addiu       $s0, $a1, -0x7
    ctx->pc = 0x189f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x189f6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x189f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x189f70: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189f74: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x189f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x189f78: 0x344600b0  ori         $a2, $v0, 0xB0
    ctx->pc = 0x189f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x189f7c: 0xc048f4e  jal         func_123D38
    ctx->pc = 0x189F7Cu;
    SET_GPR_U32(ctx, 31, 0x189F84u);
    ctx->pc = 0x189F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189F7Cu;
            // 0x189f80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D38u;
    if (runtime->hasFunction(0x123D38u)) {
        auto targetFn = runtime->lookupFunction(0x123D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F84u; }
        if (ctx->pc != 0x189F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutMsg_0x123d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F84u; }
        if (ctx->pc != 0x189F84u) { return; }
    }
    ctx->pc = 0x189F84u;
label_189f84:
    // 0x189f84: 0x3282007f  andi        $v0, $s4, 0x7F
    ctx->pc = 0x189f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)127);
    // 0x189f88: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189f8c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x189f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x189f90: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x189f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x189f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f98: 0xc048f4e  jal         func_123D38
    ctx->pc = 0x189F98u;
    SET_GPR_U32(ctx, 31, 0x189FA0u);
    ctx->pc = 0x189F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189F98u;
            // 0x189f9c: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D38u;
    if (runtime->hasFunction(0x123D38u)) {
        auto targetFn = runtime->lookupFunction(0x123D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189FA0u; }
        if (ctx->pc != 0x189FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutMsg_0x123d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189FA0u; }
        if (ctx->pc != 0x189FA0u) { return; }
    }
    ctx->pc = 0x189FA0u;
label_189fa0:
    // 0x189fa0: 0x240200fd  addiu       $v0, $zero, 0xFD
    ctx->pc = 0x189fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x189fa4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x189fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x189fa8: 0xa3a20068  sb          $v0, 0x68($sp)
    ctx->pc = 0x189fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 2));
    // 0x189fac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189fb4: 0x24841090  addiu       $a0, $a0, 0x1090
    ctx->pc = 0x189fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4240));
    // 0x189fb8: 0xa3a20069  sb          $v0, 0x69($sp)
    ctx->pc = 0x189fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 105), (uint8_t)GPR_U32(ctx, 2));
    // 0x189fbc: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x189fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x189fc0: 0xa3b3006b  sb          $s3, 0x6B($sp)
    ctx->pc = 0x189fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 107), (uint8_t)GPR_U32(ctx, 19));
    // 0x189fc4: 0xa3b1006c  sb          $s1, 0x6C($sp)
    ctx->pc = 0x189fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 17));
    // 0x189fc8: 0xa3b2006d  sb          $s2, 0x6D($sp)
    ctx->pc = 0x189fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 109), (uint8_t)GPR_U32(ctx, 18));
    // 0x189fcc: 0xa3a0006a  sb          $zero, 0x6A($sp)
    ctx->pc = 0x189fccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x189fd0: 0xc048f98  jal         func_123E60
    ctx->pc = 0x189FD0u;
    SET_GPR_U32(ctx, 31, 0x189FD8u);
    ctx->pc = 0x189FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189FD0u;
            // 0x189fd4: 0xa3a0006e  sb          $zero, 0x6E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 110), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123E60u;
    if (runtime->hasFunction(0x123E60u)) {
        auto targetFn = runtime->lookupFunction(0x123E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189FD8u; }
        if (ctx->pc != 0x189FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMSIn_PutHsMsg_0x123e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189FD8u; }
        if (ctx->pc != 0x189FD8u) { return; }
    }
    ctx->pc = 0x189FD8u;
label_189fd8:
    // 0x189fd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x189fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_189fdc:
    // 0x189fdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x189fdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189fe0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x189fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189fe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x189FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189FF0u;
            // 0x189ff4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189FF8u;
}
