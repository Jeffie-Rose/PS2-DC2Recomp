#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuMainFrmImg__FRi9mgRect<i>9mgRect<i>iiiii
// Address: 0x223f00 - 0x223fd4
void DrawMenuMainFrmImg__FRi9mgRect_i_9mgRect_i_iiiii_0x223f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuMainFrmImg__FRi9mgRect_i_9mgRect_i_iiiii_0x223f00");
#endif

    switch (ctx->pc) {
        case 0x223f58u: goto label_223f58;
        case 0x223f60u: goto label_223f60;
        case 0x223f6cu: goto label_223f6c;
        case 0x223f78u: goto label_223f78;
        case 0x223f84u: goto label_223f84;
        case 0x223f9cu: goto label_223f9c;
        case 0x223facu: goto label_223fac;
        case 0x223fb4u: goto label_223fb4;
        default: break;
    }

    ctx->pc = 0x223f00u;

    // 0x223f00: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x223f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x223f04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x223f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x223f08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x223f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x223f0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x223f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x223f10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x223f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x223f14: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x223f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223f1c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x223f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x223f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223f24: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x223f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f28: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x223f28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x223f2c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x223f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f30: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x223f30u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x223f34: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x223f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x223f38: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x223f38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x223f3c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x223f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x223f40: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x223f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x223f44: 0x8c74003c  lw          $s4, 0x3C($v1)
    ctx->pc = 0x223f44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x223f48: 0x1280001a  beqz        $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x223F48u;
    {
        const bool branch_taken_0x223f48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223F48u;
            // 0x223f4c: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f48) {
            ctx->pc = 0x223FB4u;
            goto label_223fb4;
        }
    }
    ctx->pc = 0x223F50u;
    // 0x223f50: 0xc08878c  jal         func_221E30
    ctx->pc = 0x223F50u;
    SET_GPR_U32(ctx, 31, 0x223F58u);
    ctx->pc = 0x223F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223F50u;
            // 0x223f54: 0x86850000  lh          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F58u; }
        if (ctx->pc != 0x223F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F58u; }
        if (ctx->pc != 0x223F58u) { return; }
    }
    ctx->pc = 0x223F58u;
label_223f58:
    // 0x223f58: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x223F58u;
    SET_GPR_U32(ctx, 31, 0x223F60u);
    ctx->pc = 0x223F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223F58u;
            // 0x223f5c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F60u; }
        if (ctx->pc != 0x223F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F60u; }
        if (ctx->pc != 0x223F60u) { return; }
    }
    ctx->pc = 0x223F60u;
label_223f60:
    // 0x223f60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x223f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x223f64: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x223F64u;
    SET_GPR_U32(ctx, 31, 0x223F6Cu);
    ctx->pc = 0x223F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223F64u;
            // 0x223f68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F6Cu; }
        if (ctx->pc != 0x223F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F6Cu; }
        if (ctx->pc != 0x223F6Cu) { return; }
    }
    ctx->pc = 0x223F6Cu;
label_223f6c:
    // 0x223f6c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x223f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x223f70: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x223F70u;
    SET_GPR_U32(ctx, 31, 0x223F78u);
    ctx->pc = 0x223F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223F70u;
            // 0x223f74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F78u; }
        if (ctx->pc != 0x223F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F78u; }
        if (ctx->pc != 0x223F78u) { return; }
    }
    ctx->pc = 0x223F78u;
label_223f78:
    // 0x223f78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x223f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f7c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x223F7Cu;
    SET_GPR_U32(ctx, 31, 0x223F84u);
    ctx->pc = 0x223F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223F7Cu;
            // 0x223f80: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F84u; }
        if (ctx->pc != 0x223F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F84u; }
        if (ctx->pc != 0x223F84u) { return; }
    }
    ctx->pc = 0x223F84u;
label_223f84:
    // 0x223f84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x223f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x223f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f8c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x223f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f90: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x223f90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f94: 0xc04d320  jal         func_134C80
    ctx->pc = 0x223F94u;
    SET_GPR_U32(ctx, 31, 0x223F9Cu);
    ctx->pc = 0x223F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223F94u;
            // 0x223f98: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F9Cu; }
        if (ctx->pc != 0x223F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F9Cu; }
        if (ctx->pc != 0x223F9Cu) { return; }
    }
    ctx->pc = 0x223F9Cu;
label_223f9c:
    // 0x223f9c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x223f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x223fa0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x223fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x223fa4: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x223FA4u;
    SET_GPR_U32(ctx, 31, 0x223FACu);
    ctx->pc = 0x223FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223FA4u;
            // 0x223fa8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223FACu; }
        if (ctx->pc != 0x223FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223FACu; }
        if (ctx->pc != 0x223FACu) { return; }
    }
    ctx->pc = 0x223FACu;
label_223fac:
    // 0x223fac: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x223FACu;
    SET_GPR_U32(ctx, 31, 0x223FB4u);
    ctx->pc = 0x223FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223FACu;
            // 0x223fb0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223FB4u; }
        if (ctx->pc != 0x223FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223FB4u; }
        if (ctx->pc != 0x223FB4u) { return; }
    }
    ctx->pc = 0x223FB4u;
label_223fb4:
    // 0x223fb4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x223fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223fb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x223fb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223fbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x223fbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223fc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x223fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223fc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223fc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x223FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223FCCu;
            // 0x223fd0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223FD4u;
}
