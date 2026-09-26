#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSeSrcVolPan__FPA4_fP14CFuncPointMngrP15CFuncPointCheckPiPfPfi
// Address: 0x29eb90 - 0x29ee30
void GetSeSrcVolPan__FPA4_fP14CFuncPointMngrP15CFuncPointCheckPiPfPfi_0x29eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSeSrcVolPan__FPA4_fP14CFuncPointMngrP15CFuncPointCheckPiPfPfi_0x29eb90");
#endif

    switch (ctx->pc) {
        case 0x29ebe4u: goto label_29ebe4;
        case 0x29ebf0u: goto label_29ebf0;
        case 0x29ebf8u: goto label_29ebf8;
        case 0x29ec00u: goto label_29ec00;
        case 0x29ec3cu: goto label_29ec3c;
        case 0x29ec5cu: goto label_29ec5c;
        case 0x29eca0u: goto label_29eca0;
        case 0x29ecb0u: goto label_29ecb0;
        case 0x29ecc0u: goto label_29ecc0;
        case 0x29ecd4u: goto label_29ecd4;
        case 0x29ecdcu: goto label_29ecdc;
        case 0x29ece4u: goto label_29ece4;
        case 0x29ed18u: goto label_29ed18;
        case 0x29ed28u: goto label_29ed28;
        case 0x29ed38u: goto label_29ed38;
        case 0x29ed48u: goto label_29ed48;
        case 0x29ed64u: goto label_29ed64;
        case 0x29ed90u: goto label_29ed90;
        case 0x29eda8u: goto label_29eda8;
        case 0x29edf0u: goto label_29edf0;
        case 0x29ee00u: goto label_29ee00;
        default: break;
    }

    ctx->pc = 0x29eb90u;

    // 0x29eb90: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x29eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x29eb94: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x29eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x29eb98: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29eb9c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29eba0: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x29eba0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eba4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29eba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29eba8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29eba8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29ebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29ebb0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29ebb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29ebb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29ebb8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29ebb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29ebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29ebc0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29ebc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ebc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ebc8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x29ebc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ebccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ebd0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29ebd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29ebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ebdc: 0xc0a77f4  jal         func_29DFD0
    ctx->pc = 0x29EBDCu;
    SET_GPR_U32(ctx, 31, 0x29EBE4u);
    ctx->pc = 0x29EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EBDCu;
            // 0x29ebe0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EBE4u; }
        if (ctx->pc != 0x29EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EBE4u; }
        if (ctx->pc != 0x29EBE4u) { return; }
    }
    ctx->pc = 0x29EBE4u;
label_29ebe4:
    // 0x29ebe4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29ebe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebe8: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x29EBE8u;
    SET_GPR_U32(ctx, 31, 0x29EBF0u);
    ctx->pc = 0x29EBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EBE8u;
            // 0x29ebec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EBF0u; }
        if (ctx->pc != 0x29EBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EBF0u; }
        if (ctx->pc != 0x29EBF0u) { return; }
    }
    ctx->pc = 0x29EBF0u;
label_29ebf0:
    // 0x29ebf0: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29EBF0u;
    SET_GPR_U32(ctx, 31, 0x29EBF8u);
    ctx->pc = 0x29EBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EBF0u;
            // 0x29ebf4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EBF8u; }
        if (ctx->pc != 0x29EBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EBF8u; }
        if (ctx->pc != 0x29EBF8u) { return; }
    }
    ctx->pc = 0x29EBF8u;
label_29ebf8:
    // 0x29ebf8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x29EBF8u;
    {
        const bool branch_taken_0x29ebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ebf8) {
            ctx->pc = 0x29ECA8u;
            goto label_29eca8;
        }
    }
    ctx->pc = 0x29EC00u;
label_29ec00:
    // 0x29ec00: 0x8c4301b0  lw          $v1, 0x1B0($v0)
    ctx->pc = 0x29ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x29ec04: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x29EC04u;
    {
        const bool branch_taken_0x29ec04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EC04u;
            // 0x29ec08: 0x217182a  slt         $v1, $s0, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec04) {
            ctx->pc = 0x29EC94u;
            goto label_29ec94;
        }
    }
    ctx->pc = 0x29EC0Cu;
    // 0x29ec0c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29EC0Cu;
    {
        const bool branch_taken_0x29ec0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ec0c) {
            ctx->pc = 0x29EC1Cu;
            goto label_29ec1c;
        }
    }
    ctx->pc = 0x29EC14u;
    // 0x29ec14: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x29EC14u;
    {
        const bool branch_taken_0x29ec14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EC14u;
            // 0x29ec18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec14) {
            ctx->pc = 0x29EE04u;
            goto label_29ee04;
        }
    }
    ctx->pc = 0x29EC1Cu;
label_29ec1c:
    // 0x29ec1c: 0x78430180  lq          $v1, 0x180($v0)
    ctx->pc = 0x29ec1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x29ec20: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x29ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29ec24: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29ec24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec28: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29ec28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29ec30: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x29ec30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x29ec34: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x29EC34u;
    SET_GPR_U32(ctx, 31, 0x29EC3Cu);
    ctx->pc = 0x29EC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EC34u;
            // 0x29ec38: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EC3Cu; }
        if (ctx->pc != 0x29EC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EC3Cu; }
        if (ctx->pc != 0x29EC3Cu) { return; }
    }
    ctx->pc = 0x29EC3Cu;
label_29ec3c:
    // 0x29ec3c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x29ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x29ec40: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x29ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x29ec44: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x29ec44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ec48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29ec4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29ec50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29ec50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec54: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x29EC54u;
    SET_GPR_U32(ctx, 31, 0x29EC5Cu);
    ctx->pc = 0x29EC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EC54u;
            // 0x29ec58: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EC5Cu; }
        if (ctx->pc != 0x29EC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EC5Cu; }
        if (ctx->pc != 0x29EC5Cu) { return; }
    }
    ctx->pc = 0x29EC5Cu;
label_29ec5c:
    // 0x29ec5c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x29ec5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ec60: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x29ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x29ec64: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x29ec64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x29ec68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ec68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ec6c: 0x0  nop
    ctx->pc = 0x29ec6cu;
    // NOP
    // 0x29ec70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29ec70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ec74: 0x0  nop
    ctx->pc = 0x29ec74u;
    // NOP
    // 0x29ec78: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29EC78u;
    {
        const bool branch_taken_0x29ec78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EC78u;
            // 0x29ec7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec78) {
            ctx->pc = 0x29EC94u;
            goto label_29ec94;
        }
    }
    ctx->pc = 0x29EC80u;
    // 0x29ec80: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x29ec80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x29ec84: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x29ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x29ec88: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x29ec88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x29ec8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29ec8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29ec90: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x29ec90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_29ec94:
    // 0x29ec94: 0x0  nop
    ctx->pc = 0x29ec94u;
    // NOP
    // 0x29ec98: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29EC98u;
    SET_GPR_U32(ctx, 31, 0x29ECA0u);
    ctx->pc = 0x29EC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EC98u;
            // 0x29ec9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ECA0u; }
        if (ctx->pc != 0x29ECA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ECA0u; }
        if (ctx->pc != 0x29ECA0u) { return; }
    }
    ctx->pc = 0x29ECA0u;
label_29eca0:
    // 0x29eca0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x29ECA0u;
    {
        const bool branch_taken_0x29eca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29eca0) {
            ctx->pc = 0x29EC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ec00;
        }
    }
    ctx->pc = 0x29ECA8u;
label_29eca8:
    // 0x29eca8: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x29ECA8u;
    SET_GPR_U32(ctx, 31, 0x29ECB0u);
    ctx->pc = 0x29ECACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECA8u;
            // 0x29ecac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ECB0u; }
        if (ctx->pc != 0x29ECB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ECB0u; }
        if (ctx->pc != 0x29ECB0u) { return; }
    }
    ctx->pc = 0x29ECB0u;
label_29ecb0:
    // 0x29ecb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29ecb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ecb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29ecb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ecb8: 0xc0a77f4  jal         func_29DFD0
    ctx->pc = 0x29ECB8u;
    SET_GPR_U32(ctx, 31, 0x29ECC0u);
    ctx->pc = 0x29ECBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECB8u;
            // 0x29ecbc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ECC0u; }
        if (ctx->pc != 0x29ECC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ECC0u; }
        if (ctx->pc != 0x29ECC0u) { return; }
    }
    ctx->pc = 0x29ECC0u;
label_29ecc0:
    // 0x29ecc0: 0x18400050  blez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x29ECC0u;
    {
        const bool branch_taken_0x29ecc0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29ECC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECC0u;
            // 0x29ecc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecc0) {
            ctx->pc = 0x29EE04u;
            goto label_29ee04;
        }
    }
    ctx->pc = 0x29ECC8u;
    // 0x29ecc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29ecc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eccc: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x29ECCCu;
    SET_GPR_U32(ctx, 31, 0x29ECD4u);
    ctx->pc = 0x29ECD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECCCu;
            // 0x29ecd0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ECD4u; }
        if (ctx->pc != 0x29ECD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ECD4u; }
        if (ctx->pc != 0x29ECD4u) { return; }
    }
    ctx->pc = 0x29ECD4u;
label_29ecd4:
    // 0x29ecd4: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29ECD4u;
    SET_GPR_U32(ctx, 31, 0x29ECDCu);
    ctx->pc = 0x29ECD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECD4u;
            // 0x29ecd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ECDCu; }
        if (ctx->pc != 0x29ECDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ECDCu; }
        if (ctx->pc != 0x29ECDCu) { return; }
    }
    ctx->pc = 0x29ECDCu;
label_29ecdc:
    // 0x29ecdc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x29ECDCu;
    {
        const bool branch_taken_0x29ecdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ECE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECDCu;
            // 0x29ece0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecdc) {
            ctx->pc = 0x29EDF8u;
            goto label_29edf8;
        }
    }
    ctx->pc = 0x29ECE4u;
label_29ece4:
    // 0x29ece4: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x29ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x29ece8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x29ECE8u;
    {
        const bool branch_taken_0x29ece8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ECECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECE8u;
            // 0x29ecec: 0x217102a  slt         $v0, $s0, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ece8) {
            ctx->pc = 0x29EDE4u;
            goto label_29ede4;
        }
    }
    ctx->pc = 0x29ECF0u;
    // 0x29ecf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29ECF0u;
    {
        const bool branch_taken_0x29ecf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECF0u;
            // 0x29ecf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecf0) {
            ctx->pc = 0x29ED00u;
            goto label_29ed00;
        }
    }
    ctx->pc = 0x29ECF8u;
    // 0x29ecf8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x29ECF8u;
    {
        const bool branch_taken_0x29ecf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ECFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ECF8u;
            // 0x29ecfc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecf8) {
            ctx->pc = 0x29EE08u;
            goto label_29ee08;
        }
    }
    ctx->pc = 0x29ED00u;
label_29ed00:
    // 0x29ed00: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x29ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x29ed04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ed08: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29ED08u;
    {
        const bool branch_taken_0x29ed08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29ED0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ED08u;
            // 0x29ed0c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed08) {
            ctx->pc = 0x29ED6Cu;
            goto label_29ed6c;
        }
    }
    ctx->pc = 0x29ED10u;
    // 0x29ed10: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x29ED10u;
    SET_GPR_U32(ctx, 31, 0x29ED18u);
    ctx->pc = 0x29ED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ED10u;
            // 0x29ed14: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED18u; }
        if (ctx->pc != 0x29ED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED18u; }
        if (ctx->pc != 0x29ED18u) { return; }
    }
    ctx->pc = 0x29ED18u;
label_29ed18:
    // 0x29ed18: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x29ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29ed1c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x29ed1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed20: 0xc04c094  jal         func_130250
    ctx->pc = 0x29ED20u;
    SET_GPR_U32(ctx, 31, 0x29ED28u);
    ctx->pc = 0x29ED24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ED20u;
            // 0x29ed24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED28u; }
        if (ctx->pc != 0x29ED28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED28u; }
        if (ctx->pc != 0x29ED28u) { return; }
    }
    ctx->pc = 0x29ED28u;
label_29ed28:
    // 0x29ed28: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x29ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29ed2c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x29ed2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29ed30: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x29ED30u;
    SET_GPR_U32(ctx, 31, 0x29ED38u);
    ctx->pc = 0x29ED34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ED30u;
            // 0x29ed34: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED38u; }
        if (ctx->pc != 0x29ED38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED38u; }
        if (ctx->pc != 0x29ED38u) { return; }
    }
    ctx->pc = 0x29ED38u;
label_29ed38:
    // 0x29ed38: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29ed3c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x29ed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29ed40: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x29ED40u;
    SET_GPR_U32(ctx, 31, 0x29ED48u);
    ctx->pc = 0x29ED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ED40u;
            // 0x29ed44: 0x26260050  addiu       $a2, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED48u; }
        if (ctx->pc != 0x29ED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED48u; }
        if (ctx->pc != 0x29ED48u) { return; }
    }
    ctx->pc = 0x29ED48u;
label_29ed48:
    // 0x29ed48: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x29ed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29ed4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ed4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed50: 0xc62d0028  lwc1        $f13, 0x28($s1)
    ctx->pc = 0x29ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29ed54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29ed54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed58: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x29ed58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29ed5c: 0xc063c30  jal         func_18F0C0
    ctx->pc = 0x29ED5Cu;
    SET_GPR_U32(ctx, 31, 0x29ED64u);
    ctx->pc = 0x29ED60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ED5Cu;
            // 0x29ed60: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F0C0u;
    if (runtime->hasFunction(0x18F0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED64u; }
        if (ctx->pc != 0x29ED64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfPfff_0x18f0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED64u; }
        if (ctx->pc != 0x29ED64u) { return; }
    }
    ctx->pc = 0x29ED64u;
label_29ed64:
    // 0x29ed64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29ED64u;
    {
        const bool branch_taken_0x29ed64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ed64) {
            ctx->pc = 0x29EDA8u;
            goto label_29eda8;
        }
    }
    ctx->pc = 0x29ED6Cu;
label_29ed6c:
    // 0x29ed6c: 0x0  nop
    ctx->pc = 0x29ed6cu;
    // NOP
    // 0x29ed70: 0x7a230180  lq          $v1, 0x180($s1)
    ctx->pc = 0x29ed70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x29ed74: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x29ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29ed78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29ed7c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29ed7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29ed80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed84: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x29ed84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x29ed88: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x29ED88u;
    SET_GPR_U32(ctx, 31, 0x29ED90u);
    ctx->pc = 0x29ED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29ED88u;
            // 0x29ed8c: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED90u; }
        if (ctx->pc != 0x29ED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED90u; }
        if (ctx->pc != 0x29ED90u) { return; }
    }
    ctx->pc = 0x29ED90u;
label_29ed90:
    // 0x29ed90: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x29ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29ed94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ed94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed98: 0xc62d0028  lwc1        $f13, 0x28($s1)
    ctx->pc = 0x29ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29ed9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29ed9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eda0: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x29EDA0u;
    SET_GPR_U32(ctx, 31, 0x29EDA8u);
    ctx->pc = 0x29EDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EDA0u;
            // 0x29eda4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EDA8u; }
        if (ctx->pc != 0x29EDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EDA8u; }
        if (ctx->pc != 0x29EDA8u) { return; }
    }
    ctx->pc = 0x29EDA8u;
label_29eda8:
    // 0x29eda8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x29eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x29edac: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x29edacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29edb0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x29edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x29edb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29edb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29edb8: 0x0  nop
    ctx->pc = 0x29edb8u;
    // NOP
    // 0x29edbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29edbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29edc0: 0x0  nop
    ctx->pc = 0x29edc0u;
    // NOP
    // 0x29edc4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x29EDC4u;
    {
        const bool branch_taken_0x29edc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29edc4) {
            ctx->pc = 0x29EDE4u;
            goto label_29ede4;
        }
    }
    ctx->pc = 0x29EDCCu;
    // 0x29edcc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x29edccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x29edd0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x29edd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x29edd4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x29edd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x29edd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29edd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29eddc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x29eddcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x29ede0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x29ede0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_29ede4:
    // 0x29ede4: 0x0  nop
    ctx->pc = 0x29ede4u;
    // NOP
    // 0x29ede8: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29EDE8u;
    SET_GPR_U32(ctx, 31, 0x29EDF0u);
    ctx->pc = 0x29EDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EDE8u;
            // 0x29edec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EDF0u; }
        if (ctx->pc != 0x29EDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EDF0u; }
        if (ctx->pc != 0x29EDF0u) { return; }
    }
    ctx->pc = 0x29EDF0u;
label_29edf0:
    // 0x29edf0: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x29EDF0u;
    {
        const bool branch_taken_0x29edf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EDF0u;
            // 0x29edf4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29edf0) {
            ctx->pc = 0x29ECE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ece4;
        }
    }
    ctx->pc = 0x29EDF8u;
label_29edf8:
    // 0x29edf8: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x29EDF8u;
    SET_GPR_U32(ctx, 31, 0x29EE00u);
    ctx->pc = 0x29EDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EDF8u;
            // 0x29edfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EE00u; }
        if (ctx->pc != 0x29EE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EE00u; }
        if (ctx->pc != 0x29EE00u) { return; }
    }
    ctx->pc = 0x29EE00u;
label_29ee00:
    // 0x29ee00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29ee00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ee04:
    // 0x29ee04: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x29ee04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29ee08:
    // 0x29ee08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29ee08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29ee0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29ee0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ee10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29ee10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ee14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29ee14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ee18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29ee18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ee1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29ee1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ee20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29ee20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ee24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ee24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ee28: 0x3e00008  jr          $ra
    ctx->pc = 0x29EE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EE28u;
            // 0x29ee2c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29EE30u;
}
