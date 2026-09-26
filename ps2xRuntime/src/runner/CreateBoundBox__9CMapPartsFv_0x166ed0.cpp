#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateBoundBox__9CMapPartsFv
// Address: 0x166ed0 - 0x167090
void CreateBoundBox__9CMapPartsFv_0x166ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateBoundBox__9CMapPartsFv_0x166ed0");
#endif

    switch (ctx->pc) {
        case 0x166f14u: goto label_166f14;
        case 0x166f30u: goto label_166f30;
        case 0x166f58u: goto label_166f58;
        case 0x166f7cu: goto label_166f7c;
        case 0x166f98u: goto label_166f98;
        case 0x166fbcu: goto label_166fbc;
        case 0x166fe8u: goto label_166fe8;
        case 0x166ffcu: goto label_166ffc;
        case 0x167008u: goto label_167008;
        case 0x167028u: goto label_167028;
        case 0x16703cu: goto label_16703c;
        case 0x167048u: goto label_167048;
        default: break;
    }

    ctx->pc = 0x166ed0u;

    // 0x166ed0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x166ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x166ed4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x166ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x166ed8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x166ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x166edc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x166edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x166ee0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x166ee0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ee4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x166ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x166ee8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x166ee8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166eec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x166eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x166ef0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x166ef4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166ef8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x166ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166f00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x166f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f04: 0x8c9000b0  lw          $s0, 0xB0($a0)
    ctx->pc = 0x166f04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x166f08: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x166F08u;
    {
        const bool branch_taken_0x166f08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F08u;
            // 0x166f0c: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f08) {
            ctx->pc = 0x166FD4u;
            goto label_166fd4;
        }
    }
    ctx->pc = 0x166F10u;
    // 0x166f10: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x166f10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_166f14:
    // 0x166f14: 0x1280002b  beqz        $s4, . + 4 + (0x2B << 2)
    ctx->pc = 0x166F14u;
    {
        const bool branch_taken_0x166f14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x166f14) {
            ctx->pc = 0x166FC4u;
            goto label_166fc4;
        }
    }
    ctx->pc = 0x166F1Cu;
    // 0x166f1c: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x166f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x166f20: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x166F20u;
    {
        const bool branch_taken_0x166f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F20u;
            // 0x166f24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f20) {
            ctx->pc = 0x166FC4u;
            goto label_166fc4;
        }
    }
    ctx->pc = 0x166F28u;
    // 0x166f28: 0xc05a1b4  jal         func_1686D0
    ctx->pc = 0x166F28u;
    SET_GPR_U32(ctx, 31, 0x166F30u);
    ctx->pc = 0x166F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166F28u;
            // 0x166f2c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1686D0u;
    if (runtime->hasFunction(0x1686D0u)) {
        auto targetFn = runtime->lookupFunction(0x1686D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F30u; }
        if (ctx->pc != 0x166F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBoundBox__9CMapPieceFP9mgVu0FBOX_0x1686d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F30u; }
        if (ctx->pc != 0x166F30u) { return; }
    }
    ctx->pc = 0x166F30u;
label_166f30:
    // 0x166f30: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x166F30u;
    {
        const bool branch_taken_0x166f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166f30) {
            ctx->pc = 0x166FC4u;
            goto label_166fc4;
        }
    }
    ctx->pc = 0x166F38u;
    // 0x166f38: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x166f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x166f3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x166f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x166f40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x166F40u;
    {
        const bool branch_taken_0x166f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166f40) {
            ctx->pc = 0x166F88u;
            goto label_166f88;
        }
    }
    ctx->pc = 0x166F48u;
    // 0x166f48: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x166F48u;
    {
        const bool branch_taken_0x166f48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F48u;
            // 0x166f4c: 0x26a40280  addiu       $a0, $s5, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f48) {
            ctx->pc = 0x166F60u;
            goto label_166f60;
        }
    }
    ctx->pc = 0x166F50u;
    // 0x166f50: 0xc04e624  jal         func_139890
    ctx->pc = 0x166F50u;
    SET_GPR_U32(ctx, 31, 0x166F58u);
    ctx->pc = 0x166F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166F50u;
            // 0x166f54: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F58u; }
        if (ctx->pc != 0x166F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F58u; }
        if (ctx->pc != 0x166F58u) { return; }
    }
    ctx->pc = 0x166F58u;
label_166f58:
    // 0x166f58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x166F58u;
    {
        const bool branch_taken_0x166f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F58u;
            // 0x166f5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f58) {
            ctx->pc = 0x166F7Cu;
            goto label_166f7c;
        }
    }
    ctx->pc = 0x166F60u;
label_166f60:
    // 0x166f60: 0x26a40280  addiu       $a0, $s5, 0x280
    ctx->pc = 0x166f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 640));
    // 0x166f64: 0x26a50290  addiu       $a1, $s5, 0x290
    ctx->pc = 0x166f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 656));
    // 0x166f68: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x166f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f6c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x166f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f70: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x166f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x166f74: 0xc04bd40  jal         func_12F500
    ctx->pc = 0x166F74u;
    SET_GPR_U32(ctx, 31, 0x166F7Cu);
    ctx->pc = 0x166F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166F74u;
            // 0x166f78: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F7Cu; }
        if (ctx->pc != 0x166F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F7Cu; }
        if (ctx->pc != 0x166F7Cu) { return; }
    }
    ctx->pc = 0x166F7Cu;
label_166f7c:
    // 0x166f7c: 0x0  nop
    ctx->pc = 0x166f7cu;
    // NOP
    // 0x166f80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x166F80u;
    {
        const bool branch_taken_0x166f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F80u;
            // 0x166f84: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f80) {
            ctx->pc = 0x166FC4u;
            goto label_166fc4;
        }
    }
    ctx->pc = 0x166F88u;
label_166f88:
    // 0x166f88: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x166F88u;
    {
        const bool branch_taken_0x166f88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F88u;
            // 0x166f8c: 0x26a40240  addiu       $a0, $s5, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f88) {
            ctx->pc = 0x166FA0u;
            goto label_166fa0;
        }
    }
    ctx->pc = 0x166F90u;
    // 0x166f90: 0xc04e624  jal         func_139890
    ctx->pc = 0x166F90u;
    SET_GPR_U32(ctx, 31, 0x166F98u);
    ctx->pc = 0x166F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166F90u;
            // 0x166f94: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F98u; }
        if (ctx->pc != 0x166F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166F98u; }
        if (ctx->pc != 0x166F98u) { return; }
    }
    ctx->pc = 0x166F98u;
label_166f98:
    // 0x166f98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x166F98u;
    {
        const bool branch_taken_0x166f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166F98u;
            // 0x166f9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f98) {
            ctx->pc = 0x166FBCu;
            goto label_166fbc;
        }
    }
    ctx->pc = 0x166FA0u;
label_166fa0:
    // 0x166fa0: 0x26a40240  addiu       $a0, $s5, 0x240
    ctx->pc = 0x166fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 576));
    // 0x166fa4: 0x26a50250  addiu       $a1, $s5, 0x250
    ctx->pc = 0x166fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 592));
    // 0x166fa8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x166fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166fac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x166facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166fb0: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x166fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x166fb4: 0xc04bd40  jal         func_12F500
    ctx->pc = 0x166FB4u;
    SET_GPR_U32(ctx, 31, 0x166FBCu);
    ctx->pc = 0x166FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166FB4u;
            // 0x166fb8: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166FBCu; }
        if (ctx->pc != 0x166FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166FBCu; }
        if (ctx->pc != 0x166FBCu) { return; }
    }
    ctx->pc = 0x166FBCu;
label_166fbc:
    // 0x166fbc: 0x0  nop
    ctx->pc = 0x166fbcu;
    // NOP
    // 0x166fc0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x166fc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166fc4:
    // 0x166fc4: 0x0  nop
    ctx->pc = 0x166fc4u;
    // NOP
    // 0x166fc8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x166fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166fcc: 0x1600ffd1  bnez        $s0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x166FCCu;
    {
        const bool branch_taken_0x166fcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x166FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166FCCu;
            // 0x166fd0: 0x26140010  addiu       $s4, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166fcc) {
            ctx->pc = 0x166F14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166f14;
        }
    }
    ctx->pc = 0x166FD4u;
label_166fd4:
    // 0x166fd4: 0x0  nop
    ctx->pc = 0x166fd4u;
    // NOP
    // 0x166fd8: 0x26a40260  addiu       $a0, $s5, 0x260
    ctx->pc = 0x166fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 608));
    // 0x166fdc: 0x26a50250  addiu       $a1, $s5, 0x250
    ctx->pc = 0x166fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 592));
    // 0x166fe0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x166FE0u;
    SET_GPR_U32(ctx, 31, 0x166FE8u);
    ctx->pc = 0x166FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166FE0u;
            // 0x166fe4: 0x26a60240  addiu       $a2, $s5, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166FE8u; }
        if (ctx->pc != 0x166FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166FE8u; }
        if (ctx->pc != 0x166FE8u) { return; }
    }
    ctx->pc = 0x166FE8u;
label_166fe8:
    // 0x166fe8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x166fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x166fec: 0x26a40260  addiu       $a0, $s5, 0x260
    ctx->pc = 0x166fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 608));
    // 0x166ff0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166ff4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x166FF4u;
    SET_GPR_U32(ctx, 31, 0x166FFCu);
    ctx->pc = 0x166FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166FF4u;
            // 0x166ff8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166FFCu; }
        if (ctx->pc != 0x166FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166FFCu; }
        if (ctx->pc != 0x166FFCu) { return; }
    }
    ctx->pc = 0x166FFCu;
label_166ffc:
    // 0x166ffc: 0x26a40250  addiu       $a0, $s5, 0x250
    ctx->pc = 0x166ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 592));
    // 0x167000: 0xc04c018  jal         func_130060
    ctx->pc = 0x167000u;
    SET_GPR_U32(ctx, 31, 0x167008u);
    ctx->pc = 0x167004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167000u;
            // 0x167004: 0x26a50240  addiu       $a1, $s5, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167008u; }
        if (ctx->pc != 0x167008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167008u; }
        if (ctx->pc != 0x167008u) { return; }
    }
    ctx->pc = 0x167008u;
label_167008:
    // 0x167008: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x167008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16700c: 0x26a402a0  addiu       $a0, $s5, 0x2A0
    ctx->pc = 0x16700cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 672));
    // 0x167010: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167014: 0x26a50290  addiu       $a1, $s5, 0x290
    ctx->pc = 0x167014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 656));
    // 0x167018: 0x26a60280  addiu       $a2, $s5, 0x280
    ctx->pc = 0x167018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 640));
    // 0x16701c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16701cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x167020: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x167020u;
    SET_GPR_U32(ctx, 31, 0x167028u);
    ctx->pc = 0x167024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167020u;
            // 0x167024: 0xe6a0026c  swc1        $f0, 0x26C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 620), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167028u; }
        if (ctx->pc != 0x167028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167028u; }
        if (ctx->pc != 0x167028u) { return; }
    }
    ctx->pc = 0x167028u;
label_167028:
    // 0x167028: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x167028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16702c: 0x26a402a0  addiu       $a0, $s5, 0x2A0
    ctx->pc = 0x16702cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 672));
    // 0x167030: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167034: 0xc041c4a  jal         func_107128
    ctx->pc = 0x167034u;
    SET_GPR_U32(ctx, 31, 0x16703Cu);
    ctx->pc = 0x167038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167034u;
            // 0x167038: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16703Cu; }
        if (ctx->pc != 0x16703Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16703Cu; }
        if (ctx->pc != 0x16703Cu) { return; }
    }
    ctx->pc = 0x16703Cu;
label_16703c:
    // 0x16703c: 0x26a40290  addiu       $a0, $s5, 0x290
    ctx->pc = 0x16703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 656));
    // 0x167040: 0xc04c018  jal         func_130060
    ctx->pc = 0x167040u;
    SET_GPR_U32(ctx, 31, 0x167048u);
    ctx->pc = 0x167044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167040u;
            // 0x167044: 0x26a50280  addiu       $a1, $s5, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167048u; }
        if (ctx->pc != 0x167048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167048u; }
        if (ctx->pc != 0x167048u) { return; }
    }
    ctx->pc = 0x167048u;
label_167048:
    // 0x167048: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x167048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x16704c: 0x2d11025  or          $v0, $s6, $s1
    ctx->pc = 0x16704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 17));
    // 0x167050: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x167050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167054: 0x0  nop
    ctx->pc = 0x167054u;
    // NOP
    // 0x167058: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x167058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16705c: 0xe6a002ac  swc1        $f0, 0x2AC($s5)
    ctx->pc = 0x16705cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 684), bits); }
    // 0x167060: 0xaeb60230  sw          $s6, 0x230($s5)
    ctx->pc = 0x167060u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 560), GPR_U32(ctx, 22));
    // 0x167064: 0xaeb10270  sw          $s1, 0x270($s5)
    ctx->pc = 0x167064u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 624), GPR_U32(ctx, 17));
    // 0x167068: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x167068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16706c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16706cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167070: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x167070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167074: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x167074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167078: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x167078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16707c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16707cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167088: 0x3e00008  jr          $ra
    ctx->pc = 0x167088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16708Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167088u;
            // 0x16708c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167090u;
}
